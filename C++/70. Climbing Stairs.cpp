// 70. Climbing Stairs.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int climbStairs(int n) {
	int base0 = 0, base1 = 1, ret = 0;

	for (int i = 0; i < n; i++) {
		ret = base0 + base1;
		base0 = base1;
		base1 = ret;
	}
	return ret;
	
}
int main()
{
	int n = climbStairs(2);
	cout << n << endl;
}

