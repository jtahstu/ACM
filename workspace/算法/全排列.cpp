#include<iostream>
using namespace std;
void permutation(int n,int *a,int cur)
{
    int i, j;
    if(cur==n)          //�ݹ�߽�
    {
        for(i=0; i<n; i++)
            cout<<a[i];
        cout<<endl;
    }
    else
        for(i=1; i<=n; i++)         //������a[cur]�����������i
        {
            int ok=1;
            for(j=0; j<cur; j++)
                if(a[j]==i)ok=0;                //���i�Ѿ���a[0]~a[cur-1]���ֹ�������ѡ
            if(ok)
            {
                a[cur]=i;
                permutation(n,a,cur+1);         //�ݹ����
            }
        }
}

int main()
{
    int a[100]= {0},n;
    while(cin>>n)                     //����n,���1~n��ȫ����
    {
        permutation(n,a,0);
    }
    return 0;
}
