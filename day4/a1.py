def is_prime(num):
    if num <= 1:
        return False
    if num == 2:
        return True
    if num % 2 == 0:
        return False
    max_divisor = int(num**0.5) + 1
    for divisor in range(3, max_divisor, 2):
        if num % divisor == 0:
            return False
    return True

def sieve_of_eratosthenes(max_num):
    is_prime_array = [True] * (max_num + 1)
    is_prime_array[0], is_prime_array[1] = False, False  # 0 and 1 are not primes
    for start in range(2, int(max_num**0.5) + 1):
        if is_prime_array[start]:
            for multiple in range(start * start, max_num + 1, start):
                is_prime_array[multiple] = False
    primes = [num for num, is_prime in enumerate(is_prime_array) if is_prime]
    return primes

def find_smallest_premium_prime(N):
    primes = sieve_of_eratosthenes(N)
    for p in primes:
        if p > N:
            break
        q = N // p
        if is_prime(q):
            return p
    return -1

# Input and output handling
if __name__ == "__main__":
    N = int(input().strip())
    result = find_smallest_premium_prime(N)
    print(result)
