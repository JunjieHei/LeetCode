// 38. Count and Say.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Solution {
	public:
		string countAndSay(int n) {
			if (n < 0 || n >= 30) return "Out of range" ;

			string cur_str;
			cur_str = '1';

			for (int i = 0; i < n - 1; i++) {
				string buffer;
				for (int index = 0; index < cur_str.size(); index++) {
					int cnt = 1;
					while (index < cur_str.size() - 1 && cur_str[index] == cur_str[index + 1]){
						cnt++;
						index++;
					}
					buffer.push_back(cnt + '0');
					buffer.push_back(cur_str[index]);
				} 
				cur_str = buffer;
			}
			return cur_str;
		}
};

int stringToInteger(string input) {
	return stoi(input);
}

int main()
{
	string line;
	while (getline(cin, line)) {
		int n = stringToInteger(line);

		Solution solution;
		string ret = solution.countAndSay(n);

		
		cout << ret << endl;
	}
}
