/*����˳��

Time Limit:1000MS  Memory Limit:65536K
Total Submit:5 Accepted:3

Description

���ڸ��㲻���ߵ�������A,B,C�����꣬����һ�������һ�������Σ����������ж�A��B��C��˳ʱ������Ļ�����ʱ������ģ�

Input

ÿ����һ��������ݣ���6������x1,y1,x2,y2,x3,y3�ֱ��ʾA,B,C������ĺ������ꡣ������ֵ����0��10000֮�䣩
����0 0 0 0 0 0��ʾ�������
�������ݲ�����10000��

Output

�������������˳ʱ������ģ������1����ʱ����������0

Sample Input
0 0 1 1 1 3
0 1 1 0 0 0
0 0 0 0 0 0

�������
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
