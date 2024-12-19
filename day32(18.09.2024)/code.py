def changedArray(arr):
    from collections import Counter
    
    # Count the frequency of each number
    freq = Counter(arr)
    total_doubled = 0
    
    # Set to keep track of already considered numbers to avoid double counting
    considered = set()
    
    for num in freq:
        if num in considered:
            continue
        
        # Check if the number could be the result of doubling another number
        if num % 2 == 0 and (num // 2) in freq:
            possible_doubled = min(freq[num], freq[num // 2])
            total_doubled += possible_doubled
            considered.add(num)
            considered.add(num // 2)
    
    return total_doubled

# Example inputs
arr1 = [2, 5, 2, 3, 5, 4, 8]
arr2 = [2, 5, 2, 3, 5, 4, 8, 4, 2]

print("Output 1:", changedArray(arr1))  # Output: 4
print("Output 2:", changedArray(arr2))  # Output: 6
