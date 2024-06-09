# Read input values
n, m = map(int, input().split())
arr = list(map(int, input().split()))
queries = list(map(int, input().split()))

# Initialize prefix_min array to store minimums up to each index
prefix_min = [0] * n
prefix_min[0] = arr[0]

# Fill the prefix_min array
for i in range(1, n):
    prefix_min[i] = min(prefix_min[i-1], arr[i])

# Prepare the answer for each query using the prefix_min array
ans = [prefix_min[q] for q in queries]

# Print the results
print(' '.join(map(str, ans)))
