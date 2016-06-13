#include<stdio.h>
int main()
{
    int m,n,a,b,c,x,y,z,i;
    while(scanf("%d%d",&m,&n)==2)
    {
        i=0;
        if(m==0&&n==0)  break;
        a=m/100;
        b=m/10%10;
        c=m%10;
        x=n/100;
        y=n/10%10;
        z=n%10;
        if((c+z)>=10) {i++;b++;} 
        if((b+y)>=10) {i++;a++;}
        if((a+x)>=10) {i++;}
        printf("%d\n",i);
    }
}
