def is_prime(num):
    if num <= 1:
        return False
    if num <= 3:
        return True
    if num % 2 == 0 or num % 3 == 0:
        return False
    i = 5
    while i * i <= num:
        if num % i == 0 or num % (i + 2) == 0:
            return False
        i += 6
    return True

def smallest_premium_prime(N):
    if N < 2:
        return -1
    
    # Generate primes up to N using Sieve of Eratosthenes
    sieve = [True] * (N + 1)
    sieve[0] = sieve[1] = False  # 0 and 1 are not primes
    p = 2
    while p * p <= N:
        if sieve[p]:
            for i in range(p * p, N + 1, p):
                sieve[i] = False
        p += 1
    
    primes = [num for num, is_prime_flag in enumerate(sieve) if is_prime_flag]
    
    for prime in primes:
        other_prime = N // prime
        if is_prime(other_prime):
            return prime
    
    return -1

# Input
N = int(input().strip())

# Output the smallest Premium Prime
print(smallest_premium_prime(N))
