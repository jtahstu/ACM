#include<iostream>
#include<cstring>
using namespace std;
bool judge(int n)
{
    for(int i=2; i*i<=n; i++)
        if(n%i==0)
            return false;
    return true;

}
int main()
{
    int n,m,a[1300],x=2,b[1300],j;
    memset(a,0,sizeof(a));
    a[0]=2;
    a[1]=3;
    for(int i=4; i<=10000; i++)  //�������
        if(judge(i))
            a[x++]=i;
    cin>>n;
    while(n--)
    {
        int max=-1;
        memset(b,0,sizeof(b));
        cin>>m;
        for(int i=2; i<=m; i++) //1~m�����ж�
        {
            j=0;
            int tmp=i; //��ʱ�洢
            while(tmp!=1)
            {
                while(tmp%a[j]==0)//�ֽ�������Ȼ�󱣴浽b������
                {
                    b[j]++;
                    tmp/=a[j];
                    if(j>max)max=j;//һ��ʼû�ж����浽�ĸ�λ��
                }//���º�����i<j���ʱ�����ֺ��沿������û����������
                j++;
            }
        }
        for(int i=0; i<=max; i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
    return 0;
}

