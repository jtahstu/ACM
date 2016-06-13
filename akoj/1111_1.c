

#include "math.h"

#define MAX_N 10000000.00          //�ܹ����������nֵ�������������������������ɽ����Ϊ�����ֵ

#define MAX_MANTISSA   (1e308/MAX_N)    //���β��

struct bigNum

{

    double n1;     //��ʾβ������

     int n2;   //��ʾָ������

  };



void calcFac(struct bigNum *p,int n)

{

     int i;

     double ��MAX_POW10_LOG=(floor(log10(1e308/MAX_N))); //���β���ĳ��ö�������������,

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

     calcFac(&r,n);           //����n�Ľ׳�

     printfResult(&r,buff);   //�����ת��һ���ַ���

        printf("%d!=%s/n",n,buff);

     return 0;

}


