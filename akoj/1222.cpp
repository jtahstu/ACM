#include<stdio.h>
#include<stdlib.h>
int inc(const void*a,const void*b)
{
    return *(int*)a-*(int*)b;
}

int value(int A[3])
{
    qsort(A,3,4,inc);
    if(A[0]==A[1]&&A[1]==A[2])
        return A[0]*1000000;
    if(A[0]+1==A[1]&&A[1]+1==A[2])
        return A[0]*10000;
    if(A[0]==A[1]||A[1]==A[2])
        return A[1]*100;
    return A[2];
}
int main()
{
    int A[3],B[3];
    while(~scanf("%d%d%d%d%d%d",A,A+1,A+2,B,B+1,B+2))
        puts(value(A)>value(B)?"you win":"you lose");
    return 0;
}
//#include<stdio.h>//一年级某同学错误代码
//#include<ctype.h>
//#include<string.h>
//#include<stdlib.h>
//int ji(int a[])
//{
//    if(a[0]==a[1]&&a[1]==a[2])
//        return 3;
//    if(a[0]+1==a[1]&&a[1]+1==a[2])
//        return 2;
//    if(a[0]==a[1]||a[1]==a[2])
//        return 1;
//    return 0;
//}
//int inc(const void*a,const void*b)
//{
//    return *(int*)a-*(int*)b;
//}
//int A[3],B[3];
//int main()
//{
//    while(~scanf("%d%d%d%d%d%d",&A[0],&A[2],&A[3],&B[0],&B[1],&B[2]))
//    {
//        int i;
//        qsort(A,3,4,inc);
//        qsort(B,3,4,inc);
//        int a=ji(A),b=ji(B);
//        if(a==b)
//        {
//            if(a==1 )            //&&A[1]!=B[1])
//            {
//                if(A[1]>B[1])  //对子判断这里有问题
//                    puts("you win");
//                else
//                    puts("you lose");
//            }
//            else
//                for(i=2; i>=0; i--)
//                {
//                    if(A[i]>B[i])
//                    {
//                        puts("you win");
//                        break;
//                    }
//                    if(A[i]<B[i])
//                    {
//                        puts("you lose");
//                        break;
//                    }
//                }
//        }
//        else
//        {
//            if(a>b)
//                puts("you win");
//            else
//                puts("you lose");
//        }
//
//    }
//    return 0;
//}
