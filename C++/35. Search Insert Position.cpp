// 35. Search Insert Position.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include  <vector>

using namespace std;

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int left = 0, right = nums.size() - 1;
		while (left <= right) {
			int mid = ((right - left) >> 1) + left;
			if (nums[mid] < target)
				left = mid + 1;
			else
				right = mid - 1;
		}
		return left;
	}
};

int main()
{
	Solution solution;
	vector<int> nums = { 1, 3, 5, 6 };
	int target = 5;

	int ret = solution.searchInsert(nums, target);
	cout << ret << endl;
	
	return 0;
}

