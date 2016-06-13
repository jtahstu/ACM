#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
void swap(int *p,int*q)
{
	int tmp;
	tmp=*p;
	*p=*q;
	*q=tmp;
}

void mknewseq(int *data,int start, int last)
{
	while(start<last)
	{
		swap(&data[start],&data[last]);
		start++;
		last--;

	}
}

void showdata(int *data,int num)
{
	int i=0;
	for(i=0;i<num;i++)
	{
		printf("%d",data[i]);
	}
	printf("\n");
}
int findall(int *data,int num)
{
	int i,j;
	int lastdata=num-1;
	int tmp;

	for(i=lastdata;i>0;i--)
	{
		if(data[i]>data[i-1]) break;
	}
	if(0==i) return 0;
	tmp=i;
	for(j=lastdata;j>=i;j--)
	{
		if((data[j]>data[i-1])&&(data[j]<data[tmp]))
			tmp=j;
	}

	swap(&data[tmp],&data[i-1]);

	mknewseq(data,i,lastdata);
	return 1;
}

int main()
{
    int data[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
        cin>>data[i];
        showdata(data,n);
	while(findall(data,n))
    {
	showdata(data,n);
	}
	return 0;
}
//#include "iostream"//这个虽然也能输出全排列，但是会对数字排序，按从小到大输出
//#include "algorithm"
//using namespace std;
//
//void permutation(char* str,int length)
//{
//	sort(str,str+length);
//	do
//	{
//		for(int i=0;i<length;i++)
//			cout<<str[i];
//		cout<<endl;
//	}while(next_permutation(str,str+length));
//
//}
//int main(void)
//{
//	char str[100];
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++)
//        cin>>str[i];
//	permutation(str,3);
//	return 0;
//}
