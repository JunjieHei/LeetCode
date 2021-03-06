// 5. Longest Palindromic Substring.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <cstring>
# include <algorithm>
#include <vector>
using namespace std;

string Manacher(string s) {
	if (s.empty())
		return "";

	string s_prepared = "#";
	for(auto ch : s) {
		s_prepared += ch;
		s_prepared += "#";
	}
	const int size_p = s_prepared.size();
	vector<int> p(size_p, 0);//the Palindrome radius of each char of string
	int center = 0;  // the center of given palindromic
	int bCur = 0; // the right boundary of the given palindromic
	
	for (int i = 0; i < size_p; i++) {
		int mirror = 2 * center - i;
		
		p[i] = bCur <= i ? 0 : min(bCur - i, p[mirror]);

		int start = i - p[i], end = i + p[i];
		while (start - 1 >= 0 && end + 1 < size_p && s_prepared[start - 1] == s_prepared[end+ 1]) {
			--start;
			++end;
			++p[i];
		}
		if (i + p[i] > bCur) {
			bCur = i + p[i];
			center = i;
		}
	}
	center = max_element(p.begin(), p.end()) - p.begin();
	return s.substr((center - p[center]) / 2, p[center]);
}

int main() {
	string s1;
	string s = "cabaef";
	
	s1 = Manacher(s);

	return 0;
}

