// 69. Sqrt(x).cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

int mySqrt(int x) {
	long r = x;

	while (r * r - x > 0) 
		r = (r + x / r) / 2;
	
	return r;
	
}
int main()
{
	int x = 8;

	int ret = mySqrt(x);
	std::cout << ret << std::endl;
}


