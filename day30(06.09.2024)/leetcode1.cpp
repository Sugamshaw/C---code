#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

unsigned long long binarynum(int num)
{
    unsigned long long res = 0, place = 1;
    while (num != 0)
    {
        int rem = num % 2; 
        res += place * rem; 
        num = num / 2;      
        place *= 10;       
    }
    return res;
}
string convertDateToBinary(string date)
{
    string ans = "";
    string current_str = "";
    for (int i = 0; i < date.length(); i++)
    {
        if (date[i] == '-')
        {
            int num = stoi(current_str);
            unsigned long long binary_value = binarynum(num);
            cout << binary_value << endl;
            ans += (to_string(binary_value));
            ans += "-";
            current_str = "";
        }
        else
        {
            current_str += date[i];
        }
    }
    int num = stoi(current_str);
    unsigned long long binary_value = binarynum(num);
    ans += to_string(binary_value);

    return ans;
}

int main()
{
    cout << convertDateToBinary("2080-02-29");
    return 0;
}