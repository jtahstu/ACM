/*�ַ���ȥ�ض��ַ�

Time Limit:1000MS  Memory Limit:65536K
Total Submit:40 Accepted:10

Description

�����ַ���s���ַ�c��Ҫ��ȥ��s�����е�c�ַ�������������

Input

���������ж��飬ÿ�������ַ���s���ַ�c��

Output

����ÿ������,���ȥ��c�ַ���Ľ����

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


