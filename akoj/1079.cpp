#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    int i;
    while(cin>>a)
    {
        for(i=1; i<=a.size(); i++)
        {
            if(a.size()%i!=0)continue;
            bool flag=true;
            for(int j=i; j<a.size(); j++)
            {
                if(a[j]!=a[j%i])
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
//AC
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int cycle; //����
    while(cin>>s)
    {
        int len=s.length();
        for(cycle=1; cycle<=len; cycle++) //ö������
        {
            if(len%cycle!=0) continue;    //�������������´�ö��
            int ok=1;			  //���
            for(int j=cycle; j<len; j++)
            {
                if(s[j]!=s[j%cycle])
                {
                    ok=0;    //�ж�
                    break;
                }
            }
            if(ok)
            {
                cout<<cycle<<endl;
                break;
            }
        }
    }
    return 0;
}

//#include <stdio.h>
//#include <string.h>
//#define maxn 80 + 20
//
//int main()
//{
//    char s[maxn];
//    int T = 0,flag = 1;
//    scanf("%s", s);
//    int len = strlen(s);
//    for(int T = 1; T <= len; T++)
//    {
//        for(int j = T; j <= len; j++) //�ڶ������ڵ��ַ������ַ�ʱ��s[T]
//        {
//            if((len % T != 0) || (s[j] != s[j%T])) break;
//
//                printf("%d\n", T);
//                return 0;
//        }
//    }
//    printf("%d\n", 1);
//    return 0;
//}
