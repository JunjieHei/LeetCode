// 14. Longest Common Prefix.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
	if (strs.size() == 0) return "";
	int i = -1;

	while (strs[0][++i]) {
		for (size_t j = 1; j < strs.size(); j++) {
			if (strs[0][i] != strs[j][i])
				return strs[0].substr(0, i);
		}
	}
	return strs[0];
}
int main()
{
	vector<string> s1 = {"flower", "flow", "flight"};
	vector<string> s2 = {"dog","racecar","car"};

	string ret_s1 = longestCommonPrefix(s1);
	string ret_s2 = longestCommonPrefix(s2);
	cout << "ret_s1:" << ret_s1 << endl;
	cout << "ret_s2:" << ret_s2 << endl;
}
