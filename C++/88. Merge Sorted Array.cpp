// 88. Merge Sorted Array.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int> &nums2, int n) {
	int p = m - 1, q = n - 1, r = m + n - 1;
	while (p >= 0 && q >= 0) {
		if (nums1[p] > nums2[q])
			nums1[r--] = nums1[p--];
		else
			nums1[r--] = nums2[q--];
	}
	while (q >= 0)
		nums1[r--] = nums2[q--];
}
int main()
{
	vector<int> nums1 = { 1, 2, 3, 4, 0, 0 };
	vector<int> nums2 = { 2, 5, 6 };

	merge(nums1, 3, nums2, 3);
}


