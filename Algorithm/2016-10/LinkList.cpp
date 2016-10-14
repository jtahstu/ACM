// LinkList.cpp : �������̨Ӧ�ó������ڵ㡣
// ������

#include "stdafx.h"
#include<iostream>
using namespace std;

typedef int ElemType;

typedef struct LNode {
	ElemType data;
	struct LNode *next;
}LinkList;

//ͷ�巨������ԭ���鵹������
void CreateListF(LinkList *&L, ElemType a[], int n) {
	LinkList *s;
	L = (LinkList *)malloc(sizeof(LinkList));
	//L->data = 0;	//��ͷ��һ���յĽڵ�
	L->next = NULL;	//����ͷ��㣬��next����ΪNULL
	for (int i = 0; i < n; i++) {
		s = (LinkList *)malloc(sizeof(LinkList));
		s->data = a[i];
		s->next = L->next;	//��*s����ԭ��ʼ�ڵ�֮ǰ��ͷ���֮��
		L->next = s;
	}
}

//β�巨������ԭ����˳������
void CreateListR(LinkList *&L, ElemType a[], int n) {
	LinkList *s, *r;
	L = (LinkList *)malloc(sizeof(LinkList));	//����ͷ���
	//L->data = 0; ��ͷ��һ���յĽڵ�
	r = L;	//rʼ��ָ��β�ڵ㣬һ��ʼָ��ͷ���
	for (int i = 0;i < n;i++) {
		s = (LinkList *)malloc(sizeof(LinkList));
		s->data = a[i];
		r->next = s;	//��*s����*r֮��
		r = s;
	}
	r->next = NULL;	//β�ڵ�next����ΪNULL
}

//������Ա�
void DispList(LinkList *L) {
	LinkList *p = L->next;
	while (p != NULL) {
		cout << " " << p->data << " ";
		p = p->next;
	}
	cout << endl;
}

//��ʼ�����Ա�
void InitList(LinkList *&L) {
	L = (LinkList *)malloc(sizeof(LinkList));
	L->next = NULL;
}

//�������Ա�
void DestroyList(LinkList *&L) {
	LinkList *pre = L, *p = L->next;
	while (p != NULL) {
		free(pre);
		pre = p;
		p = pre->next;
	}
	free(pre);
}

//�ж����Ա��Ƿ�Ϊ�ձ�
bool ListEmpty(LinkList *L) {
	return (L->next == NULL);
}

//���Ա�ĳ���
//ȥ�����Ա�ͷ��һ����Ԫ�أ����Խ����ʵ�ʳ���-1
int ListLength(LinkList * L) {
	int n = 0;
	LinkList *p = L->next;
	while (p != NULL) {
		n++;
		p = p->next;
	}
	return n;
}

//�����Ա��i���ڵ��ֵ
int GetElem(LinkList *L, int i) {
	int j = 0;
	LinkList *p = L->next;
	while (j < i&&p != NULL) {
		j++;
		p = p->next;
	}
	return (p == NULL) ? -1 : p->data;
}

//��Ԫ��ֵ�����������Ա��е�λ��
int LocateElem(LinkList *L, ElemType e) {
	int j = 1;
	LinkList *p = L->next;
	while (p!=NULL&&p->data!=e)	{
		j++;
		p = p->next;
	}
	return (p == NULL) ? -1 : j;
}

//��������Ԫ�ص���i��λ��֮��
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

//ɾ����i���ڵ�
bool ListDelete(LinkList *&L, int i) {
	int j = 1;
	LinkList *s, *p = L->next;
	while (j<i-1&&p != NULL) {
		j++;
		p = p->next;
	}
	//��ʱp����Ҫɾ���ڵ��ǰ���ڵ�
	if (p->next != NULL) {
		s = p->next;
		p->next = s->next;
		free(s);
		return true;
	}
	return false;
}

//���һ���㷨��ɾ��һ������������Ԫ�ؽڵ�
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
	cout << "ͷ�巨����L��\n";
	DispList(L);

	//cout << L << endl;
	//cout << &*L << endl;
	//cout << *&L << endl;

	cout << &L << endl;

	int data2[] = { 1,2,3,4,5,6 };
	LinkList *L2;
	CreateListR(L2, data2, 6);
	cout << "β�巨����L2��\n";
	DispList(L2);
	
	int lenL = ListLength(L);
	cout << "��L�ĳ���Ϊ��" << lenL << endl;
	int lenL2 = ListLength(L2);
	cout << "��L2�ĳ���Ϊ��" << lenL2 << endl;

	ElemType L5 = GetElem(L, 5);
	cout << "���Ա�L�ĵ����Ԫ�ص�ֵ�ǣ�" << L5 << endl;

	int j = LocateElem(L, 9);
	cout << "Ԫ��ֵ9�����Ա�L�е�λ���ǣ�" << j << endl;

	ElemType x = 666;
	bool ins = ListInsert(L2, 5, x);
	cout << "��Ԫ��ֵ666���뵽���Ա�L2�ĵ�5��λ�ã�����ǣ�" << ins << endl;
	cout << "��ʱ���Ա�L2Ϊ��";
	DispList(L2);

	bool del = ListDelete(L2, 2);
	cout << "ɾ�����Ա�L2��2���ڵ�Ľ���ǣ�" << del << endl;
	cout << "��ʱ���Ա�L2Ϊ��";
	DispList(L2);

	cout << "ɾ�����Ա�L���ڵ�֮ǰ�ǣ�";
	DispList(L);
	DelMax(L);
	cout << "ɾ�����Ա�L���ڵ�֮���ǣ�";
	DispList(L);

	getchar();
	return 0;
}

