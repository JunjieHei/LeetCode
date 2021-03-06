// 50. Pow(x, n).cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

class Solution {
public:
	double myPow(double x, int n) {
		if (n == 0) return 1;
		if (n == 1) return x;
		if (n < 0) return 1 / (x * myPow(x, -(n + 1)));

		double res = 1;
		while (n > 1) {
			if (n % 2 == 1)
				res *= x;

			x = x * x;
			n /= 2;
		}
		res *= x;
		return res;
	}
};