class Solution {
public:
    int leftResult(vector<int>nums, int target){
        int start=0;
        int end=nums.size()-1;
        int left_result = -1;
        while(start<=end){
            int mid=start+((end-start)/2);
            if(target==nums[mid]){
                left_result=mid;
                end=mid-1;
            }
            else if(target<nums[mid])
                end=mid-1;
            else
                start=mid+1;
        }
        return left_result;
    }
    int rightResult(vector<int>nums, int target){
        int start=0;
        int end=nums.size()-1;
        int right_result=-1;
        while(start<=end){
            int mid=start+((end-start)/2);
            if(target==nums[mid]){
                right_result=mid;
                start=mid+1;
            }
            else if(target<nums[mid])
                end=mid-1;
            else
                start=mid+1;
        }
        return right_result;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int left_result=leftResult(nums, target);
        int right_result=rightResult(nums, target);
        vector<int>v;
        v.push_back(left_result);
        v.push_back(right_result);
        return v;
    }
};
