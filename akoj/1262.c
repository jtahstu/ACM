#include<stdio.h>
int main()
{
    char a[10],b[10];
    while(scanf("%s%s",a,b)!=EOF)
    {
        if(a[0]=='R'&&b[0]=='P')printf("lose\n");
        if(a[0]=='R'&&b[0]=='S')printf("win\n");

        if(a[0]=='P'&&b[0]=='R')printf("win\n");
        if(a[0]=='P'&&b[0]=='S')printf("lose\n");

        if(a[0]=='S'&&b[0]=='R')printf("lose\n");
        if(a[0]=='S'&&b[0]=='P')printf("win\n");
        
        if (a[0]==b[0])printf("draw\n");  
    }
    return 0;
}

//P 布
//R 石头
//S 剪刀