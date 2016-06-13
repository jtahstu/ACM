/*AC ,bar
时间限制：1000 ms  |  内存限制：65535 KB
描述
  zsjing一直很郁闷，为什么别人胡搞一下就可以AC。而他一胡搞就是Wrong呢?囧......

经过多方调查，他终于发现了。原来只要在提交的代码里加上一句"printf("AC\n");"就可轻松解决这个世纪难题了。是不是很厉害？不信的话你可以试试。



   给出一些让你测试的数据。如果，答案是对的你就要输出“AC”（不包括引号），反之输出"NEXT_AC"。

少年测你RP的时候到了。

输入
输入多组数据。
每行给出一行字符：A [] B = C的固定格式。其中A，B均小于64位整数。[]表示四则运算。详细情况看样例。
输入的A，B，C均是正常的整数。数据保证合法！
输出
如果，答案是对的。输出"AC"，反之"NEXT_AC".
样例输入
2 + 4 = 6
4 + 5 = 9
13 * 5 = 5
13 / 2 = 6
样例输出
AC
AC
NEXT_AC
AC
来源
原创
上传者
ACM_钟诗俊*/
#include<stdio.h>
int main()
{
    int a,c,e;
    char b;
    while(scanf("%d %c %d = %d",&a,&b,&c,&e)==4)
    {
        if((b=='+')&&e==a+c)printf("AC\n");
        else if((b=='-')&&e==a-c)printf("AC\n");
        else if((b=='*')&&e==a*c)printf("AC\n");
        else if((b=='/')&&e==a/c)printf("AC\n");
        else  printf("NEXT_AC\n");
    }
    return 0;
}
