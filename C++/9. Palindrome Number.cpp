// 9. Palindrome Number.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>


bool isPalindrome(int x) {
	if (x < 0 || x != 0 && x % 10 == 0) // if x=10 x=20 x=30...., return False
		return 0;
	int last_half = 0;
	while (x > last_half) {
		last_half = last_half * 10 + x % 10;
		x = x / 10;
	}
	return (x == last_half) || (x == last_half / 10); //odd number of digits 
} 


int main()
{
	int x1 = 0;
	int x2 = 10;
	int x3 = 100;
	int x4 = 121;
	int x5 = 1221;
	int x6 = 123

}
