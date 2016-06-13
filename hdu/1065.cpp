#include <iostream>
#include <cmath>
#include<cstdio>
using namespace std;
#define PI 3.1415926
int main(void)
{
    int n;
    scanf("%d", &n);
    double j;
    for (int i = 1; i < n + 1; ++i)
    {
        double x, y, ss = 0;
        int s = 0;
        scanf("%lf%lf", &x, &y);
        double s1 = PI * (x*x+y*y)/2.0;
        int year = ceil(s1/50);//功 能: 返回大于或者等于指定表达式的最小整数
        printf("Property %d: This property will begin eroding in year %d.\n",i,year);
    }
    printf("END OF OUTPUT.\n");
    return 0;
}
