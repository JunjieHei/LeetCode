// 13. Roman to Integer.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int romanToInt(string s) {

	int pre = 0;
	int ret = 0;

	for (size_t i = 0; i < s.size(); i++) {
		int cur = 0;

		switch (s[i]) {
		case('I'): cur = 1; break;
		case('V'): cur = 5; break;
		case('X'): cur = 10; break;
		case('L'): cur = 50; break;
		case('C'): cur = 100; break;
		case('D'): cur = 500; break;
		case('M'): cur = 1000; break;
		default: return 0;
		}

		ret += cur;

		if (pre < cur)
			ret -= pre * 2;

		pre = cur;
	}
	return ret;
}

int main()
{
	string s1 = "III", s2 = "IV", s3 = "IX", s4 = "LVIII", s5 = "MCMXCIV";
	cout << romanToInt(s1) << ' ' << romanToInt(s2) << ' ' << romanToInt(s3) << ' ' << romanToInt(s4) << ' ' << romanToInt(s5) << endl;
	
}
