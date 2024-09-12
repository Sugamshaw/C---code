#include <iostream>
#include <vector>
#include <string>
using namespace std;
// Function to generate valid binary strings without adjacent zeros
void generateValidBinaryStrings(int n, std::string str, std::vector<std::string> &result)
{
    if (str.size() == n)
    {
        result.push_back(str);
        return;
    }

    // Append '1' and recurse
    generateValidBinaryStrings(n, str + '1', result);

    // Append '0' only if the last character was '1' or the string is empty (initial condition)
    if (str.empty() || str.back() == '1')
    {
        generateValidBinaryStrings(n, str + '0', result);
    }
}

std::vector<std::string> validBinaryStrings(int n)
{
    std::vector<std::string> result;
    generateValidBinaryStrings(n, "", result);
    return result;
}

int main()
{
    int n = 3; // Length of binary strings to generate

    std::vector<std::string> result = validBinaryStrings(n);

    std::cout << "Valid binary strings of length " << n << " are: " << std::endl;
    // for (const std::string &str : result)
    // {
    //     std::cout << str << std::endl;
    // }

    return 0;
}
