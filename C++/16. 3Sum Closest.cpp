// 16. 3Sum Closest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int threeSumCloset(vector<int>& nums, int target) {
	sort(nums.begin(), nums.end());
	int min_bias = INT32_MAX;
	int min_val = 0;

	for (size_t i = 0; i < nums.size(); i++) {
		size_t left = i + 1, right = nums.size() - 1;

		while (left < right) {
			int sum = nums[i] + nums[left] + nums[right];
			if (sum == target) return sum;
			int cur_bias = abs(target - sum);
			if (cur_bias < min_bias) {
				min_bias = cur_bias;
				min_val = sum;
			}
			if (sum > target)
				right--;
			else
				left++;
		}
	}
	return min_val;
}
int main()
{
	vector<int> nums1 = {-1, 2, 1, -4};
	vector<int> nums2 = { 0, 2, 1, -3 };
	cout << threeSumCloset(nums1, 1) << endl;
	cout << threeSumCloset(nums2, 1) << endl;
}
