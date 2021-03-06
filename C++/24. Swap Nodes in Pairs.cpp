// 24. Swap Nodes in Pairs.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x): val(x), next(NULL){}
};

ListNode* swapPairs(ListNode* head) {
	if (!head || !(head->next)) return head;

	ListNode new_head(-1);
	new_head.next = head;
	
	ListNode* k = &new_head;

	while (k->next && k->next->next) {
		ListNode* p = k->next;
		ListNode* q = k->next->next;

		k->next = p->next;
		p->next = q->next;
		q->next = p;

		k = k->next->next;
	}
	return new_head.next;
}
