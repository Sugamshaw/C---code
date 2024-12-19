#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
void mergesortedarray(int arr1[], int size1, int arr2[], int size2, vector<int> &ans)
{
    int i = 0;
    int j = 0;

    while (i < size1 && j < size2)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] > arr2[j])
        {
            ans.push_back(arr2[j]);
            j++;
        }
        else
        {
            ans.push_back(arr1[i]);
            i++;
        }
    }
    while (i < size1)
    {
        ans.push_back(arr1[i]);
        i++;
    }
    while (j < size2)
    {
        ans.push_back(arr2[j]);
        j++;
    }
}
int main()
{
    int arr1[] = {20, 40, 60, 80, 90, 100};
    int arr2[] = {10, 30, 50, 70};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);
    // cout << size1 << endl;
    // cout << size2 << endl;

    vector<int> ans;
    mergesortedarray(arr1, size1, arr2, size2, ans);

    for (int nums : ans)
    {
        cout << nums << endl;
    }
    return 0;
}