class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int l = j + 1, r = n - 1;
                int remain = target - nums[i] - nums[j];
                while (l < r) {
                    if (nums[l] + nums[r] == remain) {
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        ++l; --r;
                        while (l < r && nums[l-1] == nums[l]) ++l; // Skip duplicate nums[l]
                    } else if (nums[l] + nums[r] > remain) {
                        --r;
                    } else {
                        ++l;
                    }
                }
                while (j+1 < n && nums[j] == nums[j+1]) ++j; // Skip duplicate nums[j]
            }
            while (i+1 < n && nums[i] == nums[i+1]) ++i; // Skip duplicate nums[i]
        }
        return ans;
    }
};
