#include<iostream>
using namespace std;

int f(string a)
{
    int count=0;
    int b[10001]= {0};
    for(int i=0; i<a.size(); i++)
        for(int j=0; j<a.size(); j++)
        {
            if(a[i]==a[j])
                b[i]++;
        }
    for(int i=0; i<a.size(); i++)
    {
        if(b[i]==1)
        {
            count=i;
            break;
        }
    }
    cout<<count<<endl;
    if(count<a.size())return count;
    else if(count>=a.size()) return false;
}

int main()
{
    string a;
    while(cin>>a)
    {
        if(f(a))cout<<f(a)<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}
