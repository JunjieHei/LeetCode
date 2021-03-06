// 48. Rotate Image.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

class Solution {
public:
	void rotate(vector<vector<int>>& matrix) {
		if (matrix.size() == 0 || matrix.size() == 1)
			return;

		int top = 0, left = 0;
		int bottom = matrix.size() - 1, right = matrix.size() - 1;
		int n = matrix.size();

		while (n > 1) {
			for (int i = 0; i < n - 1; i++) {
				int tmp = matrix[top][left + i];
				matrix[top][left + i] = matrix[bottom - i][left];
				matrix[bottom - i][left] = matrix[bottom][right - i];
				matrix[bottom][right - i] = matrix[top + i][right];
				matrix[top + i][right] = tmp;
			}

			top++, left++;
			bottom--, right--;
			n -= 2;
		}
	}
};
