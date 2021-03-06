// 15. 3Sum.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
	vector<vector<int>> ret;

	if (nums.size() == 0) return ret;

	sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); i++) {
		if (i > 0 && (nums[i] == nums[i - 1])) continue;

		int left = i + 1, right = nums.size() - 1;

		while (left < right) {
			int sum = nums[i] + nums[left] + nums[right];
			if (sum < 0) left++;
			else if (sum > 0) right--;
			else {
				ret.push_back(vector<int> {nums[i], nums[left], nums[right]});
				while (left + 1 < right && nums[left] == nums[left + 1]) left++;
				while (right - 1 > left && nums[right] == nums[right - 1]) right--;
				left++, right--;
			}
		}
	}
	return ret;
}
int main()
{
	vector <int> nums = { -1, 0, 1, 2, -1, -4 };
	vector<vector<int>> a = threeSum(nums);
}

