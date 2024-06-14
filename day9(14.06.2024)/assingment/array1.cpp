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
// 10. Find First Repeating Element
// 11. Common Element in 3 Sorted Array
// 12. Wave Print A Matrix
// 13. Spiral Print A Matrix
// 14. Add two numbers represented by two Arrays
// 15. Factorial of A Large Number
