/*斐波那契数列
时间限制：1000 ms  |  内存限制：65535 KB
描述
斐波那契数列为：1,2,3,5,8,13....，常规递推公式为f(n)=f(n-1)+f(n-2);
输入
输入一个n（1<=n<=200），为多组输出数据;
输出
输出第n个斐波那契数；
样例输入
1
2
4
样例输出
1
2
5
来源
经典水题
上传者
ACM_胡皓*/

#include "iostream"
#include "cstdio"
using namespace std;
/*int f(int n)
{
	if(n==1)return 1;
	else if(n==2)return 2;
	else return f(n-1)+f(n-2);
}
int main(int argc, char const *argv[])
{
	int n;
	while(scanf("%d",&n)==1&&1<=n&&n<=200)
	{
		cout<<f(n)<<endl;
	}
	return 0;
}*/
int main()
{
    int n;
   double a[201]={0};
    a[0]=1,a[1]=2;
    for(int i=2;i<200;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    while(cin>>n)
    {
        cout<<a[n-1]<<endl;
    }
    return 0;
}
