#include <algorithm>
#include <numeric>
#include <iostream>
using namespace std;  

// Function to calculate the sum of array B
int calculateSum(int N, int A[])
{
    // Step 1: Update array A with GCD(A[i], max_element)
    int max_element = *std::max_element(A, A + N);
    for (int i = 0; i < N; ++i)
    {
        A[i] = std::__gcd(A[i], max_element); // Using __gcd from algorithm header
    }

    // Step 2: Sort array A
    std::sort(A, A + N);

    // Step 3: Calculate GCD for each pair and store in array B
    int B[N / 2];
    for (int j = 0; j < N / 2; ++j)
    {
        B[j] = std::__gcd(A[j], A[N - 1 - j]); // Using __gcd from algorithm header
    }

    // Step 4: Calculate sum of array B
    int sum_B = std::accumulate(B, B + N / 2, 0);

    return sum_B;
}

// Example usage:
int main()
{
    int N = 4;
    int A[] = {1, 14, 11, 19};
    int result = calculateSum(N, A);
    std::cout << "Sum of array B: " << result << std::endl; // Output should be 12
    return 0;
}
