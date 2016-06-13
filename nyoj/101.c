/*两点距离
时间限制：3000 ms  |  内存限制：65535 KB
难度：1

描述
    输入两点坐标（X1,Y1）,（X2,Y2）(0<=x1,x2,y1,y2<=1000),计算并输出两点间的距离。

输入
    第一行输入一个整数n（0<n<=1000）,表示有n组测试数据;
    随后每组占一行，由4个实数组成，分别表示x1,y1,x2,y2,数据之间用空格隔开。
输出
    对于每组输入数据，输出一行，结果保留两位小数。
样例输入

    2
    0 0 0 1
    0 1 1 0

样例输出

    1.00
    1.41
*/

#include <math.h>
#include <stdio.h>
int main()
{
	int n;
    double l,x1,x2,y1,y2;
    freopen("input.txt","r",stdin);
    scanf("%d",&n);
    while(n--)
    {
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    l=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%.2lf\n",l);
	}
    return 0;
}

 
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    /*freopen("1.txt","r",stdin);
    freopen("2.txt","w",stdout);*/

double x1,x2,y1,y2,m;
double a;
cin>>m;
while(m--)
{
    cin>>x1>>y1>>x2>>y2;
    a=sqrt((double)((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
    cout.setf(ios::fixed); 
    cout<<setprecision(2)<<a<<endl;
}
return 0;
}      最优代码