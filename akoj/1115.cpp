/*���ŵ��

Time Limit:1000MS  Memory Limit:65536K
Total Submit:269 Accepted:117

Description

�ഫ���Ų��ǹ��ˣ��Ӳ�ֱ������Լ��ľ��ӵĸ�����ֻҪ��ʿ���Ⱥ�������һ�ţ�����һ�ţ�����һ�ţ��任���Σ�����ÿ��ֻ��һ�۶������β������֪���������ˣ����������Ǹ�����,a,b,c��ʾÿ�ֶ�����β��������(a < 3, b < 5,c < 7)�������������Сֵ���򱨸��޽⣩,��֪������������100��������10��

Input

�����������Ǹ�����,a,b,c��ʾÿ�ֶ�����β��������(a < 3, b < 5,c < 7)

Output

�������������Сֵ���򱨸��޽⣩

Sample Input

2 1 6
2 1 3
Sample Output

41
No answer*/

#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
    int a,b,c,i;
    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        bool flag=0;
        for(i=10;i<=100;i++)
        {
            if(i%3==a&&i%5==b&&i%7==c)
            {   flag=1;
                cout<<i<<endl;}
        }
        if(flag==0) cout<<"No answer"<<endl;
    }
    return 0;
}
