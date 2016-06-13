#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{

    int L,S,E;

    char str[50000];

    while(gets(str))       //gets遇到换行（newline）时结束读取

    {

        L=strlen(str);     //cstring头文件中的函数

        reverse(str,str+L);//反转整个字符串，reverse为标准库中的函数

        for(S=E=0; E<L; ++E)

            if(str[E]==' ')

            {


                reverse(str+S,str+E);


                S=E+1;

            }

        reverse(str+S,str+E);//reverse(a,b)翻转区间为[a,b),包括a不包括b

        puts(str);

    }

    return 0;
}
