#include<math.h>
#include<stdio.h>
int main()
{

    double l,x1,x2,y1,y2;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    l=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%.3f\n",l);
    return 0;
}
