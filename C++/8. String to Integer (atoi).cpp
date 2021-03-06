// 8. String to Integer (atoi).cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<string>

using namespace std;

int myAtoi(string str) {
	if (str.empty())
		return 0;

	int i = 0;
	while (i < str.size() - 1 && isspace(str[i]))
		i++;

	long res = 0;
	int sign = 1;

	if (str[i] == '+' || str[i] == '-')
		sign = 44 - str[i++];
	while (i < str.size()) {
		if (isdigit(str[i]))
			res = res * 10 + (str[i++] - '0');
		else if (res <= INT_MAX)
			return sign * res;
		if (res > INT_MAX)
			return sign == -1 ? INT_MIN : INT_MAX;
	}
	return sign * res;
}

int main()
{
	string s1 = "42";
	string s2 = "   -42";
	string s3 = "4193 with words";
	string s4 = "words and 987";

	cout << myAtoi(s1) <<" " <<  myAtoi(s2) << " " << myAtoi(s3) << " " << myAtoi(s4) << endl;

}


