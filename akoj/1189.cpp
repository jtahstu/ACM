/*字符串去特定字符

Time Limit:1000MS  Memory Limit:65536K
Total Submit:40 Accepted:10

Description

输入字符串s和字符c，要求去掉s中所有的c字符，并输出结果。

Input

测试数据有多组，每组输入字符串s和字符c。

Output

对于每组输入,输出去除c字符后的结果。

Sample Input


heallo
a
Sample Output


hello
*/
#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    char s[1001],b[1001],c;
    int len,i;
    while(scanf("%s",s)!=EOF)
    {
        getchar();
        len=strlen(s);
        scanf("%c",&c);
        for(i=0; i<len; i++)
        {
            if(s[i]==c) b[i]=0;
            else b[i]=1;
        }
        for(i=0; i<len; i++)
        {
            if(b[i]==1) cout<<s[i];
        }
        cout<<'\n';
    }
    return 0;
}


