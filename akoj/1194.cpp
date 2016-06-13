#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int N,A,B,T[105];
        cin>>N>>A>>B;
        for(int i=1;i<N;i++)
            cin>>T[i];
        int sum=0;
        if(A>B)swap(A,B);
        for(int i=A;i<B;i++)
            sum+=T[i];
        cout<<sum<<endl;
    }
    return 0;
}
