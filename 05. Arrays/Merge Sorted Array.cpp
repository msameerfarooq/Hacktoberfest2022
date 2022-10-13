// PROBLEM :-
// https://leetcode.com/problems/merge-sorted-array/


// begin from last index of both array, compare two elements from both array, 
// and overwrite in the last available position of nums1 (as it is meant to be INPLACE).

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int itrA = m - 1;
        int itrB = n - 1;
        int itr = m + n - 1;
        while(itrA >= 0 && itrB >= 0){
            if(nums1[itrA] > nums2[itrB]){
                nums1[itr] = nums1[itrA];
                itr--;
                itrA--;
            }else{
                nums1[itr] = nums2[itrB];
                itr--;
                itrB--;
            }
        }
        
        while(itrB >= 0){
            nums1[itr] = nums2[itrB];
            itr--;
            itrB--;
        }
        
    }
};
