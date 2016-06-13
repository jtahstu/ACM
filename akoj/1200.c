#include<stdio.h>
int main()
{
    int x,y,z,a,b,c,n=0,i;
    while(scanf("%d",&n)==1)
    {
            while(n--)
            {
                scanf("%d%d%d",&x,&y,&z);
                if(0<x&&x<200001&&0<y&&y<200001&&0<z&&z<200001)
                {
                    if((x+y-z)%2==0&&(x-y+z)%2==0&&(-x+y+z)%2==0)
                        printf("%d %d %d\n",(x+y-z)/2,(x-y+z)/2,(-x+y+z)/2);
                    else
                        printf("Impossible\n");
                }
            }
    }
}
