/*
小学生算术
时间限制：3000 ms  |  内存限制：65535 KB
难度：1

描述
    很多小学生在学习加法时，发现“进位”特别容易出错。你的任务是计算两个三位数在相加时需要多少次进位。你编制的程序应当可以连续处理多组数据，直到读到两个0（这是输入结束标记）。

输入
    输入两个正整数m,n.(m,n,都是三位数)
输出
    输出m,n,相加时需要进位多少次。
样例输入

    123 456
    555 555
    123 594
    0 0

样例输出

    0
    3
    1
 */
#include <stdio.h>
int main()
{
    int m,n,i,j;
    int a[3],b[3];
    while(scanf("%d%d",&m,&n),m!=0||n!=0)
    {
        a[0]=m/100;
        a[1]=(m-100*a[0])/10;
        a[2]=m%10;
        b[0]=n/100;
        b[1]=(n-100*b[0])/10;
        b[2]=n%10;
        j=0;
        for(i=2; i>=0; i--)
        {
            if(a[i]+b[i]>=10)
            {
                j++;
                a[i-1]+=1;//要考虑进位问题
            }
        }
        printf("%d\n",j);
    }
    return 0;
}

#include <stdio.h>
int d(int a,int b,int c)
{
    return (a%10+b%10+c)/10 + (((a/10)&&(b/10))?d(a/10,b/10,(a%10+b%10+c)/10):0);
}
int main()
{
    int m,n;
    while(scanf("%d%d",&m,&n),m||n)
    {
        printf("%d\n",d(m,n,0));
    }
}
//水过，有兴趣是否可以联想超前进位加法器



#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,n,m,i;
	for(;;)
	{
		scanf("%d%d",&n,&m);
		if(n==0&&m==0)
			return 0;
		else
		{
			i=0;
			a=n/100;b=n%100/10;c=n%10;
			d=m/100;e=m%100/10;f=m%10;
			if(c+f>=10)
			{i+=1;b+=1;}
			if(b+e>=10)
			{i+=1;a+=1;}
			if(a+d>=10)
			{i+=1;}
			printf("%d\n",i);
		}
	}
  return 0;
}  //最优代码

