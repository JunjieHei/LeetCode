// 28. Implement strStr().cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int strStr(string haystack, string needle) {
	if (haystack.size() < needle.size()) return -1;

	size_t i = 0, j = 0;
	int index = 0;
	while( i < haystack.size() && j < needle.size() ) {
		if (haystack[i] == needle[j])
			i++, j++;
		else {
			index++;
			i = index;
			j = 0;
		}
	}
	if (j = needle.size())
		return index;
	return -1;
}
int main()
{
	string haystack = "hello";
	string needle = "ll";
	int index = strStr(haystack, needle);
	cout << index << endl;
}


