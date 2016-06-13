/*#include <stdio.h>
#include <stdlib.h>
//打印菱形
int main()
{
    int i,j,k,n;  //j控制空格的位置，K控制*的位置
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
            printf(" ");
        for(k=n-1-i;k<i+4;k++)
            printf("*");
        printf("\n");
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<i+1;j++)
            printf(" ");
        for(k=i+1;k<6-i;k++)
            printf("*");
        printf("\n");
    }
    return 0;
}*/
#include<stdio.h>
main()
{
    int i,j,n;
    while(scanf("%d",&n)==1){
    for(i=1; i<=n; i++) //先打印上半部分，如果奇数输入的是5，那么上面就会显示3行，以此类推
    {

        for(j=1; j<=n-i; j++) //打印空格
        {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++) //打印星星
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1; i>=1; i--) //n已经明确了，打印下半部分，如果n为5，那么下半部分显示两行，以此类推
    {
        for(j=1; j<=n-i; j++) //打印空格
        {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++) //打印星星
        {
            printf("*");
        }
        printf("\n");

    }}
    return 0;
}

