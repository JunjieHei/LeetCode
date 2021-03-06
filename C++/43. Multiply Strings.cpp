// 43. Multiply Strings.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

class Solution {
public:
	string multiply(string num1, string num2) {
		int n1 = num1.size();
		int n2 = num2.size();

		vector<int> result(n1 + n2, 0);

		for (int i = n1 - 1; i >= 0; i--) {
			for (int j = n2 - 1; j >= 0; j--) {
				int mul = (num1[i] - '0') * (num2[j] - '0');
				int posLow = i + j + 1;
				int posHigh = i + j;

				mul += result[posLow];
				result[posLow] = mul % 10;
				result[posHigh] += mul / 10;
			}
		}
		string res = "";
		for (int i = 0; i < n1 + n2; i++)
			res.append(1, result[i] + '0');

		size_t first_non_zero = res.find_first_not_of('0');
		if (first_non_zero != string::npos)
			return string(res, first_non_zero);
		else
			return "0";
	}
};
