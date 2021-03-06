// 58. Length of Last Word.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:

	int lengthOfLastWord(string s) {
		int cnt = 0;

		for (int i = s.size() - 1; i >= 0; i--) {
			if (s[i] != ' ') cnt++;
			else if (cnt == 0) continue;
			else break;
		}
		return cnt;
	}
};



int main()
{
	string s = "Hello World";
	Solution solution;
	int n = solution.lengthOfLastWord(s);
	cout << n << endl;
}


