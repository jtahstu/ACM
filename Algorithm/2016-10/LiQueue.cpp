// LiQueue.cpp : �������̨Ӧ�ó������ڵ㡣
// ���е���ʽ�洢

#include "stdafx.h"
#include<iostream>

using namespace std;

typedef int ElemType;

//�����е����ݽڵ�
typedef struct qnode {
	ElemType data;
	struct qnode * next;
}QNode;

//����ͷ�ڵ�
typedef struct {
	QNode * front;
	QNode * rear;
}LiQueue;

//��ʼ������
void InitQueue(LiQueue * &q) {
	q = (LiQueue *)malloc(sizeof(LiQueue));
	q->front = q->rear = NULL;
}

//���ٶ���
void DestroyQueue(LiQueue * &q) {
	QNode *p = q->front, *r;
	if(p != NULL) {		//���в�Ϊ�ղ�����
		r = p->next;
		while (r != NULL) {
			free(p);	//ɾ����ǰ�ڵ�
			p = r;		//p����
			r->next = p;	//��һ��ɾ����Ԫ��
		}
	}
	free(p);	//�Զ���Ľڵ㶼����
	free(q);	//�ͷŶ���ͷ�ڵ�
}

//�ж϶����Ƿ�Ϊ��
bool QueueEmpty(LiQueue *q) {
	return q->rear == NULL;
	//return q->front == NULL;	//����д��������
}

//������,�Ӷ��е�β������
void enQueue(LiQueue * &q, ElemType e) {
	QNode *p;
	p = (QNode *)malloc(sizeof(QNode));
	p->data = e;
	p->next = NULL;
	if (q->front == NULL) {	//�������Ϊ�գ����ͷ�Ͷ�β��ָ��p�ڵ�
		q->front = q->rear = p;
	}else {
		q->rear->next = p;	//���һ���ڵ����һ���ڵ�����Ϊp
		q->rear = p;	//��βָ��ָ��p
	}
}

//�����У��Ӷ��е�ͷ����
ElemType deQueue(LiQueue * &q) {
	if (q->front == NULL)	//�ն��У�����ɶ
		return NULL;
	QNode *p;
	p = (QNode *)malloc(sizeof(QNode));
	p = q->front;
	q->front = p->next;
	if (q->front == NULL)	//�������һ���ڵ㣬����Ϊ�գ����βָ��ҲҪ����Ϊ��
		q->rear = NULL;
	ElemType e = p->data;
	free(p);
	return e;
}

//�������
void DisQueue(LiQueue *q) {
	QNode *p;
	p = q->front;
	while (p->next!=NULL)	{
		cout << p->data << " ";
		p = p->next;
	}
	cout <<p->data<< endl;	//������Ҫ������һλ
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
	cout << "��ǰ���е������ǣ�";
	DisQueue(q);
	cout << "��һ��Ԫ�غ�";
	deQueue(q);
	DisQueue(q);

	getchar();
	return 0;
}

