//#include <iostream>
//#include<cstdio>
//using namespace std;
//��ѧ��������������һ�����µ���,�м���˶��޷���ʾ����
#include <stdio.h>
int main()
{
    int n, m, i, s=0;
    scanf("%d%d", &n, &m);
    for (i=2; i<=n; i++)
        s=(s+m)%i;
    printf ("The winner is %d\n", s+1);
}
///*Լɪ��*/
//#include <stdlib.h>
//#include <stdio.h>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//typedef struct node
//{
//    int data;
//    struct node *next;
//} LNode;
//
//LNode* Create(int n,int k)/*����ѭ������*/
//{
//    int start=k-1;
//    LNode *s,*p,*L=0,*t;
//    if (start==0) start=n;
//    while (n!=0)
//    {
//        s=(LNode *)malloc(sizeof(LNode));
//        if (L==0) p=s;
//        if (n==start) t=s;
//        s->data=n;
//        s->next=L;
//        L=s;
//        n--;
//    }
//    p->next=L;
//    return t;
//}
//
//LNode* GetNode(LNode *p)/*���Ӻ���*/
//{
//    LNode *q;
//    for (q=p; q->next!=p; q=q->next);
//    q->next=p->next;
//    free (p);
//    return (q);
//}
//
//int Print(LNode *p,int m,int n,int s)/*�������*/
//{
//    int i,t;
//    int j=0;
//    int a[10001],b[10001];
//    while (p->next!=p)
//    {
//        for (i=1; i<=m; i++)
//            p=p->next;
//        //  printf ("%d ",p->data);
//        a[j]=p->data;
//        j++;
//        p=GetNode(p);
//    }
//    a[j++]=p->data;
//    // for(int k=0;k<n;k++)
//    //cout<<a[k]<<" ";
//    // b[k]=a[k];
//    //sort(b+n-s+1,b+n);
//    for(int k=n-s,t=0; k<n; k++,t++)
//        b[t]=a[k];
//    //cout<<b[k]<<" ";
//    sort(b,b+s);
//    for(int k=0; k<s-1; k++)
//        cout<<b[k]<<" ";
//    cout<<b[s-1]<<endl;
//    return 0;
//}
//int main()
//{
//    LNode* Create(int,int);
//    LNode* GetNode(LNode *);
//    int Print(LNode *,int,int,int);
//    LNode *p;
//    int n,k,m,s;
//    while(cin>>n>>m>>s)
//    {
//        p=Create(n,1);
//        Print(p,m,n,s);
//    }
//    return 0;
//}

//������������Դ����,���Ľ���������� ����.�ӵڼ�����ʼ,�����ڼ�����һ���˳���,Ȼ�����ÿ����˭����
//ͨ������ʵ��
// /*Լɪ��*/
//
//#include <stdlib.h>
//#include <stdio.h>
//typedef struct node
//{
//    int data;
//    struct node *next;
//} LNode;
//
//main()
//{
//    LNode* Create(int,int);
//    LNode* GetNode(LNode *);
//    int Print(LNode *,int);
//    LNode *p;
//    int n,k,m;
//    do
//    {
//        printf ("����������");
//        scanf ("%d",&n);
//    }
//    while (n<=0);
//    do
//    {
//        printf ("���뿪ʼ�˵����(1~%d)",n);
//        scanf ("%d",&k);
//    }
//    while (k<=0 || k>n);
//    do
//    {
//        printf ("����������");
//        scanf ("%d",&m);
//    }
//    while(m<=0);
//
//    p=Create(n,k);
//    Print(p,m);
//    return 0;
//}��
//
//LNode* Create(int n,int k)/*����ѭ������*/
//{
//    int start=k-1;
//    LNode *s,*p,*L=0,*t;
//    if (start==0) start=n;
//    while (n!=0)
//    {
//        s=(LNode *)malloc(sizeof(LNode));
//        if (L==0) p=s;
//        if (n==start) t=s;
//        s->data=n;
//        s->next=L;
//        L=s;
//        n--;
//    }
//    p->next=L;
//    return t;
//}
//
//LNode* GetNode(LNode *p)/*���Ӻ���*/
//{
//    LNode *q;
//    for (q=p; q->next!=p; q=q->next);
//    q->next=p->next;
//    free (p);
//    return (q);
//}
//
//Print(LNode *p,int m)/*�������*/
//{
//    int i;
//    printf ("���ӱ��:\n");
//    while (p->next!=p)
//    {
//        for (i=1; i<=m; i++)
//            p=p->next;
//        printf ("%d ",p->data);
//        p=GetNode(p);
//    }
//    printf("%d\n",p->data);
//    return 0;
//}
