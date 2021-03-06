// 107. Binary Tree Level Order Traversal II.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	vector<vector<int>> levelOrderBottom(TreeNode* root) {
		vector<vector<int>> result;

		if (root == nullptr)
			return result;

		TreeNode* temp = nullptr;

		queue<TreeNode*> q;
		q.push(root);

		int cur = 0;

		while (!q.empty()) {
			cur = q.size();
			vector<int> levels;
			while (cur--) {
				temp = q.front();
				levels.push_back(temp->val);
				if (temp->left != nullptr)
					q.push(temp->left);
				if (temp->right != nullptr)
					q.push(temp->right);
				q.pop();
			}
			result.insert(result.begin(), levels);
		}
		return result;
	}
};
