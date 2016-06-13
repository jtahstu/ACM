另类乘法
时间限制：3000 ms  |  内存限制：65535 KB
难度：1

描述

    Bessie is tired of multiplying pairs of numbers the usual way, so she invented her own style of multiplication. In her style, A*B is equal to the sum of all possible pairwise products between the digits of A and B. For example, the product 123*45 is equal to 1*4 + 1*5 + 2*4 + 2*5 + 3*4 + 3*5 = 54. Given two integers A and B (1 ≤ A, B ≤ 1,000,000,000), determine A*B in Bessie's style of multiplication.

输入
    The first Line of the input is a positive integer T,indicates the number of the test cases;
    In every case,the input is in one line,contains two positive interger A,B
输出
    For every case,output the multiplication in Bessie's style.
样例输入

    1
    123 45

样例输出

    54

#include<stdio.h>
int f(int m)
{
    int s=0;
    while(m)
    {
        s+=m%10;
        m/=10;
    }
    return s;
}
int main()
{
    int n,a,b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        printf("%d\n",f(a)*f(b));
    }
    return 0 ;
}


#include<stdio.h>
char A[20],B[20];
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
	int sum=0;
	scanf("%s%s",A,B);
	for(char* p=A;*p;p++)
		for(char* q=B;*q;q++)
			sum+=(*p-'0')*(*q-'0');
	printf("%d\n",sum);
	}
}        最优代码
