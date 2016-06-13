/*小明的烦恼
时间限制：3000 ms  |  内存限制：65535 KB
难度：1
描述
小明最近接到了一个棘手的任务，他们公司有一个电话簿.但是这是一个奇怪的电话簿,因为它不是用数字记录电话号码，而是用数字键上所对应的字母来记录电话号码（2-abc,3-def,4-ghi,5-jkl,6-mno,7-pqrs,8-tuv,9-wxyz）,电话号码只有11位。现在你的任务就是帮小明写一个程序来把这些字母的电话号码转化成数字的电话号码。
输入
第一行输入一个正整数T(0<T<=100)，表示测试数据的组数
每组测试数据只有一行，输入一串字符（字符长度为11）；
输出
每组输出占一行，输出数字的电话号码
样例输入
3
phqghumeayl
nlfdxfircvs
cxggbwkfnqd
样例输出
74744863295
65339347287
29442953673*/

#include<stdio.h>
int main( )
{
    char number[] = "22233344455566677778889999", telep[12];
    int k;
    scanf("%d", &k );
    while( k-- )
    {
        scanf("%s", telep );
        for( int i = 0 ; i < 11 ; i++ )
            printf("%c", number[telep[i]-'a'] );
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n;
    char s[11],i;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",&s);
        for(i=0; i<11; i++)
        {
            if(s[i]=='a'||s[i]=='b'||s[i]=='c')
                printf("2");
            if(s[i]=='d'||s[i]=='e'||s[i]=='f')
                printf("3");
            if(s[i]=='g'||s[i]=='i'||s[i]=='h')
                printf("4");
            if(s[i]=='j'||s[i]=='k'||s[i]=='l')
                printf("5");
            if(s[i]=='m'||s[i]=='n'||s[i]=='o')
                printf("6");
            if(s[i]=='p'||s[i]=='q'||s[i]=='r'||s[i]=='s')
                printf("7");
            if(s[i]=='t'||s[i]=='u'||s[i]=='v')
                printf("8");
            if(s[i]=='w'||s[i]=='x'||s[i]=='y'||s[i]=='z')
                printf("9");
        }
        printf("\n");
    }
    return 0;
}
