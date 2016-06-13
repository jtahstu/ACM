#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int h1=0,m1=0,s1=0;
        int h2=0,m2=0,s2=0;
        cin>>h1>>m1>>s1>>h2>>m2>>s2;
        cout<<h1+h2+(m1+m2+(s1+s2)/60)/60<<" "
        <<(m1+m2+(s1+s2)/60)%60
        <<" "<<(s1+s2)%60<<endl;
    }
    return 0;
}

/*2
3 5 7 2 4 6
24 21 30 24 38 30*/
