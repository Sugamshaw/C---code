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
void merge(int arr[], int s, int e, int mid)
{
    int leftLength = mid - s + 1;
    int rigthLength = e-mid;

    int *leftArray = new int[leftLength];
    int *rightArray = new int[rigthLength];

    int index = s;
    for (int i = 0; i < leftLength; i++)
    {
        leftArray[i] = arr[index];
        index++;
    }
    for (int i = 0; i < rigthLength; i++)
    {
        rightArray[i] = arr[index];
        index++;
    }

    // merge left and right arrays
    int leftindex = 0;
    int rightindex = 0;
    int mainindex = s;
    while (leftindex < leftLength && rightindex < rigthLength)
    {
        if (leftArray[leftindex] < rightArray[rightindex])
        {
            arr[mainindex] = leftArray[leftindex];
            leftindex++;
            mainindex++;
        }
        else
        {
            arr[mainindex] = rightArray[rightindex];
            rightindex++;
            mainindex++;
        }
    }

    while (leftindex < leftLength)
    {
        arr[mainindex] = leftArray[leftindex];
        leftindex++;
        mainindex++;
    }
    while (rightindex < rigthLength)
    {
        arr[mainindex] = rightArray[rightindex];
        rightindex++;
        mainindex++;
    }
    delete[] leftArray;
    delete[] rightArray;
}

void mergeSort(int arr[], int s, int e)
{
    // single element in array
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    merge(arr, s, e, mid);
}
int main()
{
    // int arr1[] = {20, 40, 60, 80, 90, 100};
    // int arr2[] = {10, 30, 50, 70};
    // int size1 = sizeof(arr1) / sizeof(int);
    // int size2 = sizeof(arr2) / sizeof(int);
    // // cout << size1 << endl;
    // // cout << size2 << endl;

    // vector<int> ans;
    // mergesortedarray(arr1, size1, arr2, size2, ans);

    // for (int nums : ans)
    // {
    //     cout << nums << endl;
    // }

    int arr[] = {10, 54, 23, 582, 12, 5433, 100};
    mergeSort(arr, 0, 6);
    for (int num : arr)
    {
        cout << num << endl;
    }
    return 0;
}