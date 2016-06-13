//3623966123

#include "iostream"
#include "stdio.h"
#include "algorithm"
using namespace std;
int main(int argc, char const *argv[])
{
    int n,b[1001],c[1001],d[1001],l,k,temp;
    char a[1001];
    cin>>n;
    while(n--)
    {
        int i,m=0;
        getchar();
        for(i=1; i<n; i++)
        {
            scanf("%s ",a);
            cin>>b[i]>>c[i]>>d[i];
            if((b[i]>b[m]) || (b[i]==b[m]&&c[i]>c[m]) || (b[i]==b[m]&&c[i]==c[m]&&d[i]>c[m]))
                m=i;
        }
        cout<<a[m];
    }
    return 0;
}
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct
//{
//    char name[30];
//    int year,moth,day;
//} POINT;
//void input(POINT*p)
//{
//    scanf("%s%d%d%d",p->name,&p->year,&p->moth,&p->day);
//}
//void output(POINT*p)
//{
//    printf("%s\n",p->name);
//}
//int inc(const void*p,const void*q)
//{
//    POINT *pp=(POINT*)p;
//    POINT *qq=(POINT*)q;
//    if (pp->year-qq->year!=0)
//        return (pp->year-qq->year>0)?1:-1;
//    else if (pp->moth-qq->moth!=0)
//        return (pp->moth-qq->moth>0)?1:-1;
//    else if(pp->day-qq->day!=0)
//        return  (pp->day-qq->day>0)?1:-1;
//}
//int main (void)
//{
//    int n;
//    scanf("%d",&n);
//
//    POINT q[n];
//    int i=0;
//    for(i=0; i<n; i++)
//        input(&q[i]);
//    qsort(q,n,sizeof(POINT),inc);
//    for(i=0; i<n; i++)
//        output(&q[i]);
//
//    return EXIT_SUCCESS;
//}
