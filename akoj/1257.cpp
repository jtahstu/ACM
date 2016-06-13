#include<iostream>
#include<cmath>
using namespace std;
const double PI=3.141592654;
int main()
{
    double n;
    while(cin>>n)
    {
        if(n==0)cout<<"1"<<endl;
      else cout<<(int)((0.5*log(PI*2*n)+n*log(n)-n)/log(10))+1<<endl;
    }
    return 0;
}

