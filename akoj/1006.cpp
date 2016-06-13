#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[6];
    for(int i=0;i<5;i++)
        cin>>a[i];
    sort(a,a+5);
   cout<<a[0]<<' '<<a[4]<<endl;
    return 0;
}
