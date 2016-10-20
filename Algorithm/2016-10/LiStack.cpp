// LiStack.cpp : �������̨Ӧ�ó������ڵ㡣
// ջ����ʽ�洢

#include "stdafx.h"
#include<iostream>
#include<cstring>

using namespace std;

typedef char ElemType;

typedef struct linknode {
	ElemType data;
	struct linknode * next;
}LiStack;

//��ʼ��ջ�����һ���յ�ͷ�ڵ�
void InitStack(LiStack *&s) {
	s = (LiStack *)malloc(sizeof(LiStack));
	s->data = NULL;	//ͷ����ǲ��洢���ݵģ����ﲻдҲ����
	s->next = NULL;
}

//����ջ
void DestoryStack(LiStack *&s) {
	LiStack *p = s, *q = s->next;
	while (q!=NULL)	{
		free(p);
		p = q;
		q = p->next;
	}
	free(p);	//��ʱpָ��β�ڵ㣬�ͷ���ռ�
}

//�ж�ջ�Ƿ�Ϊ��
bool StackEmpty(LiStack *&s) {
	return s->next == NULL;
}

//��ջ���ڿյ�ͷ���֮���������
void Push(LiStack *&s, ElemType e) {
	LiStack *p ;
	p = (LiStack *)malloc(sizeof(LiStack));
	p->data = e;
	p->next = s->next;
	s->next = p;
}

//��ջ
ElemType Pop(LiStack *&s) {
	if (s->next == NULL)
		return NULL;
	LiStack *p;
	p = (LiStack *)malloc(sizeof(LiStack));
	p = s->next;
	s->next = p->next;
	ElemType e=p->data;
	free(p);
	return e;
}

//ȡջ��Ԫ��
ElemType GetTop(LiStack *s) {
	if (s->next == NULL)
		return NULL;
	return s->next->data;
}

//�ж�����ı��ʽ�е������Ƿ���ԣ�����ֻ���������ţ�
bool Match(char exp[]) {
	int i = 0;
	char e;
	bool flag = true;
	LiStack *s;
	InitStack(s);
	while (i < strlen(exp)&&flag)
	{
		if (exp[i] == '(')
			Push(s,exp[i]);
		else {
			if (GetTop(s) == '(')
				Pop(s);
			else {
				flag = false;
				break;
			}
		}
		i++;
	}
	if (StackEmpty(s)&&flag)
		return true;
	DestoryStack(s);
	return false;
}

int main(){
	char exp1[] = "((()()))";
	char exp2[] = "((((((((((((((((((((((((((((((((((((((((((((((((()))))))))))))))))))))))))))))))))))";
	if (Match(exp1))
		cout << "ƥ��" << endl;
	else
		cout << "��ƥ��" << endl;
	if (Match(exp2))
		cout << "ƥ��" << endl;
	else
		cout << "��ƥ��" << endl;
	getchar();
    return 0;
}

