/**
 * Project Name: Smartoj 
 * File Name: P1066.cpp
 * Created on: 2015年4月21日 下午8:43:25
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<stdio.h>
#include<string.h>
int s[12]={0,512,256,128,64,32,16,8,4,2,1};
int n,m,front,note,tt,xx;
int a[1025][11],b[1025][11];
int k[1025];
int main1066()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    xx=0;
    for(int i=n;i>=1;i--)
        xx=xx+s[10-i+1];
    front=0;
    note=1;
    memset(b,0,sizeof(b));
    memset(k,0,sizeof(k));
    while(note>front)
    {
       front++;
       for(int i=1;i<=m;i++)
       {
            note++;
            tt=0;
            for(int j=1;j<=n;j++)
            {
                if(a[i][j]==1) b[note][j]=1;
                if(a[i][j]==0) b[note][j]=b[front][j];
                if(a[i][j]==-1) b[note][j]=0;
                if(b[note][j]==1) tt+=s[10-j+1];
            }
            if(k[tt]==0)
            {
                k[tt]=1;
                b[note][0]=b[front][0]+1;
                if(tt==xx)
                {
                    printf("%d\n",b[note][0]);
                    return 0;
                }
            }
            else note--;
       }
    }
    printf("The patient will be dead.\n");
    return 0;
}



