// 67. Add Binary.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

string addBinary(string a, string b) {
	string ret = "";
	int i = a.size(), j = b.size();
	int cur = 0;

	while (i + j + cur) {
		cur += (i ? a[(i--) - 1] - '0' : 0) + (j ? b[(j--) - 1] - '0' : 0);
		ret = char(cur % 2 + '0') + ret;
		cur /= 2;
	}
	return ret;
}
int main()
{
    string a = "11";
	string b = "1";

	string ret = addBinary(a, b);
	cout << ret << endl;
}


