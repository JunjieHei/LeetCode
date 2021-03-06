// 19. Remove Nth Node From End of List.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() {}
	ListNode(int x): val(x), next(NULL){}
};

void creatList(ListNode* head, int length) {
	int i = 1;
	ListNode *p1, *p2;
	p1 = p2 = head;

	while(i < length){
		p1 = new ListNode;
		p1->val = i + 1;
		p2->next = p1;
		p2 = p1;
		i++;
	}
	p2->next = nullptr;
}

ListNode* removeNthFromEnd(ListNode* head, int n) {
	if (!head) return nullptr;

	ListNode dummy(-1);
	dummy.next = head;

	ListNode *first = &dummy, *second = &dummy;

	for (int i = 0; i < n; i++)
		first = first->next;

	while (first->next) {
		first = first->next;
		second = second->next;
	}

	ListNode *to_be_deleted = second->next;
	second->next = second->next->next;

	delete to_be_deleted;

	return dummy.next;
}

int main()
{
	ListNode head(1), *p, *q, *t;
	p = &head;
	creatList(p, 5);
	
	q = p;
	while(q != NULL) {
		cout << q->val << endl;
		q = q->next;
	}

	t = removeNthFromEnd(p, 2);
	
	while (t != NULL) {
		cout << t->val << endl;
		t = t->next;
	}
}

