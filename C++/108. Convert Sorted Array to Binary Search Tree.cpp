// 108. Convert Sorted Array to Binary Search Tree.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
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
	TreeNode* sortedArrayToBST(vector<int>& nums) {

		return sortedArrayToBST(nums, 0, nums.size());
	}

private:
	TreeNode* sortedArrayToBST(vector<int>& nums, int start, int end) {
		if (end <= start)
			return nullptr;
		int mid = (start + end) / 2;
		TreeNode* root = new TreeNode(nums[mid]);
		root->left = sortedArrayToBST(nums, start, mid);
		root->right = sortedArrayToBST(nums, mid + 1, end);

		return root;
	}
};