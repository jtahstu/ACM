#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct stu{
    int results;//³É¼¨
    int ranking;//ÅÅÃû
}a[100+5];
bool compare(stu a,stu b)
{
    return a.results>b.results;
}
int main()
{
    int n,m,jtahstu,count;
    while(cin>>n>>m)
    {
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++)
            cin>>a[i].results;
        sort(a,a+n,compare);
        a[0].ranking=1;
        for(int i=1;i<n;i++)
        {
            if(a[i].results==a[i-1].results)
                a[i].ranking=a[i-1].ranking;
            else
                a[i].ranking=i+1;
        }
        while(m--)
        {
            count=0;
            cin>>jtahstu;
            for(int i=0;i<n;i++)
              if(a[i].ranking==jtahstu)
                    count++;
              cout<<count<<endl;
        }
    }
    return 0;
}
