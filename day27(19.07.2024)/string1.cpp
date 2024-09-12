#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
int mystoi(string s)
{
    int len = s.size();
    double num = 0;
    int i = 0;
    while (s[i] == ' ')
    {
        i++;
    }
    bool negative = s[i] == '-';
    negative == true ? i++ : i;
    while (i < len && s[i] >= '0' && s[i] <= '9')
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }
    num = negative ? -num : num;
    num = (num > INT_MAX) ? INT_MAX : num;
    num = (num < INT_MIN) ? INT_MIN : num;
    return num;
}
string intToRoman(int num)
{
    string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string hrns[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string ths[] = {"", "M", "MM"};

    return ths[num / 1000] + hrns[(num % 1000) % 100] + tens[(num % 100) % 10] + ones[num % 10];
}
string addBinary(string a, string b)
{
    string ans;
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry)
    {
        if (i >= 0)
            carry += (a[i--] - '0');
        if (j >= 0)
            carry += (b[j--] - '0');
        ans.push_back(((carry % 2) + '0'));
        cout << ans << endl;
        carry /= 2;
    }

    reverse(begin(ans), end(ans));
    return ans;
}

void reverseString(char input[],int n,int start){
    for(int i=start,j=n-1+start; i!=j; i++,j--){
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
    }
}

void reverseEachWord(char input[]) {
    int start=0,count=1,i=0;
    while(input[i]!='\0'){
        i++;
        count++;
        if(input[i]=='\0'){
            reverseString(input,count-1,start);
            start = i+1;
            count = 0;
        }
    }
}

int main()
{
    vector<string> str = {"abc", "deq", "mee", "aqq", "dkd", "ccc"};
    string pattern = "abb";

    // cout << mystoi("123") << endl;

    // cout << intToRoman(123) << endl;
    cout << addBinary("111", "111") << endl;
    return 0;
}