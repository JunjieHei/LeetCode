// 22. Generate Parentheses.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void recurParenthesis(int leftNum, int rightNum, vector<string> &ret, string temp);

vector<string> generateParenthesis(int n) {
	vector<string> ret;
	string s = "";
	if (n <= 0)
		return ret;

	recurParenthesis(n, n, ret, s);
	return ret;
}

void recurParenthesis(int leftNum, int rightNum, vector<string> &ret, string temp)
{
	//leftNum means the number of open parenthesis available,rightNum means the number of close parenthesis available
	if (leftNum == 0 && rightNum == 0)
	{
		ret.push_back(temp);
		return;
	}

	if (leftNum > 0)
		recurParenthesis(leftNum - 1, rightNum, ret, temp + '(');

	if (leftNum < rightNum)
		recurParenthesis(leftNum, rightNum - 1, ret, temp + ')');
	
}
int main()
{
	int n = 3;

	vector<string> letter = generateParenthesis(n);

	for (int i = 0; i < letter.size(); i++) 

		cout << letter[i];
}


