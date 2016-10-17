// SqStack.cpp : 定义控制台应用程序的入口点。
// 栈的顺序存储

#include "stdafx.h"
#include<iostream>

using namespace std;

typedef char ElemType;
const int MaxSize = 100;

typedef struct {
	ElemType data[MaxSize];
	int top;
}SqStack;


//初始化栈
void InitStack(SqStack *&s) {
	s = (SqStack *)malloc(sizeof(SqStack));
	s->top = -1;
}

//销毁栈
void DestroyStack(SqStack *&s) {
	free(s);
}

//判断栈是否为空
bool StackEmpty(SqStack *s) {
	return s->top == -1;
}

//进栈
bool Push(SqStack *&s, ElemType e) {
	if (s->top == MaxSize - 1) {
		return false;
	}
	s->top++;
	s->data[s->top] = e;
	return true;
}

//出栈
ElemType Pop(SqStack *&s) {
	if (s->top == -1)
		return NULL;
	ElemType ans = s->data[s->top];
	s->top--;
	return ans;
}

//取栈顶元素
ElemType GetTop(SqStack *s) {
	if (s->top == -1)
		return NULL;
	return s->data[s->top];
}

//利用顺序栈判断一个字符串是否是对称串
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
		cout << "是的哎 ~~~" << endl;
	else
		cout << "啊哦，不是的 ..." << endl;
	getchar();
    return 0;
}

