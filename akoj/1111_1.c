

#include "math.h"

#define MAX_N 10000000.00          //能够计算的最大的n值，如果你想计算更大的数对数，可将其改为更大的值

#define MAX_MANTISSA   (1e308/MAX_N)    //最大尾数

struct bigNum

{

    double n1;     //表示尾数部分

     int n2;   //表示指数部分

  };



void calcFac(struct bigNum *p,int n)

{

     int i;

     double 　MAX_POW10_LOG=(floor(log10(1e308/MAX_N))); //最大尾数的常用对数的整数部分,

     double MAX_POW10=    (pow(10.00, MAX_POW10_LOG)); // 10 ^ MAX_POW10_LOG

        p->n1=1;

     p->n2=0;

     for (i=1;i<=n;i++)

     {

          if (p->n1>=MAX_MANTISSA)

          {

               p->n1 /= MAX_POW10;

               p->n2 += MAX_POW10_LOG;

          }

          p->n1 *=(double)i;

     }

}



void printfResult(struct bigNum *p,char buff[])

{

     while (p->n1 >=10.00 )

     {p->n1/=10.00; p->n2++;}

     sprintf(buff,"%.14fe%d",p->n1,p->n2);

}



int main(int argc, char* argv[])

{

     struct bigNum r;

     char buff[32];

     int n;



     printf("n=?");

     scanf("%d",&n);

     calcFac(&r,n);           //计算n的阶乘

     printfResult(&r,buff);   //将结果转化一个字符串

        printf("%d!=%s/n",n,buff);

     return 0;

}


