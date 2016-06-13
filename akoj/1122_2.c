#include<stdio.h>
int main()
{
    int i,j,k;
    int a[10],d,fg,n=0,t,m=0;
    for(i=123; i<=987/3; i++)
    {
        j=2*i;
        k=3*i;
        a[0]=i/100;
        a[1]=i/10%10;
        a[2]=i%10;
        a[3]=j/100;
        a[4]=j/10%10;
        a[5]=j%10;
        a[6]=k/100;
        a[7]=k/10%10;
        a[8]=k%10;
        for(d=0; d<8; d++)
            for(fg=d+1; fg<9; fg++)
                if(a[d]==a[fg])
                    n++;
        if(n==0)
        {
            for(t=0; t<9; t++)
                if(a[t]==0)
                    m=1;
            if(m!=1)
                printf("%d %d %d\n",i,j,k);
            else
                m=0;
        }
        else
            n=0;
    }
}
/*192 384 576
219 438 657
273 546 819
327 654 981
