/*求和问题
时间限制：1000 ms  |  内存限制：65535 KB
描述
要求很少，给你n个数，求n这个数的和
输入
多组测试数据
每组数据首先输入一个n，结接下来有n个整数，每个数都在int范围内
输出
输出这n个数的和
样例输入
4 1 2 3 4
样例输出
10
上传者
ACM_孙毓阳*/

#include<stdio.h>
main()
{
    int n,a;
   while(scanf("%d",&n)==1)
    {
        double sum=0;
        while(n--)
        {
            scanf("%d",&a);
            sum+=a;
        }
        printf("%.0f\n",sum);
    }
    return 0;
}
