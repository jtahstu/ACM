#include <stdio.h>
typedef struct {
    char key[15];	//�ؼ���
    char name[20];
    int age;
} DATA; 	//���ݽ������
//#include "2-4 ChainList.h"
#include <stdlib.h>
typedef struct Node {
    DATA data;
    struct Node *next;
} ChainListType;
ChainListType *ChainListAddEnd(ChainListType *head,DATA data);  //��ӽ�㵽����ĩβ
ChainListType *ChainListAddFirst(ChainListType *head,DATA data);  //��ӽ�㵽�����ײ�
ChainListType *ChainListFind(ChainListType *head,char *key); //���ؼ����������в�������
ChainListType *ChainListInsert(ChainListType *head,char *findkey,DATA data);  //�����㵽����ָ��λ��
int ChainListDelete(ChainListType *head,char *key);//ɾ��ָ���ؼ��ֵĽ��
int ChainListLength(ChainListType *head);//��ȡ����������

//#include "2-5 ChainList.c"
#include <string.h>
ChainListType *ChainListAddEnd(ChainListType *head,DATA data) { //��ӽ�㵽�����β
    ChainListType *node,*h;
    if(!(node=(ChainListType *)malloc(sizeof(ChainListType)))) {
        printf("Ϊ���������������ڴ�ʧ�ܣ�\n");
        return NULL;  //�����ڴ�ʧ��
    }
    node->data=data; //��������
    node->next=NULL;  //���ý��ָ��Ϊ�գ���Ϊ��β
    if(head==NULL) { //��ͷָ��
        head=node;
        return head;
    }
    h=head;
    while(h->next!=NULL) //���������ĩβ
        h=h->next ;
    h->next=node;
    return head;
}
ChainListType *ChainListAddFirst(ChainListType *head,DATA data) {
    ChainListType *node,*h;
    if(!(node=(ChainListType *)malloc(sizeof(ChainListType)))) {
        printf("Ϊ���������������ڴ�ʧ�ܣ�\n");
        return NULL;  //�����ڴ�ʧ��
    }
    node->data=data; //��������
    node->next=head;  //ָ��ͷָ����ָ���
    head=node;        //ͷָ��ָ���������
    return head;
}
ChainListType *ChainListInsert(ChainListType *head,char *findkey,DATA data) { //�����㵽����ָ��λ��
    ChainListType *node,*node1;
    if(!(node=(ChainListType *)malloc(sizeof(ChainListType)))) { //���䱣���������
        printf("Ϊ���������������ڴ�ʧ�ܣ�\n");
        return 0;  //�����ڴ�ʧ��
    }
    node->data=data;  //�������е�����
    node1=ChainListFind(head,findkey);
    if(node1) { //���ҵ�Ҫ����Ľ��
        node->next=node1->next;  //�²�����ָ��ؼ�������һ���
        node1->next=node;    //���ùؼ����ָ���²�����
    } else {
        free(node);//�ͷ��ڴ�
        printf("δ�ҵ�����λ�ã�\n");
    }
    return head;//����ͷָ��
}
ChainListType *ChainListFind(ChainListType *head,char *key) { //���ؼ����������в�������
    ChainListType *h;
    h=head;       //��������ͷָ��
    while(h) {    //�������Ч������в���
        if(strcmp(h->data.key,key)==0) //�����ؼ����봫��ؼ�����ͬ
            return h;  //���ظý��ָ��
        h=h->next; //������һ���
    }
    return NULL; //���ؿ�ָ��
}
int ChainListDelete(ChainListType *head,char *key) {
    ChainListType *node,*h; //node����ɾ������ǰһ���
    node=h=head;
    while(h) {
        if(strcmp(h->data.key,key)==0) { //�ҵ��ؼ��֣�ִ��ɾ������
            node->next=h->next;  //ʹǰһ���ָ��ǰ������һ���
            free(h);  //�ͷ��ڴ�
            return 1;
        } else {
            node=h;  //ָ��ǰ���
            h=h->next; //ָ����һ���
        }
    }
    return 0;//δɾ��
}
int ChainListLength(ChainListType *head) { //��ȡ����������
    ChainListType *h;
    int i=0;
    h=head;
    while(h) {    //������������
        i++; //�ۼӽ������
        h=h->next;//������һ���
    }
    return i;//���ؽ������
}

void ChainListAll(ChainListType *head) { //��������
    ChainListType *h;
    DATA data;
    h=head;
    printf("���������������£�\n");
    while(h) { //ѭ����������ÿ�����
        data=h->data;//��ȡ�������
        printf("(%s,%s,%d)\n",data.key,data.name,data.age);
        h=h->next;//������һ���
    }
    return;
}
int main() {
    ChainListType *node, *head=NULL;
    DATA data;
    char key[15],findkey[15];

    printf("���������е����ݣ������ؼ��֡����������䣬�ؼ�������0�����˳���\n");
    do {
        fflush(stdin);  //������뻺����
        scanf("%s",data.key);
        if(strcmp(data.key,"0")==0) break; //������0�����˳�
        scanf("%s%d",data.name,&data.age);
        head=ChainListAddEnd(head,data);//������β����ӽ������
    } while(1);

    printf("��������%d����㡣\n",ChainListLength(head)); //���ؽ������
    ChainListAll(head); //��ʾ���н��

    printf("\n�����㣬�������λ�õĹؼ��֣�") ;
    scanf("%s",&findkey);//�������λ�ùؼ���
    printf("��������������(�ؼ��� ���� ����):");
    scanf("%s%s%d",data.key,data.name,&data.age);//�������������
    head=ChainListInsert(head,findkey,data);//���ò��뺯��

    ChainListAll(head); //��ʾ���н��

    printf("\n�������в��ң�������ҹؼ���:");
    fflush(stdin);//������뻺����
    scanf("%s",key);//������ҹؼ���
    node=ChainListFind(head,key);//���ò��Һ��������ؽ��ָ��
    if(node) { //�����ؽ��ָ����Ч
        data=node->data;//��ȡ��������
        printf("�ؼ���%s��Ӧ�Ľ������Ϊ(%s,%s,%d)\n" ,key,data.key,data.name,data.age);
    } else//�����ָ����Ч
        printf("��������δ�ҵ��ؼ���Ϊ%s�Ľ�㣡\n",key);

    printf("\n��������ɾ����㣬����Ҫɾ���Ĺؼ���:");
    fflush(stdin);//������뻺����
    scanf("%s",key);//����ɾ�����ؼ���
    ChainListDelete(head,key); //����ɾ����㺯��
    ChainListAll(head); //��ʾ���н��
    getch();
    return 0;
}
