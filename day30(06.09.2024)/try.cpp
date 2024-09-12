#include <iostream>
using namespace std;

unsigned long long binarynum(int num)
{
    unsigned long long res = 0, place = 1;
    while (num != 0)
    {
        int rem = num % 2;  // Get binary digit
        res += place * rem;  // Build the binary number
        num = num / 2;       // Move to the next digit
        place *= 10;        // Move to the next place value
    }
    return res;
}

int main() {
    int num = 2080;  // Example decimal number
    cout << "Binary of " << num << " is: " << binarynum(num) << endl;
    return 0;
}
