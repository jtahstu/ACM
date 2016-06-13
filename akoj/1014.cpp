/*��°ͺղ���

Time Limit:3000MS  Memory Limit:655366K
Total Submit:116 Accepted:55

Description

�����ĸ�°ͺղ�����Գ���Ϊ���κ�һ����С��6��ż��һ�����Բ�����������ĺ͡���6=3+3,8=5+3�ȣ���������ǽ�һ������6��ż��n���������ӽ�������p,q,����p+q=n.

Input

�����������������ݡ�ÿ�����ݰ���1��ż��n��n��6��1000000֮������߽磩��

Output

����ÿ��������ݣ������������p,q(p<=q)����p+q=n��

Sample Input


6
8
10
200000
Sample Output


3 3
3 5
5 5
99871 100129
Source

ahstu@ICPC03*/

#include<iostream>
#include<limits.h>
using namespace std;
int judge(int n)
{
    for(int i=2; i*i<=n; i++)
        if(n%i==0)return 0;
    return 1;
}
int main()
{
    int n;
    while(cin>>n)
    {
        int x=0,y=0;
        bool flag=false;
        for(int i=n/2; i>2; i--)
        {
            if(judge(i)&&judge(n-i))
                {
                    x=i,y=n-i;flag=true;break;
                }
        }
        if(flag)cout<<x<<" "<<y<<endl;
    }
    return 0;
}

