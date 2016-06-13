#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        while(n--)
        {
            int y,m,d;
            cin>>y>>m>>d;
            if(y==2014&&m==4&&d==20)cout<<"nice day"<<endl;
            else if(y<2014||(y==2014&&m<4)||(y==2014&&m==4&&d<20))
                cout<<"before"<<endl;
            else cout<<"after"<<endl;
        }
    }
    return 0;
}
