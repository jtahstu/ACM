/*车牌号
时间限制：3000 ms  |  内存限制：65535 KB
难度：1
描述
茵茵很喜欢研究车牌号码，从车牌号码上可以看出号码注册的早晚，据研究发现，车牌号码是按字典序发放的，现在她收集了很多车牌号码，请你设计程序帮她判断注册较早的号码。车牌号码由5个字母或数字组成
输入
第一行是n，代表有n组数据，第二行是m，以下m行是m个车牌号码
其中n<100,m<1000
输出
输出注册较早的车牌号
样例输入
1
4
AA100
aa100
0o2r4
ye2er
样例输出
0o2r4
来源
[侯飒飒]原创
上传者
侯飒飒*/

#include "iostream"
#include "string.h"
#include "cstdio"
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    while(n--)
    {
        int m,i;
        char a[6]="zzzzz",str[6];//注意初始化
        cin>>m;
        getchar();
        for(i=0; i<m; i++)
        {
            scanf("%s",str);
            if(strcmp(a,str)>0)
                strcpy(a,str);
        }
        printf("%s\n",a);
    }
    return 0;
}

#include<stdio.h>//最优codes
#include<string.h>
main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int m;
        char a[6],c[6];
        scanf("%d",&m);
        getchar();
        gets(c);
        while(--m)
        {
            gets(a);
            if(strcmp(a,c)<0)strcpy(c,a);
        }
        puts(c);
    }
}
