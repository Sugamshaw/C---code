#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int func()
{
}
int main()
{
    // vector<int> arr = {1, 2, 3,4};
    // vector<int> arr2;
    // arr2.push_back(3);
    // arr2.push_back(4);
    // arr2.push_back(5);

    // int sum = accumulate(arr.begin(), arr.end(), 1000);
    // int sum = inner_product(arr.begin(), arr.end(), arr2.begin(), 0);

    // vector<int> result(arr.size());

    // partial_sum(arr.begin(), arr.end(), result.begin());
    // for(int i:result){
    //     cout<<i<<" "<<endl;
    // }

    vector<int> arr(5);

    iota(arr.begin(), arr.end(), 200);
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}