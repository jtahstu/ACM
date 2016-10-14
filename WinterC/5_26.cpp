#include<iostream>
using namespace std;
#define jtahstu 19950906
int main()
{
    #ifdef jtahstu
   cout<<"define jtahstu"<<endl;
    #endif // jtahstu

    #ifndef jt
    cout<<"not define jt"<<endl;
    #endif // jt
    return 0;
}
