/*
Search an element in a Rotated Sorted Array.
Given the array nums after the possible rotation and an integer target, return the index of target if
it is in nums, or -1 if it is not in nums. 

Example:
Input: arr[]= {4,5,6,7,0,1,2}, target = 0
       Output: 4

Input: arr[] = {10, 20, 25, 28, 2, 8, 9}
       Output: 4

Time complexity: O(log N)
Space Complexity: O(1)
*/
#include <bits/stdc++.h>
using namespace std;
    
    int findIndex(vector<int>& nums){
        
        int n = nums.size();
        int start = 0, end = n-1;
        
        while(start <= end){
            int mid = start + (end-start)/2;
            int prev = (mid-1+n)%n;
            int next = (mid+1)%n;
            
            if(nums[mid] < nums[prev] && nums[mid] <= nums[next])
                return mid;
            else if(nums[mid] > nums[end])
                start = mid+1;
            else
                end = mid-1;
        }
        return 0;
    }
    int binarySearch(vector<int>& nums, int T, int start, int end){
        
        while(start <= end){
            int mid = start + (end-start)/2;
            
            if(nums[mid] == T)
                return mid;
            else if(T < nums[mid])
                end = mid-1;
            else
                start = mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int T) {
        
        int n = nums.size();
        if(n == 1 && nums[0] != T)
            return -1;
        
        int index = findIndex(nums);
        int a = binarySearch(nums, T, 0, index-1);
        int b = binarySearch(nums, T, index, n-1);
        
        return a == -1? b : a;
    }
    int main(){
        int vector<int> arr{ 4, 5, 6, 7, 0, 1, 2 };
        int tar = 0;
        cout << "Index of element is :"<< search(arr, tar);
        return 0;
    }