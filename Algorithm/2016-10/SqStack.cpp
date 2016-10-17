// SqStack.cpp : �������̨Ӧ�ó������ڵ㡣
// ջ��˳��洢

#include "stdafx.h"
#include<iostream>

using namespace std;

typedef char ElemType;
const int MaxSize = 100;

typedef struct {
	ElemType data[MaxSize];
	int top;
}SqStack;


//��ʼ��ջ
void InitStack(SqStack *&s) {
	s = (SqStack *)malloc(sizeof(SqStack));
	s->top = -1;
}

//����ջ
void DestroyStack(SqStack *&s) {
	free(s);
}

//�ж�ջ�Ƿ�Ϊ��
bool StackEmpty(SqStack *s) {
	return s->top == -1;
}

//��ջ
bool Push(SqStack *&s, ElemType e) {
	if (s->top == MaxSize - 1) {
		return false;
	}
	s->top++;
	s->data[s->top] = e;
	return true;
}

//��ջ
ElemType Pop(SqStack *&s) {
	if (s->top == -1)
		return NULL;
	ElemType ans = s->data[s->top];
	s->top--;
	return ans;
}

//ȡջ��Ԫ��
ElemType GetTop(SqStack *s) {
	if (s->top == -1)
		return NULL;
	return s->data[s->top];
}

//����˳��ջ�ж�һ���ַ����Ƿ��ǶԳƴ�
bool sysmmetry(ElemType str[]) {
	ElemType e;
	SqStack *st;
	InitStack(st);
	for (int i = 0;str[i] != '\0';i++)
		Push(st,str[i]);
	for (int i = 0;str[i] != '\0';i++) {
		ElemType c = Pop(st);
		if (c != str[i]) {
			DestroyStack(st);
			return false;
		}
	}
	DestroyStack(st);
	return true;
}

int main(){
	ElemType str[] = "6662666";
	ElemType str1[] = "66626666";
	if (sysmmetry(str1))
		cout << "�ǵİ� ~~~" << endl;
	else
		cout << "��Ŷ�����ǵ� ..." << endl;
	getchar();
    return 0;
}

