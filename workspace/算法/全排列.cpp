#include<iostream>
using namespace std;
void permutation(int n,int *a,int cur)
{
    int i, j;
    if(cur==n)          //递归边界
    {
        for(i=0; i<n; i++)
            cout<<a[i];
        cout<<endl;
    }
    else
        for(i=1; i<=n; i++)         //尝试在a[cur]中填各种整数i
        {
            int ok=1;
            for(j=0; j<cur; j++)
                if(a[j]==i)ok=0;                //如果i已经在a[0]~a[cur-1]出现过，则不再选
            if(ok)
            {
                a[cur]=i;
                permutation(n,a,cur+1);         //递归调用
            }
        }
}

int main()
{
    int a[100]= {0},n;
    while(cin>>n)                     //输入n,输出1~n的全排列
    {
        permutation(n,a,0);
    }
    return 0;
}
