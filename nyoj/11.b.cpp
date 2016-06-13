#include<stdio.h>
 bool f(int a)
 {
     if(a==1)return false;
     int i=1;
     for(i++; i*i<=a; i++)
         if(!(a%i))
             return false;
     return true;
 }
 int main()
 {
     int a,b,cnt=0;
     int s[100001];
     for(int i=1;i<100001;i++)
     {
         if(f(i)) s[i]=1;
         else s[i]=0;
     }
     while(~scanf("%d%d",&a,&b))
     {
         printf("Case %%%d:",++cnt);
         int count=0;
         for(int i=a; i<=b; i++)
             if(f(i)==1)
                 count++;
         printf("%d\n",count);
     }
 }
