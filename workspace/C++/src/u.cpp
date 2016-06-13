/**
 * Project Name: C++
 * File Name: u.cpp
 * Created on: 2016年4月9日 下午8:13:50
 * Author: jtahstu
 * Email: root@jtahstu.com
 * Copyright (c) 2016, www.jtahstu.com , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<algorithm>
#include<string>
#include<cstring>
#include<vector>
#include<map>
#include<set>
using namespace std;
typedef struct Node {
	int zhishu;
	int xishu;
	struct Node *next;
} node, *list;

void creat(list la, list lb) {
	list p, p2;
	int a, b;
	while (scanf("%d%d", &a, &b) && a != 0) {
		p = new (node);
		p->xishu = a;
		p->zhishu = b;
		p->next = la->next;
		la->next = p;
		la = p;
	}

	while (scanf("%d%d", &a, &b) && a != 0) {
		p = new (node);
		p->xishu = a;
		p->zhishu = b;
		p->next = lb->next;
		lb->next = p;
		lb = p;
	}
}
void add_list(list a, list b, list lc) {
	list p;
	a = a->next;
	b = b->next;
	while (a != NULL && b != NULL) {
		p = new (node);
		p->next = NULL;
		if (a->zhishu == b->zhishu) {
			if (a->xishu + b->xishu == 0) {
				a = a->next;
				b = b->next;
			} else {
				p->zhishu = a->zhishu;
				p->xishu = a->xishu + b->xishu;
				a = a->next;
				b = b->next;
				lc->next = p;
				lc = p;
			}
		} else if (a->zhishu > b->zhishu) {
			p->zhishu = a->zhishu;
			p->xishu = a->xishu;
			a = a->next;
			lc->next = p;
			lc = p;
		}

		else if (a->zhishu < b->zhishu) {
			p->zhishu = b->zhishu;
			p->xishu = b->xishu;
			b = b->next;
			lc->next = p;
			lc = p;
		}
	}

	while (a) {
		p = new (node);
		p->next = NULL;
		p->zhishu = a->zhishu;
		p->xishu = a->xishu;
		a = a->next;
		lc->next = p;
		lc = p;
	}
	while (b) {
		p = new (node);
		p->next = NULL;
		p->zhishu = b->zhishu;
		p->xishu = b->xishu;
		b = b->next;
		lc->next = p;
		lc = p;
	}
	free(p);
}

void print_list(list L) {
	list p;
	p = L->next;

	while (p != NULL) {
		if (p->zhishu == 0) {
			cout << p->xishu;
			p = p->next;
		} else {
			if (p->xishu == 1) {
				cout << "X^" << p->zhishu;
				p = p->next;
				if (p->xishu > 0 && p != NULL)
					cout << "+";
			} else if (p->xishu == -1) {
				cout << "-X^" << p->zhishu;
				p = p->next;
				if (p->xishu > 0 && p != NULL)
					cout << "+";
			} else {
				cout << p->xishu << "X^" << p->zhishu;
				p = p->next;
				if (p->xishu > 0 && p != NULL)
					cout << "+";
			}

		}

	}
	cout << endl;
}

int main() {
	list la, lb, lc;
	la = new (node);
	la->next = NULL;
	lb = new (node);
	lb->next = NULL;
	lc = new (node);
	lc->next = NULL;
	creat(la, lb);
	add_list(la, lb, lc);
	print_list(lc);
}
