#include<iostream>
#include<cstdlib>
using namespace std;
struct JT{
	string xuehao;
	string mingzi;
	int chengji;
}a[100001];
int res1(const void*a,const void*b)
{
	JT* pa=(JT*)a;
	JT* pb=(JT*)b;
	if(pa->xuehao>pb->xuehao)
		return 1;
	else return -1;
}
int res2(const void*a,const void*b)
{
	JT* pa=(JT*)a;
	JT* pb=(JT*)b;
	if(pa->mingzi>pb->mingzi)
		return 1;
	else if(pa->mingzi==pb->mingzi)
	{
		if(pa->xuehao>pb->xuehao)return 1;
		else return -1;
	}
	else return -1;
}
int res3(const void*a,const void*b)
{
	JT* pa=(JT*)a;
	JT* pb=(JT*)b;
	if(pa->chengji>pb->chengji)return 1;
	else if(pa->chengji==pb->chengji)
	{
		if(pa->xuehao>pb->xuehao)return 1;
		else return -1;
	}
	else return -1;
}
int main()
{
	int n,count,case1=1;
	while(cin>>n>>count)
	{
		if(n==0&&count==0)break;
		for(int i=0;i<n;i++)
			cin>>a[i].xuehao>>a[i].mingzi>>a[i].chengji;
		if(count==1)qsort(a,n,sizeof(JT),res1);
		else if(count==2)qsort(a,n,sizeof(JT),res2);
		else  if(count==3)qsort(a,n,sizeof(JT),res3);
		cout<<"Case "<<case1++<<":"<<endl;
		for(int i=0;i<n;i++)
			cout<<a[i].xuehao<<" "<<a[i].mingzi<<" "<<a[i].chengji<<endl;
	}
	return 0;
}
