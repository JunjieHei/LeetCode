// 33. Search in Rotated Sorted Array.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
# include <vector>

using namespace std;

class Solution {
public:
	int search(vector<int>& nums, int target) {
		int l = 0, r = nums.size() - 1;

		while (l <= r) {
			int mid = (r - l) / 2 + l;

			if (nums[mid] == target) return mid;

			if (nums[mid] < nums[r]) {
				if (nums[mid] < target && target <= nums[r])
					l = mid + 1;
				else
					r = mid - 1;
			}
			else {
				if (nums[l] <= target && target < nums[mid])
					r = mid - 1;
				else
					l = mid + 1;
			}

		}
		return -1;
	}
};
