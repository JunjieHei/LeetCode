// 31. Next Permutation.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
# include <vector>

using namespace std;

class Solution {
public:
	void nextPermutation(vector<int>& nums) {
		if (nums.size() < 2) return;
		int k, l;
		int n = nums.size();
		for (k = n - 2; k >= 0; k--) {
			if (nums[k] < nums[k + 1])
				break;
		}

		if (k < 0)
			reverse(nums.begin(), nums.end());
		else {
			for (l = n - 1; l > k; l--) {
				if (nums[l] > nums[k])
					break;
			}
			swap(nums[k], nums[l]);
			reverse(nums.begin() + k + 1, nums.end());
		}
	}
};
