//by jtahstu on 2015/9/15 0:24
#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
#include<cctype>
#include<cmath>
using namespace std;
char s[100000+100];
int c[100000+100];//价值
int v[100000+100];//体积
int dp[100000+100];
int main() {
    while(gets(s)) {
        int j=0;
        for(int i=0; i<strlen(s); i++) {//将字符串读入数组中
            int sum=0;
            while(isdigit(s[i])) {
                sum=sum*10+s[i]-'0';
                i++;
            }
            c[j]=sum;
            v[j]=sum;
            j++;
        }
        int Sum;
        scanf("%d",&Sum);
        memset(dp,0,sizeof(dp));
        bool T=false;
        for(int i=0; i<j; i++) {
            for(int k=Sum; k>=v[i]; k--) {
                dp[k]=max(dp[k],dp[k-v[i]]+c[i]);//01背包问题，这里的体积等于价值
                if(dp[k]==Sum) {
                    T=true;
                    break;
                }
            }
            if(T)
                break;
        }
        printf(T?"Yes\n":"No\n");
        getchar();
    }
    return 0;
}

//#include <stdio.h>
//#include <string.h>
//#define max(a,b) a>b?a:b
//char str[100000];
//int c[100000];
//int v[100000];
//int dp[100000];
//int main()
//{
//	while(gets(str))
//	{
//		int i,j=0,sum;
//		int len=strlen(str);
//		for(i=0;i<len;i++)
//		{
//			sum=0;
//			while(str[i]>='0'&&str[i]<='9')
//			{
//				sum=sum+str[i]-'0';
//				if(str[i+1]>='0'&&str[i+1]<='9'&&i+1<len)
//					sum=sum*10;
//				i++;
//			}
//			c[j]=sum;v[j]=sum;
//			j++;
//		}
//		int m,k,T=0;
//		scanf("%d",&m);
//		memset(dp,0,sizeof(dp));
//		for(i=0;i<j;i++)
//		{
//			for(k=m;k>=c[i];k--)
//			{
//				dp[k]=max(dp[k],dp[k-c[i]]+v[i]);
//				if(dp[k]==m)
//				{
//					T=1;
//					break;
//				}
//			}
//			if(T==1)
//				break;
//		}
//		if(T==1)
//			printf("Yes\n");
//		else
//			printf("No\n");
//		getchar();
//	}
//	return 0;
//}


#include<stdio.h>
#include<string.h>
int main() {
    char s[100001];
    int m;
    while(gets(s)!=NULL) {
        int x[100009];
        memset(x,0,sizeof(x));
        scanf("%d",&m);
        getchar();
        int len=strlen(s);
        int cot=0;
        for(int i=0; i<len; i++) {
            int t=0;
            if(s[i]!=' ') {
                while(s[i]!=' '&&i<len) {
                    t=t*10+s[i]-'0';
                    i++;
                }
                for(int j=m-t+1; j>=0; j--) {
                    if(x[j]&&(j+t<=100000)) {
                        x[j+t]=1;
                        if(x[m]) {
                            goto end;
                        }
                    }
                }
                x[t]=1;
            }
        }
end:
        if(x[m])
            printf("Yes\n");
        else
            printf("No\n");
        memset(s,0,sizeof(s));
    }
    return 0;
}

