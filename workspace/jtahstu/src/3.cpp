#include<iostream>
#include<stdlib.h>
using namespace std;
int inc(const void *arg1,const void *arg2)//����
{
	return (*(int *)arg1<*(int *)arg2)?-1:
			(*(int *)arg1>*(int *)arg2)?1:0;
}
int inc_jian(const void *arg1,const void *arg2)//�ݼ�
{
	return (*(int *)arg1<*(int *)arg2)?1:
			(*(int *)arg1>*(int *)arg2)?-1:0;
}
int main3()
{
	int a[10];
	for(int i=0;i<5;i++)
		cin>>a[i];
	qsort(a,5,sizeof(int),inc);
	for(int i=0;i<5;i++)
			cout<<a[i]<<" ";
	return 0;
}
