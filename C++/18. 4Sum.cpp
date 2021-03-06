// 18. 4Sum.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
	vector<vector<int>> ret;
	int n = nums.size();
	if (n < 4) return ret;
	sort(nums.begin(), nums.end());

	for (int i = 0; i < n - 3; i++) {
		if(i > 0 && nums[i] == nums[i - 1]) continue;
		if(nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target) break;
		if (nums[i] + nums[n - 1] + nums[n - 2] + nums[n - 3] < target) continue;
		
		for (int j = i + 1; j < n - 2; j++) {
			if (j - 1 > i && nums[j] == nums[j - 1]) continue;
			if (nums[i] + nums[j] + nums[j + 1] + nums[j + 2] > target) break;
			if (nums[i] + nums[n - 1] + nums[n - 2] + nums[j] < target) continue;
			int left = j + 1, right = n - 1;

			while (left < right) {
				int sum = nums[i] + nums[j] + nums[left] + nums[right];
				if (sum < target) left++;
				else if (sum > target) right--;
				else {
					ret.push_back(vector<int>{nums[i], nums[j], nums[left], nums[right]});

					do{left++;} while(right > left && nums[left] == nums[left - 1]);
					do{ right--;} while(left < right && nums[right] == nums[right + 1]);
				}
			}
		}
	}
	return ret;
}
int main()
{
	vector<int> nums = {1, 0, -1, 0, -2, 2};
	int target = 0;

	vector<vector<int>> ret = fourSum(nums, target);

	for (int i = 0; i < ret.size(); i++)
		for(int j = 0; j < ret[0].size(); j++)
		cout << ret[i][j] << " ";
	cout << endl;
}

