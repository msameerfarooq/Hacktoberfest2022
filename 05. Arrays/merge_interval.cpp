// Merge Intervals

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge_interval(vector<vector<int>>& intervals) {
	vector<vector<int>> result;
	int len = intervals.size();
	if (len == 0) return result;

	sort(intervals.begin(), intervals.end());

	vector<int> one = intervals[0];
	for (int i = 1; i < len; i++) {
		if (intervals[i][0] <= one[1]) {
			one[0] = one[0];
			one[1] = max(one[1], intervals[i][1]);
		} else {
			result.push_back(one);
			one = intervals[i];
		}
	}
	result.push_back(one);
	return result;
}

// bool is_exists(vector<vector<int>>& intervals, vector<int> find) {
// 	for (vector<int> one : intervals) {
// 		if (one[1] >= find[1])
// 			return true;
// 	}
// 	return false;
// }

// vector<vector<int>> merge_interval(vector<vector<int>>& intervals) {
// 	vector<vector<int>> result;
// 	int len = intervals.size();
// 	if (len == 0) return result;

// 	sort(intervals.begin(), intervals.end());

// 	vector<int> one;
// 	for (int i = 0; i < len; i++) {
// 		if (!is_exists(result , intervals[i])) {
// 			one = intervals[i];
// 			for (int j = i + 1; j < len; j++) {
// 				if (intervals[j][0] <= one[1]) {
// 					one[0] = one[0];
// 					one[1] = max(one[1], intervals[j][1]);
// 				}
// 			}
// 			result.push_back(one);
// 		}
// 	}
// 	return result;
// }

int main()
{
	int n; cin >> n;

	vector<vector<int>> intervals;

	int x, y;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		vector<int> temp{x, y};
		intervals.push_back(temp);
	}

	vector<vector<int>> result = merge_interval(intervals);

	for (vector<int> one : result) {
		cout << one[0] << "," << one[1] << "\n";
	}

	return 0;
}