#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        int count=0;
        for(int i=0;i<a.size()-b.size()+1;i++)
        {
            if(b[0]==a[i]&&b[1]==a[i+1]&&b[2]==a[i+2])
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}

