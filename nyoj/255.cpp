/*C小加 之 随机数
时间限制：3000 ms  |  内存限制：65535 KB
难度：1
描述
ACM队的“C小加”同学想在学校中请一些同学一起做一项问卷调查，为了实验的客观性，他先用计算机生成了N个1到1000之间的随机整数（0<N≤100），对于其中重复的数字，只保留一个，把其余相同的数去掉，不同的数对应着不同的学生的学号。然后再把这些数从小到大排序，按照排好的顺序去找同学做调查。请你协助 C小加 完成“去重”与“排序”的工作。
输入
第一行输入整数T（1<T<10）表示多少组测试数据，
每组测试数据包括2行，
第1行为1个正整数，表示所生成的随机数的个数：N（0<N≤100）
第2行有N个用空格隔开的正整数，为所产生的随机数。
（随机数为题目给定的，不需要ACMer生成）
输出
输出也是2行，第1行为1个正整数M，表示不相同的随机数的个数。
第2行为M个用空格隔开的正整数，为从小到大排好序的不相同的随机数。
样例输入
1
10
20 40 32 67 40 20 89 300 400 15
样例输出
8
15 20 32 40 67 89 300 400
来源
RQNOJ
上传者
唐博*/

#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    while(n--)
    {
        int m,i,a[110],count;
        count=0;
        cin>>m;
        for(i=0; i<m; i++)
            cin>>a[i];
        sort(a,a+m);
        for(i=0; i<m; i++)
        {
            if(a[i]!=a[i+1]) count++;
            else if(a[i]==a[i+1]) a[i]=-1;//不能写=0或a[i+1]=0
        }
        cout<<count<<endl;
        for(i=0; i<m; i++)
        {
            if(a[i]!=-1) cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int t,a[100],temp,n,i,count,j;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
                else if(a[i]==a[j])
                {
                    a[j]=0;
                }
            }
        }
        for(i=0; i<n; i++)
        {
            if(a[i]>0)
                count++;
        }

        printf("%d\n",count);
        for(i=0; i<n; i++)
        {
            if(a[i]==0)
                continue;
            else
                printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}

#include<iostream>//最优代码
#include<map>
#include<cstdio>
#include<algorithm>
#include<iterator>
using namespace std;
const int maxn=110;
int tab[maxn];
int main()
{

	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;i++)scanf("%d",&tab[i]);
		sort(tab,tab+n);
		cout<<(n=distance(tab,unique(tab,tab+n)))<<endl;
		copy(tab,tab+n,ostream_iterator<int>(cout," "));cout<<endl;
	}

}
