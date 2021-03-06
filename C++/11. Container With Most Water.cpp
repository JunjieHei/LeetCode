// 11. Container With Most Water.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxArea(vector<int>& height) {
	int left = 0;
	int right = height.size() - 1;
	int max_area = 0;
	int h = 0;

	while (left < right) {

		max_area = max(max_area, min(height[left], height[right]) * (right - left));

		if (height[left] < height[right])
			left++;
		else
			right--;
	}
	return max_area;
}

int main()
{
	int max_area = 0;
	int arr[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
	vector<int> height(arr, arr + 9); // pointer points to the next position of the element at the end of array
	
	max_area = maxArea(height);
	cout << "maxArea=" << max_area << endl;
}

