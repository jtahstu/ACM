 #include<iostream>
 #include<algorithm>
 #include<cstdio>
using namespace std;
int main()
{
    int a1,n,d;
    cin>>a1>>n>>d;
    int sum=a1;
    for(int i=1;i<n;i++)
    {
        sum+=a1+i*d;
    }
    cout<<sum<<endl;
}
