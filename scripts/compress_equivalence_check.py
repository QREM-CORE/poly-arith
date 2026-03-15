def compress_fips203_exact(x, d):
    """
    The exact mathematical definition from FIPS 203.
    Formula: round( (x * 2^d) / 3329 ) % 2^d
    Note: We use integer arithmetic with a half-modulus offset 
    to perfectly simulate "round to nearest integer" without floating point errors.
    """
    q = 3329
    two_to_d = 1 << d
    # Adding (q // 2) which is 1664 performs a perfect mathematically exact round-half-up
    rounded_result = ((x * two_to_d) + (q // 2)) // q
    return rounded_result % two_to_d

def compress_inha_algorithm7(x, d):
    """
    The mathematical approximation proposed in Algorithm 7 of the Inha paper.
    Uses a large constant m = 10321339 (which requires a 24x12 multiplier).
    """
    m = 10321339  # Approx (2^35 / 3329)
    t = m * x
    
    shift_amount = 35 - d
    rounding_bit_index = 34 - d
    
    # (t >> (35 - d)) + t[34 - d]
    base_shifted = t >> shift_amount
    rounding_bit = (t >> rounding_bit_index) & 1
    
    result = base_shifted + rounding_bit
    return result % (1 << d)

def compress_hardware_optimized(x, d):
    """
    The hardware-optimized scaling trick to fit the math into a standard 12x12->24 multiplier.
    Uses a smaller constant m_prime = 2520 (which fits perfectly in 12 bits).
    """
    m_prime = 2520  # Approx (2^23 / 3329)
    t = m_prime * x
    
    shift_amount = 23 - d
    rounding_bit_index = 22 - d
    
    # (t >> (23 - d)) + t[22 - d]
    base_shifted = t >> shift_amount
    rounding_bit = (t >> rounding_bit_index) & 1
    
    result = base_shifted + rounding_bit
    return result % (1 << d)

def run_equivalence_test():
    q = 3329
    # d parameters specified in the ML-KEM and Inha documentation
    d_values = [1, 4, 5, 10, 11] 
    
    print("Starting exhaustive equivalence test...")
    
    for d in d_values:
        mismatches_inha = 0
        mismatches_hw = 0
        
        for x in range(q):
            exact = compress_fips203_exact(x, d)
            inha = compress_inha_algorithm7(x, d)
            hw = compress_hardware_optimized(x, d)
            
            if exact != inha:
                mismatches_inha += 1
                
            if exact != hw:
                mismatches_hw += 1
                
        print(f"d = {d:2} | Total Values Checked: {q}")
        print(f"        -> Inha (24-bit const) Mismatches: {mismatches_inha}")
        print(f"        -> HW   (12-bit const) Mismatches: {mismatches_hw}")
        print("-" * 55)

if __name__ == "__main__":
    run_equivalence_test()
