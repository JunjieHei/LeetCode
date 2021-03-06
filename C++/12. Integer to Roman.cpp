// 12. Integer to Roman.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

string intToRoman(int num) {
	string Roman[4][10] = { {"", "I", "II", "III" , "IV", "V", "VI", "VII", "VIII", "IX"},
					{"", "X", "XX", "XXX" , "XL", "L", "LX", "LXX", "LXXX", "XC"},
					{"", "C", "CC", "CCC" , "CD", "D", "DC", "DCC", "DCCC", "CM"},
					{"", "M", "MM", "MMM"}
	};

	string result;
	int count = 0;

	while (num != 0) {
		int mod = num % 10;
		result = Roman[count][mod] + result;
		num = num / 10;
		count++;
	}
	return result;
}

int main()
{
	int num1 = 3;
	int num2 = 4;
	int num3 = 9;
	int num4 = 58;
	int num5 = 1994;
	cout << intToRoman(num1) << endl;
	cout << intToRoman(num2) << endl;
	cout << intToRoman(num3) << endl;
	cout << intToRoman(num4) << endl;
	cout << intToRoman(num5) << endl;
}

