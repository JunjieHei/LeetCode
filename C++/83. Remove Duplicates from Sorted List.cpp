// 83. Remove Duplicates from Sorted List.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {};
};

ListNode* deleteDuplicate(ListNode* head) {
	ListNode* cur = head;

	while (cur && cur->next) {
		if (cur->val == cur->next->val) {
			ListNode* temp = cur->next;

			cur->next = cur->next->next;

			delete temp;
			temp = nullptr;
		}
		else
			cur = cur->next;
	}
	return head;

}



