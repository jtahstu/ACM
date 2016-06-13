#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    int temp,k,i;
    char s[100];
    scanf("%d",&temp);
    getchar();
    while(temp--)
    {
        gets(s);
        k=strlen(s);
        while(k)
        {
            for(i=0; i<k; ++i)
                if(s[i]!=s[k-1-i]||k==1||k%2)
                {
                    cout<<k<<endl;
                    k=0;
                }
            k=k/2;
        }
    }
}

#include<stdio.h>
#include<string.h>
main()
{
	int z,x,q,i;
	char a[101],t[51];
	scanf("%d",&z);
	getchar();
	while(z--)
	{
		gets(a);
		do
		{
			x=strlen(a);
			if(x%2) break;
			for(i=0;i<x/2;i++)
				t[i]=a[x-1-i];
			t[i]='\0';
			a[x/2]='\0';
			q=strcmp(a,t);
		}while(q==0);
		printf("%d\n",x);
	}
}
