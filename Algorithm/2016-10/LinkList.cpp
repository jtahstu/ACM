// LinkList.cpp : 定义控制台应用程序的入口点。
// 单链表

#include "stdafx.h"
#include<iostream>
using namespace std;

typedef int ElemType;

typedef struct LNode {
	ElemType data;
	struct LNode *next;
}LinkList;

//头插法建表，按原数组倒序排列
void CreateListF(LinkList *&L, ElemType a[], int n) {
	LinkList *s;
	L = (LinkList *)malloc(sizeof(LinkList));
	//L->data = 0;	//表头有一个空的节点
	L->next = NULL;	//创建头结点，其next域置为NULL
	for (int i = 0; i < n; i++) {
		s = (LinkList *)malloc(sizeof(LinkList));
		s->data = a[i];
		s->next = L->next;	//将*s插在原开始节点之前，头结点之后
		L->next = s;
	}
}

//尾插法建表，按原数组顺序排列
void CreateListR(LinkList *&L, ElemType a[], int n) {
	LinkList *s, *r;
	L = (LinkList *)malloc(sizeof(LinkList));	//创建头结点
	//L->data = 0; 表头有一个空的节点
	r = L;	//r始终指向尾节点，一开始指向头结点
	for (int i = 0;i < n;i++) {
		s = (LinkList *)malloc(sizeof(LinkList));
		s->data = a[i];
		r->next = s;	//将*s插入*r之后
		r = s;
	}
	r->next = NULL;	//尾节点next域置为NULL
}

//输出线性表
void DispList(LinkList *L) {
	LinkList *p = L->next;
	while (p != NULL) {
		cout << " " << p->data << " ";
		p = p->next;
	}
	cout << endl;
}

//初始化线性表
void InitList(LinkList *&L) {
	L = (LinkList *)malloc(sizeof(LinkList));
	L->next = NULL;
}

//销毁线性表
void DestroyList(LinkList *&L) {
	LinkList *pre = L, *p = L->next;
	while (p != NULL) {
		free(pre);
		pre = p;
		p = pre->next;
	}
	free(pre);
}

//判断线性表是否为空表
bool ListEmpty(LinkList *L) {
	return (L->next == NULL);
}

//线性表的长度
//去除线性表头的一个空元素，所以结果是实际长度-1
int ListLength(LinkList * L) {
	int n = 0;
	LinkList *p = L->next;
	while (p != NULL) {
		n++;
		p = p->next;
	}
	return n;
}

//求线性表第i个节点的值
int GetElem(LinkList *L, int i) {
	int j = 0;
	LinkList *p = L->next;
	while (j < i&&p != NULL) {
		j++;
		p = p->next;
	}
	return (p == NULL) ? -1 : p->data;
}

//按元素值查找其在线性表中的位置
int LocateElem(LinkList *L, ElemType e) {
	int j = 1;
	LinkList *p = L->next;
	while (p!=NULL&&p->data!=e)	{
		j++;
		p = p->next;
	}
	return (p == NULL) ? -1 : j;
}

//插入数据元素到第i个位置之后
bool ListInsert(LinkList * &L, int i, ElemType e) {
	int j = 1;
	LinkList *s, *p=L->next;
	while (j<i&&p!=NULL){
		j++;
		p = p->next;
	}
	if (p != NULL) {
		s = (LinkList *)malloc(sizeof(LinkList));
		s->data = e;
		s->next = p->next;
		p->next = s;
		return true;
	}
	return false;
}

//删除第i个节点
bool ListDelete(LinkList *&L, int i) {
	int j = 1;
	LinkList *s, *p = L->next;
	while (j<i-1&&p != NULL) {
		j++;
		p = p->next;
	}
	//此时p是需要删除节点的前驱节点
	if (p->next != NULL) {
		s = p->next;
		p->next = s->next;
		free(s);
		return true;
	}
	return false;
}

//设计一个算法，删除一个单链表的最大元素节点
void DelMax(LinkList * &L) {
	LinkList *p = L->next, *pre = L, *maxp = p, *maxpre = pre;
	while (p!=NULL)	{
		if (maxp->data < p->data) {
			maxp = p;
			maxpre = pre;
		}
		pre = p;
		p = p->next;
	}
	maxpre->next = maxp->next;
	free(maxp);
}

int main() {
	int data[] = { 1,5,9,3,5,7 };
	LinkList * L;
	CreateListF(L, data, 6);
	cout << "头插法建表L：\n";
	DispList(L);

	//cout << L << endl;
	//cout << &*L << endl;
	//cout << *&L << endl;

	cout << &L << endl;

	int data2[] = { 1,2,3,4,5,6 };
	LinkList *L2;
	CreateListR(L2, data2, 6);
	cout << "尾插法建表L2：\n";
	DispList(L2);
	
	int lenL = ListLength(L);
	cout << "表L的长度为：" << lenL << endl;
	int lenL2 = ListLength(L2);
	cout << "表L2的长度为：" << lenL2 << endl;

	ElemType L5 = GetElem(L, 5);
	cout << "线性表L的第五个元素的值是：" << L5 << endl;

	int j = LocateElem(L, 9);
	cout << "元素值9在线性表L中的位置是：" << j << endl;

	ElemType x = 666;
	bool ins = ListInsert(L2, 5, x);
	cout << "将元素值666插入到线性表L2的第5个位置，结果是：" << ins << endl;
	cout << "此时线性表L2为：";
	DispList(L2);

	bool del = ListDelete(L2, 2);
	cout << "删除线性表L2第2个节点的结果是：" << del << endl;
	cout << "此时线性表L2为：";
	DispList(L2);

	cout << "删除线性表L最大节点之前是：";
	DispList(L);
	DelMax(L);
	cout << "删除线性表L最大节点之后是：";
	DispList(L);

	getchar();
	return 0;
}

