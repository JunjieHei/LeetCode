// 36. Valid Sudoku.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

class Solution {
public:
	bool isValidSudoku(vector<vector<char>>& board) {
		char hor[9][9] = { 0 }, ver[9][9] = { 0 }, sqr[9][9] = { 0 };

		for (int row = 0; row < 9; row++) {
			for (int col = 0; col < 9; col++) {
				char c = board[row][col];
				if (c != '.') {
					if (hor[row][c % 9]++) return false;
					if (ver[col][c % 9]++) return false;
					if (sqr[(row / 3 * 3 + col / 3)][c % 9]++) return false;
				}

			}
		}
		return true;

	}
};
