// 17. Letter Combinations of a Phone Number.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int len;
string digits_map[8] = { "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

void search_backtracking(const string& digits, int pos, string path, vector<string>& ret) {
	
	string s = digits_map[digits[pos] - '2'];

	if (pos == len) return ;
	for (int i = 0; s[i]; i++) {
		if (pos == len - 1)  ret.push_back(path + s[i]);
		else
			search_backtracking(digits, pos + 1, path + s[i], ret);
		

		
	}
}
vector<string> letterCombinations(string digits) {
	len = digits.length();
	vector<string> ret;
	search_backtracking(digits, 0, " ", ret);
	return ret;
}
int main()
{
	string digits = "234";
	vector<string> letter = letterCombinations(digits);
	for (int i = 0; i < letter.size(); i++) {
		cout << letter[i];
	}
}
