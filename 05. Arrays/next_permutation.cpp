// Next Permutation

#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
	if (nums.size() <= 1) return;

	int i = nums.size() - 2;
	while (i >= 0 && nums[i] >= nums[i + 1])
		i--;

	if (i >= 0) {
		int j = nums.size() - 1;
		while (j > i && nums[j] <= nums[i])
			j--;
		swap(nums[i], nums[j]);
	}
	reverse(nums.begin() + i + 1, nums.end());
}

int main()
{
	int n; cin >> n;

	vector<int> nums;
	int x;

	for (int i = 0; i < n; ++i) {
		cin >> x;
		nums.push_back(x);
	}

	nextPermutation(nums);

	for (auto i : nums)
		cout << i << " ";

	return 0;
}