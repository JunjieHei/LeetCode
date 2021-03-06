// 40. Combination Sum II.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

class Solution {
public:
	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
		vector<vector<int>> results;
		vector<int> curseq;
		sort(candidates.begin(), candidates.end());
		combinationSum2Helper(candidates, target, 0, results, curseq);
		return results;
	}

private:
	void combinationSum2Helper(vector<int>& candidates, int target, int index, vector<vector<int>>& results, vector<int>& curseq) {
		if (target < 0)
			return;

		if (target == 0) {
			results.push_back(curseq);
			return;
		}

		for (int i = index; i < candidates.size(); i++) {
			if (i != index && candidates[i - 1] == candidates[i])
				continue;

			curseq.push_back(candidates[i]);
			combinationSum2Helper(candidates, target - candidates[i], i + 1, results, curseq);
			curseq.pop_back();

		}
	}
};
