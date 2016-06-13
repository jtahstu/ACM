/*
鸡兔同笼
时间限制：3000 ms  |  内存限制：65535 KB
难度：1

描述
    已知鸡和兔的总数量为n,总腿数为m。输入n和m,依次输出鸡和兔的数目，如果无解，则输出“No answer”(不要引号)。

输入
    第一行输入一个数据a,代表接下来共有几组数据，在接下来的(a<10)
    a行里，每行都有一个n和m.(0<m,n<100)
输出
    输出鸡兔的个数，或者No answer
样例输入

    2
    14 32
    10 16

样例输出

    12 2
    No answer
 */
#include "stdio.h"
int main(int argc, char const *argv[])
{
	int i,m,n,N;
	scanf("%d",&N);
	while(N--)
	{
		int x,y,a=0;
		scanf("%d%d",&n,&m);
		for(i=0;i<=n;i++)
		{
			if(i*2+(n-i)*4==m)
            {

             a=1;
            printf("%d %d\n",i,n-i);break;
            }
		}
		if(a==0)printf("No answer\n");
	}
	return 0;
}
/*
 
#include<iostream>
using namespace std;
int main()
{
   int n,a,b,p,q;
   cin>>n;
   while(n--)
   {
      cin>>a>>b;
      q=(b-2*a)/2;
      p=a-q;
      if(p<0 ||q<0 || b%2) cout<<"No answer"<<endl;
      else cout<<p<<" "<<q<<endl;
   }
}                        
最优代码
 */