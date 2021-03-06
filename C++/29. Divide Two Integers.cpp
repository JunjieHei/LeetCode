// 29. Divide Two Integers.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

class Solution {
public:
	int divide(int dividend, int divisor) {
		if (dividend == 0) return 0;
		if (divisor == 0) return INT_MAX;

		long long ret = double(exp(log(fabs(dividend)) - log(fabs(divisor))));

		if ((dividend < 0) ^ (divisor < 0)) ret = -ret;
		if (ret > INT_MAX) ret = INT_MAX;

		return ret;
	}
};

