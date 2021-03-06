// 101. Symmetric Tree.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
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
	bool isSymmetric(TreeNode* root) {
		return isSymmetric(root, root);
	}

private:
	bool isSymmetric(TreeNode* root1, TreeNode* root2) {
		if (root1 == nullptr && root2 == nullptr)
			return true;
		if (root1 == nullptr || root2 == nullptr)
			return false;
		if (root1->val != root2->val)
			return false;

		return isSymmetric(root1->left, root2->right) && isSymmetric(root1->right, root2->left);
	}
};