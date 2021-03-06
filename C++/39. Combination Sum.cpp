// 39. Combination Sum.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

class Solution {
public:
	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		vector<vector<int>> results{};
		vector<int> curseq;

		combinationSumHelper(candidates, target, 0, results, curseq);
		return results;
	}

private:
	void combinationSumHelper(vector<int>& candidates, int target, int index, vector<vector<int>>& results, vector<int>& curseq) {
		if (target < 0)
			return;

		if (target == 0) {
			results.push_back(curseq);
			return;
		}

		for (int i = index; i < candidates.size(); i++) {

			curseq.push_back(candidates[i]);

			combinationSumHelper(candidates, target - candidates[i], i, results, curseq);
			curseq.pop_back();
		}

	}
};
