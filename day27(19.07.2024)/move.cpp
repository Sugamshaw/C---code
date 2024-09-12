#include <iostream>
#include <string>
using namespace std;
int maxMoves(string s)
{
    int totalMoves = 0;
    int zeros = 0;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            zeros++;
        }
        else
        { // s[i] == '1'
            totalMoves += zeros;
        }
    }

    return totalMoves;
}

int maxOperations(const std::string &s)
{
    int operations = 0;
    int count_zeros = 0; // To keep track of zeros
    int n = s.length();

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '0')
        {
            count_zeros++;
        }
        else if (s[i] == '1' && count_zeros > 0)
        {
            operations += count_zeros;
        }
    }

    return operations;
}

int main()
{
    std::string s1 = "1001101";
    std::cout << maxOperations(s1) << std::endl; // Output: 4

    std::string s2 = "00111";
    std::cout << maxOperations(s2) << std::endl; // Output: 0

    return 0;
}