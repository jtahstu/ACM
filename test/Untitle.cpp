#include<iostream>
using namespace std;
int main()
{
    int a[10];
    for (int i=0; i<10; i++)
    {
        a[i]=i;
    }
    swap(a[0],a[5]);
    for (int i=0; i<10; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
