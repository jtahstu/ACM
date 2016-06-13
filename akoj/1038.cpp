/*������������

Time Limit:1000MS  Memory Limit:65536K
Total Submit:62 Accepted:39

Description

һЩ��ͨ�������ںܶ��������ǲ�������������4��г�������������Ժܶ�ط���û�д�4�����֣�������У�������¹��ż�û��4����������13�������������д����Ż�������Ҳ�ǲ����������֣�13����Զ�ţ�¥�㲻���13��ȵȡ�

����ĳЩ����Ϊ0�ǲ����������֣������������Ժ�������У���¼���ݶ��ڲ���ʹ�ú���0����Ȼ����

���Ǽ�¼����������1,2,3,4,5,6,7,8,9,11,12,13,14,15,16,17,18,19,21,22.......n�����ڲ�ʹ������0�����Ǽ�¼����������ʵ��ʹ�õ���Ȼ����һ���Ĳ�������ǵ�11��ʵ�ʾ��ǵ�10������21���ǵ�19�������Դ����ơ�����

���ڸ���һ����n,���ж��ڲ�����0�������еģ�����ڣ���n�ǵڼ����������ڣ����Unlucky��

Input

�ж����������<5000
ÿ������ռһ�У�ÿ����һ����n��0<=n<=1000000����
��EOF��β

Output

ÿ�����ռһ�У����n�ڲ���0�������У�����ǵڼ�����������ڲ���0�������У����Unlucky��

Sample Input


11
9
21
10
Sample Output


10
9
19
Unlucky
Hint

105,10523�ȵȣ����Ǻ���0��

Source*/

#include<iostream>
using namespace std;
int res;
int sum(int x,int y)
{
    int i,k=1;
    for(i=0; i<y; i++)
        k*=9;
    return k*x;
}
bool flag(int y)
{
    int x,z=0;
    while(y)
    {
        x=y%10;
        y=y/10;
        if(x==0)
            return false;
        res+=sum(x,z);
        z++;
    }
    return true;
}
int main()
{
    int n;
    while(cin>>n)
    {
        res=0;
        if(n==0||!flag(n))
            cout<<"Unlucky"<<endl;
        else
            cout<<res<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int judge(int n)//�ж��������Ƿ����0
{
    if (n == 0) return true;
    while (n)
    {
        if (n % 10 == 0)
            return 1;
        n /= 10;
    }
    return 0;
}
int main(void)
{
    int n, i, s;
    while (cin>>n)
    {
        if (judge(n))
           cout<<"Unlucky"<<endl;
        else
        {
            i = 1;
            s = 0;
            while (n > 0)//��10����ת��Ϊ9����
            {
                s += n % 10 * i;
                n /= 10;
                i *= 9;
            }
            cout<<s<<endl;
        }
    }
    return 0;
}
#include<iostream>
using namespace std;
#define N 1000001
int a[N];
int main()
{
    int n,i,count=1;
    for(i=0; i<N; i++)
    {
        int j=i,bz=1;
        while(true)
        {
            if(j%10==0)
            {
                bz=0;
                a[i]=-1;
                break;
            }
            j/=10;
            if(j==0) break;
        }
        if(bz) a[i]=count++;//�������Լӣ�YES!
    }
    while(cin>>n)
    {
        if(a[n]==-1)cout<<"Unlucky"<<endl;
        else cout<<a[n]<<endl;
    }
    return 0;
}
