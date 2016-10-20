// LiQueue.cpp : 定义控制台应用程序的入口点。
// 队列的链式存储

#include "stdafx.h"
#include<iostream>

using namespace std;

typedef int ElemType;

//链队中的数据节点
typedef struct qnode {
	ElemType data;
	struct qnode * next;
}QNode;

//链队头节点
typedef struct {
	QNode * front;
	QNode * rear;
}LiQueue;

//初始化队列
void InitQueue(LiQueue * &q) {
	q = (LiQueue *)malloc(sizeof(LiQueue));
	q->front = q->rear = NULL;
}

//销毁队列
void DestroyQueue(LiQueue * &q) {
	QNode *p = q->front, *r;
	if(p != NULL) {		//队列不为空才销毁
		r = p->next;
		while (r != NULL) {
			free(p);	//删除当前节点
			p = r;		//p后移
			r->next = p;	//下一个删除的元素
		}
	}
	free(p);	//自定义的节点都销毁
	free(q);	//释放队列头节点
}

//判断队列是否为空
bool QueueEmpty(LiQueue *q) {
	return q->rear == NULL;
	//return q->front == NULL;	//两种写法都可以
}

//进队列,从队列的尾部插入
void enQueue(LiQueue * &q, ElemType e) {
	QNode *p;
	p = (QNode *)malloc(sizeof(QNode));
	p->data = e;
	p->next = NULL;
	if (q->front == NULL) {	//如果队列为空，则队头和队尾都指向p节点
		q->front = q->rear = p;
	}else {
		q->rear->next = p;	//最后一个节点的下一个节点设置为p
		q->rear = p;	//队尾指针指向p
	}
}

//出队列，从队列的头部出
ElemType deQueue(LiQueue * &q) {
	if (q->front == NULL)	//空队列，出个啥
		return NULL;
	QNode *p;
	p = (QNode *)malloc(sizeof(QNode));
	p = q->front;
	q->front = p->next;
	if (q->front == NULL)	//如果出了一个节点，队列为空，则队尾指针也要设置为空
		q->rear = NULL;
	ElemType e = p->data;
	free(p);
	return e;
}

//输出队列
void DisQueue(LiQueue *q) {
	QNode *p;
	p = q->front;
	while (p->next!=NULL)	{
		cout << p->data << " ";
		p = p->next;
	}
	cout <<p->data<< endl;	//这里需要输出最后一位
}

int main() {
	LiQueue *q;
	InitQueue(q);
	enQueue(q, 1);
	enQueue(q, 2);
	enQueue(q, 3);
	enQueue(q, 4);
	enQueue(q, 666);
	enQueue(q, 233);
	cout << "当前队列的排列是：";
	DisQueue(q);
	cout << "出一个元素后：";
	deQueue(q);
	DisQueue(q);

	getchar();
	return 0;
}

