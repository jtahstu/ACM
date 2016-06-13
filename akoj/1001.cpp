#include <iostream>
using namespace std;
main()
{
    int a,b;
    while(1)
    {
        cin>>a>>b;
        if(a==0&&b==0)break;
       cout<<(a+b)*(b-a+1)/2<<endl;
    }
    return 0;
}
