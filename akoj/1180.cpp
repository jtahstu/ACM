/*三点顺序

Time Limit:1000MS  Memory Limit:65536K
Total Submit:5 Accepted:3

Description

现在给你不共线的三个点A,B,C的坐标，它们一定能组成一个三角形，现在让你判断A，B，C是顺时针给出的还是逆时针给出的？

Input

每行是一组测试数据，有6个整数x1,y1,x2,y2,x3,y3分别表示A,B,C三个点的横纵坐标。（坐标值都在0到10000之间）
输入0 0 0 0 0 0表示输入结束
测试数据不超过10000组

Output

如果这三个点是顺时针给出的，请输出1，逆时针给出则输出0

Sample Input
0 0 1 1 1 3
0 1 1 0 0 0
0 0 0 0 0 0

样例输出
Sample Output
0
1*/
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3;
    while(scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
        if(x1==0&&y1==0&&x2==0&&y2==0&x3==0&&y3==0) break;
            if((x1==x2&&x3<x1)||(y1==y2&&y3>y1)) cout<<"0"<<endl;
            else cout<<"1"<<endl;
            continue;

            double a=0,b=0;
         a=(y1-y2)/(x1-x2),b=(x1*y2-x2*y1)/(x1-x2);
        if((a*x3+b)<y3) cout<<"0"<<endl;
        else cout<<"1"<<endl;
        continue;
    }
    return 0;
}

#include <cstdio>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    while(scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3),x1||x2||x3||y1||y2||y3)
        printf((x2-x1)*(y3-y1)-(y2-y1)*(x3-x1)>0?"0\n":"1\n");
    // 2-0 * 5-1 - 3-1 * 4-0 
    return 0;
}
