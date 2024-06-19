// 1. Key Pair : https://www.geeksforgeeks.org/problems/key-pair5616/1
//{ Driver Code Starts
// #include <bits/stdc++.h>

// using namespace std;

// // } Driver Code Ends
// //User function template for C++
// class Solution{
// public:
// 	// Function to check if array has 2 elements
// 	// whose sum is equal to the given value
// 	bool hasArrayTwoCandidates(int arr[], int n, int x) {
// 	    // code here
// 	   // for(int i=0;i<n;i++){
// 	   //     for(int j=i+1;j<n;j++){
// 	   //         if(arr[i]+arr[j]==x){
// 	   //             return true;
// 	   //         }
// 	   //     }
// 	   // }
// 	   sort(arr,arr+n);
// 	   int low=0;
// 	   int high=n-1;
// 	   while(low<high){
// 	       int sum=arr[low]+arr[high];
// 	       if(sum==x){
// 	           return true;
// 	       }
// 	       else if(sum<x)
// 	       {
// 	           low++;
// 	       }
// 	       else{
// 	           high--;
// 	       }
// 	   }
// 	    return false;
// 	}
// };

// //{ Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, x;
//         cin >> n >> x;
//         int arr[n];
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         Solution ob;
//         auto ans = ob.hasArrayTwoCandidates(arr, n, x);
//         cout << (ans ? "Yes\n" : "No\n");
//     }
//     return 0;
// }

// 2. Find Pivot Index : https://leetcode.com/problems/find-pivot-index/submissions/1287928118/
// class Solution {
// public:
//     int sum(vector<int>& nums,int s,int e){
//         int sum=0;
//         while(s<e){
//             sum+=nums[s];
//             s++;
//         }
//         return sum;
//     }
//     int pivotIndex(vector<int>& nums) {
//         //m1
//         // int lsum=0,rsum=0;
//         // for(int i=0;i<nums.size();i++){
//         //     lsum=sum(nums,0,i);
//         //     rsum=sum(nums,i+1,nums.size());
//         //     if(lsum==rsum){
//         //         return i;
//         //     }

//         // }

//         //m2
//         int tsum=0;
//         for(int i=0;i<nums.size();i++ ){
//             tsum+=nums[i];
//         }
//         int lsum=0,rsum=0;
//         for(int i=0;i<nums.size();i++){
//             if(i>0){
//                 lsum+=nums[i-1];
//             }
//             rsum=tsum-lsum-nums[i];
//             // cout<<"left sum : "<<lsum<<" rigth sum: "<<rsum<<endl;
//             if(lsum==rsum){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };

// 3. Missing Number:https://leetcode.com/problems/missing-number/submissions/1287956743/
// m1
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size();i++){
//             if(i!=nums[i]){
//                 return i;
//             }
//         }
//         return nums.size();
//     }
// };

// m2
//  class Solution {
//  public:
//      int missingNumber(vector<int>& nums) {
//          sort(nums.begin(),nums.end());
//          int ans=0;
//          for(int i=1;i<=nums.size();i++){
//              ans=ans^nums[i-1]^i;
//              cout<<ans<<endl;
//          }
//          return ans;
//      }
//  };

// 4. Remove Duplicates From Sorted Array : https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/1287999507/
// class Solution {
// public:

//     int method1(vector<int>& nums){
//         int pos=1;

//         for(int i=1;i<nums.size();i++){
//             if(nums[i]!=nums[i-1]){
//                 nums[pos]=nums[i];
//                 pos++;
//             }

//         }
//         return pos;
//     }
//     int method2(vector<int>& nums){
//         int j=0,i=1;

//         while(i<nums.size()){
//             if(nums[i]==nums[j]){
//                 i++;
//             }
//             else{
//                 nums[++j]=nums[i++];
//             }
//         }
//         return j+1;
//     }
//     int removeDuplicates(vector<int>& nums) {
//         int ans=method2(nums);
//         return ans;
//     }
// };

// 5. Maximum Average Subarray 1 :https://leetcode.com/problems/maximum-average-subarray-i/

// class Solution {
//  public:
//      double findMaxAverage(vector<int>& nums, int k) {
//          int sum=0;
//          for(int i=0;i<k;i++){
//              sum+=nums[i];
//          }
//          int max_sum=sum;
//          for(int i=1 ;i<=nums.size()-k;i++){
//              sum=sum-nums[i-1]+nums[i+k-1];
//              if(sum>max_sum){
//                  max_sum=sum;
//              }

//         }
//         double ans=(double)max_sum/k;
//         cout<<ans<<endl;
//         return ans;
//     }
// };

// 6. Sort Colors: https://leetcode.com/problems/sort-colors/submissions/1288067305/

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         //inplace
//         int l=0,m=0,h=nums.size()-1;

//         while(m<=h){
//             if(nums[m]==0){
//                 swap(nums[m],nums[l]);
//                 l++;
//                 m++;
//             }
//             else if(nums[m]==1){
//                 m++;
//             }
//             else{//2
//                 swap(nums[m],nums[h]);
//                 h--;
//             }
//         }

//         // int zero=0,one=0,two=0;
//         // for(int i=0;i<nums.size();i++){
//         //     if(nums[i]==2){
//         //         two++;
//         //     }
//         //     else if(nums[i]==1){
//         //         one++;
//         //     }
//         //     else{
//         //         zero++;
//         //     }
//         // }
//         // if(zero!=0)
//         //     fill(nums.begin(),nums.begin()+zero,0);
//         // if(one!=0)
//         //     fill(zero+nums.begin(),zero+nums.begin()+one,1);
//         // if(two!=0)
//         //     fill(zero+nums.begin()+one,zero+nums.begin()+one+two,2);
//     }
// };

// 7. Moving All Negative Number to the Left Side of an Array

// #include <iostream>
// using namespace std;
// int func()
// {
// }
// int main()
// {
//     int arr[] = {1, 2, -3, 4, -5, 6};
//     int l = 0, e = 6 - 1;
//     // while (l < e)
//     // {
//     //     if (arr[e] < 0)
//     //     {
//     //         swap(arr[e], arr[l]);
//     //         l++;
//     //     }
//     //     e--;
//     // }
//     while(l<e){
//         if (arr[l]<0){
//             l++;
//         }
//         else if(arr[e]>0){
//             e--;
//         }
//         else{
//             swap(arr[e], arr[l]);
//         }
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         cout << arr[i] << " " << endl;
//     }
//     return 0;
// }

// 8. Find Duplicate Number : https://leetcode.com/problems/find-the-duplicate-number/submissions/1288304103/

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {

//         //m1

//         // sort(nums.begin(),nums.end());
//         // for(int i=1;i<nums.size();i++){
//         //     if(nums[i]==nums[i-1]){
//         //         return nums[i];
//         //     }
//         // }

//         //m2
//         // for(int i=0;i<nums.size();i++){
//         //     int pos=abs(nums[i]);
//         //     if(nums[pos]<0){
//         //         return pos;
//         //     }
//         //     else{
//         //         nums[pos]*=-1;
//         //     }
//         // }
//         // return -1;

//         //m3-->position
//         while(nums[0]!=nums[nums[0]]){
//             swap(nums[0],nums[nums[0]]);
//         }
//         return nums[0];

//     }
// };

// 9. Missing Element From An Array With Duplicates
// m1
// #include <iostream>
// using namespace std;
// int missing(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         int pos = abs(arr[i]);
//         if (arr[pos - 1] > 0)
//         {
//             arr[pos - 1] *= -1;
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > 0)
//         {
//             return i + 1;
//         }
//     }
// }
// int main()
// {
//     int arr[] = {1, 3, 5, 3, 4,6,7,2};
//     cout << "Missing :" << missing(arr, 8) << endl;
//     return 0;
// }
// m2
// #include <iostream>
// using namespace std;
// void missing(int arr[], int size)
// {
//     int i = 0;
//     while (i < size)
//     {
//         int index = arr[i] - 1;
//         if (arr[i] != arr[index])
//         {
//             swap(arr[i], arr[index]);
//         }
//         else
//         {
//             i++;
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] != i + 1)
//         {

//             cout << i + 1 << endl;
//         }
//     }
// }
// int main()
// {
//     int arr[] = {1, 3, 5, 3, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     missing(arr, n);
//     return 0;
// }

// 10. Find First Repeating Element : https://www.geeksforgeeks.org/problems/first-repeating-element4018/1

// #include <unordered_map>
// #include <iostream>
// using namespace// namespace

// int firstRepeated(int arr[], int n)
// {
//     // code here
//     // m2
//     unordered_map<int, int> hash;
//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]]++;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (hash[arr[i]] > 1)
//         {
//             return i + 1;
//         }
//     }

//     // //m1
//     // for(int i=0;i<n;i++){
//     //     for(int j=i+1;j<n;j++){
//     //         if(arr[i]==arr[j]){
//     //             return i+1;
//     //         }
//     //     }
//     // }

//     return -1;
// }

// int main()
// {
//     int arr[] = {1, 9, 3, 4, 3, 9, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << firstRepeated(arr, n) << endl;
//     return 0;
// }

// 11. Common Element in 3 Sorted Array : https://www.geeksforgeeks.org/problems/common-elements1132/1

// vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
// {
//     vector<int> ans;
//     set<int> st;
//     int i = 0, j = 0, k = 0;

//     while (i < n1 && j < n2 && k < n3)
//     {
//         if (A[i] == B[j] && B[j] == C[k])
//         {
//             st.insert(A[i]);
//             i++;
//             j++;
//             k++;
//         }
//         else if (A[i] < B[j])
//         {
//             i++;
//         }
//         else if (B[j] < C[k])
//         {
//             j++;
//         }
//         else
//         {
//             k++;
//         }
//     }
//     for (auto i : st)
//     {
//         ans.push_back(i);
//     }

//     return ans;
// }

// 12. Wave Print A Matrix

// #include <iostream>
// using namespace std;
// int columnwavePrint(int arr[][4],int row,int col)
// {
//     for(int i=0;i<col;i++){
//         for(int j=0;j<row;j++){
//             if((i & 1)==0){
//                 cout<<arr[j][i]<<" ";
//             }
//             else{
//                 cout<<arr[row-j-1][i]<<" ";
//             }
//         }
//     }
// }
// int rowwavePrint(int arr[][4],int row,int col)
// {
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if((i & 1)==0){
//                 cout<<arr[i][j]<<" ";
//             }
//             else{
//                 cout<<arr[i][col-j-1]<<" ";
//             }
//         }
//     }
// }
// int main()
// {
//     int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
//     // columnwavePrint(arr,3,4);
//     rowwavePrint(arr,3,4);
//     return 0;
// }

// 13. Spiral Print A Matrix:
// #include <iostream>
// using namespace std;
// void sipral(int arr[][4], int row, int col)
// {
//     int sr = 0, er = row - 1, sc = 0, ec = col - 1;
//     int total = row * col, count = 0;
//     while (count < total)
//     {
//         for (int i = sc; i <= ec&& count < total; i++)
//         {
//             cout << arr[sc][i] << " ";
//             count++;
//         }
//         for (int i = sr + 1; i <= er&& count < total; i++)
//         {
//             cout << arr[i][ec] << " ";
//             count++;
//         }
//         for (int i = ec - 1; i >= sc&& count < total; i--)
//         {
//             cout << arr[er][i] << " ";
//             count++;
//         }
//         for (int i = er - 1; i >= sr+1&& count < total; i--)
//         {
//             cout << arr[i][sc] << " ";
//             count++;
//         }
//         sr++;
//         sc++;
//         er--;
//         ec--;
//     }
// }
// int main()
// {
//     int arr[3][4] = {{1, 2, 3, 4},
//                      {5, 6, 7, 8},
//                      {9, 10, 11, 12}};
//     sipral(arr, 3, 4);
//     return 0;
// }

// 14. Add two numbers represented by two Arrays: https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-two-arrays2408/1

// class Solution{
//     public:
//     string calc_Sum(int *a,int n,int *b,int m){
//     // Complete the function
        
//         int carry=0;
//         string ans;
//         int i=n-1;
//         int j=m-1;
        
//         while(i>=0 && j>=0){
            
//             int x=a[i--]+b[j--]+carry;
//             int digit=x%10;
//             carry=x/10;
//             ans.push_back(digit+'0');
//         }
//         while(i>=0)
//         {
//             int x=a[i--]+0+carry;
//             int digit=x%10;
//             carry=x/10;
//             ans.push_back(digit+'0');
//         }
//         while(j>=0)
//         {
//             int x=0+b[j--]+carry;
//             int digit=x%10;
//             carry=x/10;
//             ans.push_back(digit+'0');
            
//         }
//         if(carry){
//             ans.push_back(carry+'0');
//         }
        
//         while(ans[ans.size()-1]=='0'){
//             ans.pop_back();
//         }
//         reverse(ans.begin(),ans.end());
        
//         return ans;
        
//     }
// };

// 15. Factorial of A Large Number

// class Solution {
// public:
//     vector<int> factorial(int N){
//         // code here
//         vector<int> ans;
//         ans.push_back(1);
        
//         for(int i=2;i<=N;i++){
//             int carry=0;
//             for(int j=0;j<ans.size();j++)
//             {
//                 int x=ans[j]*i+carry;
//                 ans[j]=x%10;
//                 carry=x/10;
//             }
//             while(carry){
//                 ans.push_back(carry%10);
//                 carry/=10;
//             }
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };
