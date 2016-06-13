#include<iostream>//°ÍÊ²²©ÞÈ
using namespace std;
int main()
{
    int n,m,N;
    cin>>N;
    while(N--)
    {
        cin>>n>>m;
        n%(m+1)==0?cout<<"second"<<endl:cout<<"first"<<endl;
    }
    return 0;
}
