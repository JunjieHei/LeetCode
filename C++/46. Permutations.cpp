// 46. Permutations.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

void DFS(vector<int>& nums, int pos, vector<int>& vec, vector<vector<int>>& res);

vector<vector<int>> permute(vector<int>& nums) {
	vector<vector<int>>res;
	vector<int>vec;
	DFS(nums, 0, vec, res);
	return res;
}

void DFS(vector<int>& nums, int pos, vector<int>& vec, vector<vector<int>>& res) {
	if (pos == nums.size()) {
		res.push_back(vec);
		return;
	}
	for (int i = 0; i <= vec.size(); i++) {
		vec.insert(vec.begin() + i, nums[pos]);
		DFS(nums, pos + 1, vec, res);
		vec.erase(vec.begin() + i);
	}
	return;
}

int main() {
	vector<int> nums = { 1,2,3 };
	vector<vector<int>> res = permute(nums);
}