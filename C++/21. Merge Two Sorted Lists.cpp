// 21. Merge Two Sorted Lists.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(){}
	ListNode(int x): val(x), next(NULL){}
};

void creatList(ListNode *head, int length) {
	int i = 1;
	while (i < length) {
		ListNode *p = new ListNode;
		p->val = i + 1;
		head->next = p;
		head = p;
		i++;
	}
	head->next = nullptr;
}

ListNode* removeNth(ListNode* head, int n) {
	ListNode *p = head;
	for (int i = 1; i < n - 1; i++) {
		p = p->next;
	}
	ListNode* to_be_deleted = p->next;
	p->next = p->next->next;
	delete to_be_deleted, p;
	return head;
}

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	ListNode newNode(0), *t;
	t = &newNode;

	while (l1 || l2) {
		if (!l1) {
			t->next = l2;
			break;
		}
		else if (!l2) {
			t->next = l1;
			break;
		}
		else {
			if (l1->val < l2->val) {
				t->next = l1;
				l1 = l1->next;
			}
			else {
				t->next = l2;
				l2 = l2->next;
			}
		}
		t = t->next;
	}
	return newNode.next;
}

int main()
{
	ListNode head_l1(1), *p, *q, *a, *l1;
	ListNode head_l2(1), *r, *s, *b, *l2;
	//Linked list l1
	p = &head_l1;
	creatList(p, 4);

	q = p;
	while (q != NULL) {
		cout << q->val << ' ';
		q = q->next;
	}
	cout << endl;

	l1 = removeNth(p, 3);

	a = l1;
	while (a != NULL) {
		cout << a->val << ' ';
		a = a->next;
	}
	cout << endl;

	//Linked list l2
	r = &head_l2;
	creatList(r, 4);

	s = r;
	while (s != NULL) {
		cout << s->val << ' ';
		s = s->next;
	}
	cout << endl;

	l2 = removeNth(r, 2);

	b = l2;
	while (b != NULL) {
		cout << b->val << ' ';
		b = b->next;
	}
	cout << endl;

	//merge
	ListNode* f = mergeTwoLists(l1, l2);

	while (f != NULL) {
		cout << f->val << ' ';
		f = f->next;
	}
}


