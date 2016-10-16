// BTree.cpp : �������̨Ӧ�ó������ڵ㡣
// ������ by jtahstu at 2016/10/16�� in ʵ����

#include "stdafx.h"
#include<iostream>

using namespace std;

typedef char ElemType;

const int MaxSize = 100;

typedef struct node {
	ElemType data;
	struct node * lchild;
	struct node * rchild;
}BTNode;

//����������,���ϵ�������빹�����������
void CreateBTNode(BTNode *&b, char *str) {
	BTNode *St[MaxSize], *p;
	int top = -1, k, j = 0;
	char ch;
	b = NULL;
	ch = str[j];
	while (ch != '\0') {
		switch (ch) {
		case '(':top++;St[top] = p;k = 1;break;
		case ')':top--;break;
		case ',':k = 2;break;
		default:
			p = (BTNode *)malloc(sizeof(BTNode));
			p->data = ch;
			p->lchild = p->rchild = NULL;
			if (b == NULL)
				b = p;
			else {
				switch (k) {
				case 1:St[top]->lchild = p;break;
				case 2:St[top]->rchild = p;break;
				}
			}
		}
		j++;
		ch = str[j];
	}
}

//����������������
void PreOrder(BTNode * b) {
	if (b != NULL) {
		cout << b->data << " ";
		PreOrder(b->lchild);
		PreOrder(b->rchild);
	}
}

//����������������
void InOrder(BTNode * b) {
	if (b != NULL) {
		PreOrder(b->lchild);
		cout << b->data << " ";
		PreOrder(b->rchild);
	}
}

//����������������
void PostOrder(BTNode * b) {
	if (b != NULL) {
		PreOrder(b->lchild);
		PreOrder(b->rchild);
		cout << b->data << " ";
	}
}

//���ҽڵ�
BTNode * FindNode(BTNode *b, ElemType x) {
	BTNode *p;
	if (b == NULL)
		return NULL;
	else if (b->data == x)
		return b;
	else {
		p = FindNode(b->lchild, x);
		if (p != NULL)
			return p;
		else
			return FindNode(b->rchild, x);
	}
}

//�Һ��ӽڵ�
BTNode * LchildNode(BTNode *p) {
	return p->lchild;
}

BTNode * RchildNode(BTNode *p) {
	return p->rchild;
}

//��������ĸ߶�
int BTNodeHeight(BTNode *b) {
	int lchildh, rchildh;
	if (b == NULL)return 0;
	else {
		lchildh = BTNodeHeight(b->lchild);
		rchildh = BTNodeHeight(b->rchild);
		return (lchildh > rchildh) ? lchildh + 1 : rchildh + 1;
	}
}


/*
	pre����������У�in����������У�nΪ�������Ľڵ����
	���㷨ִ�к󷵻ع���Ķ������ĸ��ڵ�ָ��b
*/
BTNode * CreateBT1(char * pre, char * in, int n) {
	BTNode *b;
	char *p;
	int k;
	if (n <= 0)return NULL;
	b = (BTNode *)malloc(sizeof(BTNode));
	b->data = *pre;
	for (p = in;p < in + n;p++)
		if (*p == *pre)
			break;
	k = p - in;
	b->lchild = CreateBT1(pre + 1, in, k);
	b->rchild = CreateBT1(pre + k + 1, p + 1, n - k - 1);
	return b;
}

/*
	post��ź������У�in����������У�nΪ�������Ľڵ����
	���㷨ִ�к󷵻ع���Ķ������ĸ��ڵ�ָ��b
*/
BTNode * CreateBT2(char * post, char * in, int n) {
	BTNode *b;
	char r, *p;
	int k;
	if (n <= 0)return NULL;
	r = *(post + n - 1);
	b = (BTNode *)malloc(sizeof(BTNode));
	b->data = r;
	for (p = in;p < in + n;p++)
		if (*p == r)
			break;
	k = p - in;
	b->lchild = CreateBT2(post, in, k);
	b->rchild = CreateBT2(post + k, p + 1, n - k - 1);
	return b;
}

int main() {
	char str0[] = "A(B(D(,G)),C(E,F))";
	char str[] = "A(B(D(G,H)),C(E(,I),F))";
	cout << "���������ű�ʾ����" << str << endl;
	BTNode * b;
	CreateBTNode(b, str);
	cout << "���������";
	PreOrder(b);
	cout << endl;
	cout << "���������";
	InOrder(b);
	cout << endl;
	cout << "���������";
	PostOrder(b);
	cout << endl;

	int bh = BTNodeHeight(b);
	cout << "�ö������ĸ߶��ǣ�" <<bh << endl;

	getchar();
	return 0;
}

