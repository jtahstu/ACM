#include<iostream>//各位相加
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a,b;
        cin>>a>>b;
        int jt=0;
        for(int i=0;i<a.size();i++)
            jt+=a[i]-'0';
        for(int j=0;j<b.size();j++)
            jt+=b[j]-'0';
        cout<<jt<<endl;
    }
    return 0;
}
