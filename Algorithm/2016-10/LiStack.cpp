// LiStack.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

using namespace std;

typedef char ElemType;

typedef struct linknode {
	ElemType data;
	struct linknode * next;
}LiStack;

//初始化栈
void InitStack(LiStack *&s) {
	s = (LiStack *)malloc(sizeof(LiStack));
	s->next = NULL;
}

//销毁栈
void DestoryStack(LiStack *&s) {
	LiStack *p = s, *q = s->next;
	while (q!=NULL)	{
		free(p);
		p = q;
		q = p->next;

	}
	free(p);	//此时p指向尾节点，释放其空间
}

//判断栈是否为空
bool StackEmpty(LiStack *&s) {
	return s->next == NULL;
}

//进栈
void Push(LiStack *&s, ElemType e) {
	LiStack *p ;
	p = (LiStack *)malloc(sizeof(LiStack));
	p->data = e;
	p->next = s->next;
	s->next = p;
}

//出栈
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

//取栈顶元素
ElemType GetTop(LiStack *s) {
	if (s->next == NULL)
		return NULL;
	return s->next->data;
}

//判断输入的表达式中的括号是否配对（假设只含左右括号）
bool Match(char exp[], int n) {
	int i = 0;
	char e;
	bool flag = true;
	LiStack *s;
	InitStack(s);
	while (i < n&&flag)
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
	if (Match(exp1, 8))
		cout << "匹配" << endl;
	else
		cout << "不匹配" << endl;
	if (Match(exp2, 84))
		cout << "匹配" << endl;
	else
		cout << "不匹配" << endl;
	getchar();
    return 0;
}

