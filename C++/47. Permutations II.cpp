// 47. Permutations II.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

class Solution {
public:
	vector<vector<int>> permuteUnique(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		vector<vector<int>>res;
		DFS(res, nums, 0);
		return res;
	}

	void DFS(vector<vector<int>>& res, vector<int> nums, int pos) {
		if (pos == nums.size() - 1) {
			res.push_back(nums);
			return;
		}
		for (int i = pos; i < nums.size(); i++) {
			if (i != pos && nums[i] == nums[pos]) continue;
			swap(nums[pos], nums[i]);
			DFS(res, nums, pos + 1);
		}
	}
};