// 53. Maximum Subarray.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:

	int maxSubArray(vector<int> &nums) {
		return maxSubArray(nums, 0, nums.size() - 1);
	}

private:

	int maxSubArray(vector<int> &nums, int l, int r) {
		if(l > r) return INT_MIN;

		int m = l + (r - l) / 2, ml = 0, mr = 0;
		int lmax = maxSubArray(nums, l, m - 1);
		int rmax = maxSubArray(nums, m + 1, r);

		for (int i = m - 1, sum = 0; i >= l; i--) {
			sum += nums[i];
			ml = max(sum, ml);
		}
		for (int i = m + 1, sum = 0; i <= r; i++) {
			sum += nums[i];
			mr = max(sum, mr);
		}
		return max(max(lmax, rmax), ml + mr + nums[m]);
	}
};

int main()
{
	vector<int> nums = { -2, 1, -3, 4, - 1, 2, 1, -5, 4 };
	Solution solution;
	int mx = solution.maxSubArray(nums);
	cout << mx << endl;
}
