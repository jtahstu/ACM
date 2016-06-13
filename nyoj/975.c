#include <string.h>
#include <stdio.h>
int main()
{
    char s[100];
    int i,a,b,t=0;
    while(2==scanf("%d%d",&a,&b))
    {
        int x=0,y=0;
        for(i=a; i<=b; i++)
        {
            sprintf(s,"%d",i);
            if(strstr(s,"1")&&strstr(s,"2")&&strstr(s,"5"))
                x++;
            if(strstr(s,"521"))
                y++;
        }
        t++;
        printf("Case %d:",t);
        printf("%d %d\n",x,y);
    }
    return 0;
}