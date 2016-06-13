/*小明的调查统计
时间限制：1000 ms  |  内存限制：65535 KB
难度：1
描述
最近小明他们社团对理工全校每个班级进行了一次社会调查，他们对每个人的体重进行了统计。现在小明的任务是记录每个班级最重的人的体重和最轻人的体重，并求每个班级的体重差（班级最重人体重-班级最轻人体重）。

输入
只有一组测试数据
第一行输入一个正整数T(0<T<=100)，表示学校的班级数
随后有T行数据，每行第一个数N（0<N<=100）表示这个班级有N个同学。接下来输入N个正整数，表示这个班级每个同学的体重。
输出
每个班级输出占一行，输出这个班级的体重差；
样例输入
3
10 56 89 45 40 60 25 57 65 69 68
5 58 56 69 57 64
6 64 59 57 86 95 45
样例输出
64
13
50
来源
[路过这]原创
上传者
路过这*/

#include "iostream"
#include "algorithm"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--)
	{
		int m,a[101],i;
		cin>>m;
		for(i=0;i<m;i++)
			cin>>a[i];
		sort(a,a+m);
		cout<<a[m-1]-a[0]<<endl;
	}
	return 0;
}

#include <cstdio>//最优codes
int main()
{
    int n,T;
    scanf("%d",&T);
    while(T--)
    {
        int Max=1<<31,Min=9999999,x;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&x);
            if(x>Max)
                Max=x;
            if(x<Min)
                Min=x;
        }
        printf("%d\n",Max-Min);
    }
    return 0;
}
