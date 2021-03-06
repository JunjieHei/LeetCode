// 34. Find First and Last Position of Element.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		int start = 0, end = nums.size(), mid, left, right;
		while (start < end) {
			mid = (start + end) / 2;
			if (nums[mid] >= target)
				end = mid;
			else
				start = mid + 1;
		}

		left = start;

		start = 0, end = nums.size();
		while (start < end) {
			mid = (start + end) / 2;
			if (nums[mid] > target)
				end = mid;
			else
				start = mid + 1;
		}
		right = start;
		return left == right ? vector<int>{-1, -1} : vector<int>{ left, right - 1 };
	}
};
