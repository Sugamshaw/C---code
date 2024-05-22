#include <iostream>
using namespace std;

void fun(int &num, int k) {
    num &= ~(1 << k);  // This line unsets the k-th bit of num
}

int main() {
    int num = 7;  // 7 in binary is 0111
    int k = 1;
    fun(num, k);
    cout << num << endl;
    return 0;
}
