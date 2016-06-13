/*简单统计

Time Limit:1000MS  Memory Limit:65536K
Total Submit:165 Accepted:71

Description

输入一个正整数n

然后跟随是n个正整数 a1,a2....an
最后一个是正整数m
请统计出ai中小于m的元素个数

Input

输入一个正整数n

然后跟随是n个正整数 a1,a2....an
最后一个是正整数m

Output

请统计出ai中小于m的元素个数

Sample Input
5
1 2 3 4 5
8
6
1 2 3 4 5 9
4
Sample Output
5
3*/

#include "iostream"
//#include<stdio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,b[10001],k,l,temp,i,m,s;
    //cin>>n;
    while(cin>>n)
   // while(scanf("%d",&n)==1)
    {
        for (i = 0; i < n; ++i)
        {
            cin>>b[i];
        }
        cin>>m;
       /* for(k=0; k<n; k++)
        {
            for(l=0; l<n-k-1; l++)
                if(b[l]>b[l+1])
                {
                    temp=b[l];
                    b[l]=b[l+1];
                    b[l+1]=temp;
                }
        }*/
        s=0;
        for(i=0; i<n; i++)
        {
            if(b[i]<m) s++;
        }
        cout<<s<<endl;
    }
    return 0;
}
