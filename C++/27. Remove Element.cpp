// 27. Remove Element.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
	if (nums.empty()) return 0;
	size_t i = 0;

	for (size_t j = 0; j < nums.size(); j++) {
		if (nums[j] != val) {
			nums[i] = nums[j];
			i++;
		}
	}
	return i;
}

int main()
{
	vector<int> nums = { 3, 2, 2, 3 };
	int n = removeElement(nums, 3);
}


