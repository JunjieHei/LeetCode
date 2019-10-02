// 100. Same Tree.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x), left(NULL), right(NULL){}
};

bool isSameTree(TreeNode* p, TreeNode* q) {
	if (p == nullptr && q == nullptr) return true;
	if (p == nullptr || q == nullptr) return false;
	if (p->val != q->val) return false;

	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}



