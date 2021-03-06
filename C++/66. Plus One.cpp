// 66. Plus One.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>.

using namespace std;

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		for (int k = digits.size() - 1; k >= 0; --k) {
			if (digits[k] < 9) {
				digits[k]++;
				return digits;
			}

			else digits[k] = 0;
		}
		digits[0] = 1;
		digits.push_back(0);
		return digits;
	}
};

int main()
{
	vector<int> digits = { 1, 2, 3 };
	Solution solution;

	vector<int> ret;
	ret = solution.plusOne(digits);
	return 0;
}

