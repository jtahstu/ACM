#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   for(int i=0;i<1000;i++){
    cout<<i*i<<" ";
    if(i%10==0)
        cout<<endl;
   }

    return 0;
}
