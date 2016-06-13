#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    int x1,y1,x2,y2,x3,y3;
    double a,b,c;
    double p,*s=NULL;
    int count=0,i;
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    while(x1 || x2 || x3 || y1 || y2 || y3)
    {
        count++;
        if(count%5==1)
        s=(double *)realloc(s,(count/5+1)*5*sizeof(double));
        a=sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
        b=sqrt( (x3-x2)*(x3-x2) + (y3-y2)*(y3-y2) );
        c=sqrt( (x1-x3)*(x1-x3) + (y1-y3)*(y1-y3) );
        p=(a+b+c)/2;
        *(s+count-1)=sqrt( p*(p-a)*(p-b)*(p-c) );
        scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    }
    for(i=0; i<count; i++)
        printf("%.1f\n",*(s+i));
    free(s);
}
