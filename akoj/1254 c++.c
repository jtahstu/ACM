#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{

    int L,S,E;

    char str[50000];

    while(gets(str))       //gets�������У�newline��ʱ������ȡ

    {

        L=strlen(str);     //cstringͷ�ļ��еĺ���

        reverse(str,str+L);//��ת�����ַ�����reverseΪ��׼���еĺ���

        for(S=E=0; E<L; ++E)

            if(str[E]==' ')

            {


                reverse(str+S,str+E);


                S=E+1;

            }

        reverse(str+S,str+E);//reverse(a,b)��ת����Ϊ[a,b),����a������b

        puts(str);

    }

    return 0;
}
