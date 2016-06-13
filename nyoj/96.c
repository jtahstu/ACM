/*
n-1位数
时间限制：3000 ms  |  内存限制：65535 KB
难度：1

描述

    已知w是一个大于10但不大于1000000的无符号整数，若w是n(n≥2)位的整数，则求出w的后n-1位的数。

输入
    第一行为M，表示测试数据组数。
    接下来M行，每行包含一个测试数据。
输出
    输出M行，每行为对应行的n-1位数（忽略前缀0）。如果除了最高位外，其余位都为0，则输出0。
样例输入

    4
    1023
    5923
    923
    1000

样例输出

    23
    923
    23
    0
 */
#include<stdio.h>
int main()
{
    int num;
    int M;
    scanf("%d",&num);
    while(num--)
    {
        scanf("%d",&M);
        int i=10;
        while(M/i>=10)
        {
            i=i*10;
        }
        printf( "%d\n" ,M%i);
    }
}//较简单的做法

#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int m,n,len;
    char buf[10];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",buf);
        len = strlen(buf);
        sscanf(buf,"%d",&m);
        printf("%d\n",m%(int)pow(10,(len-1)));
    }
    return 0;
}//较难的的方法


/*
#include<cstdio>
int main()
{
    int n,m;
    scanf("%d",&n);
    while(n--)
    {
        scanf("\n%*c%d",&m);
        printf("%d\n",m);
    }
}          最优代码
 */
/*来自百度百科（http://baike.baidu.com/view/1364018.htm?fr=aladdin）
sscanf

sscanf() - 从一个字符串中读进与指定格式相符的数据。
swscanf()- 用于处理宽字符字符串，和sscanf功能相同

目录
    1名称
    2头文件
    3返回值
    4说明
    5支持集合操作
    6例子

1.名称编辑
    函数原型:
    int sscanf( const char *, const char *, ...);
    int sscanf(const char *buffer,const char *format,[argument ]...);
    buffer存储的数据
    format格式控制字符串
    argument 选择性设定字符串
    sscanf会从buffer里读进数据，依照format的格式将数据写入到argument里。
2.头文件编辑
    #include<stdio.h>
3.返回值编辑
    成功则返回参数数目，失败则返回-1，错误原因存于errno中。
4.说明编辑
    sscanf与scanf类似，都是用于输入的，只是后者以键盘(stdin)为输入源，前者以固定字符串为输入源。
    第二个参数可以是一个或多个 {%[*] [width] [{h | I | I64 | L}]type | ' ' | '\t' | '\n' | 非%符号}
    注：
        1、 * 亦可用于格式中, (即 %*d 和 %*s) 加了星号 (*) 表示跳过此数据不读入. (也就是不把此数据读入参数中)
        2、{a|b|c}表示a,b,c中选一，[d],表示可以有d也可以没有d。
        3、width表示读取宽度。
        4、{h | l | I64 | L}:参数的size,通常h表示单字节size，I表示2字节 size,L表示4字节size(double例外),l64表示8字节size。
        5、type :这就很多了，就是%s,%d之类。
        6、特别的：%*[width] [{h | l | I64 | L}]type 表示满足该条件的被过滤掉，不会向目标参数中写入值
            失败返回0 ，否则返回格式化的参数个数
5.支持集合操作编辑
    %[a-z] 表示匹配a到z中任意字符，贪婪性(尽可能多的匹配)
    %[aB'] 匹配a、B、'中一员，贪婪性
    %[^a] 匹配非a的任意字符，并且停止读入，贪婪性
6.例子编辑
    1. 常见用法。
        charbuf[512];
        sscanf("123456","%s",buf);//此处buf是数组名，它的意思是将123456以%s的形式存入buf中！
        printf("%s\n",buf);
        结果为：123456
    2. 取指定长度的字符串。如在下例中，取最大长度为4字节的字符串。
        sscanf("123456","%4s",buf);
        printf("%s\n",buf);
        结果为：1234
    3. 取到指定字符为止的字符串。如在下例中，取遇到空格为止字符串。
        sscanf("123456abcdedf","%[^]",buf);
        printf("%s\n",buf);
        结果为：123456
    4. 取仅包含指定字符集的字符串。如在下例中，取仅包含1到9和小写字母的字符串。
        sscanf("123456abcdedfBCDEF","%[1-9a-z]",buf);
        printf("%s\n",buf);
        结果为：123456abcdedf
        当输入： 　sscanf("123456abcdedfBCDEF","%[1-9A-Z]",buf);
        printf("%s\n",buf);
        结果为：123456BCDEF
    5. 取到指定字符集为止的字符串。如在下例中，取遇到大写字母为止的字符串。
        sscanf("123456abcdedfBCDEF","%[^A-Z]",buf);
        printf("%s\n",buf);
        结果为：123456abcdedf
    6、给定一个字符串iios/12DDWDFF@122，获取 / 和 @ 之间的字符串，
        先将 "iios/"过滤掉，再将非'@'的一串内容送到buf中
        sscanf("iios/12DDWDFF@122","%*[^/]/%[^@]",buf);
        printf("%s\n",buf);
        结果为：12DDWDFF
    7、给定一个字符串“hello, world”，仅保留world。
        （注意：“，”之后有一空格，%s遇空格停止，加*则是忽略第一个读到的字符串）
        sscanf(“hello,world”,"%*s%s",buf);
        printf("%s\n",buf);
        结果为：world
        *s表示第一个匹配到的%s被过滤掉，即“hello,”被过滤了
        如果没有空格则结果为NULL。

    http://www.cnblogs.com/kex1n/archive/2011/06/09/2076501.html
    博客的sscanf详解
 */
