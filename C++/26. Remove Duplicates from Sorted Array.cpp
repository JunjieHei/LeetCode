// 26. Remove Duplicates from Sorted Array.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
	if (nums.size() == 0) return 0;
	size_t i = 0, j = 1;
	while (j < nums.size()) {
		if (nums[i] == nums[j])
			j++;
		else {
			nums[i + 1] = nums[j];
			i++;
		}
	}
	return i + 1;
}

int main()
{
	vector<int> nums = { 1,1,2 };
	int n = removeDuplicates(nums);
	cout << n;
}

