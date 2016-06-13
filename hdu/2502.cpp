#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
     int n,t;
     scanf("%d",&t);
     while(t--)
     {
         freopen("A.in", "r", stdin);
    freopen("A.out", "w", stdout);
          scanf("%d",&n);
          printf("%d\n",(n+1)*(1<<(n-2)));
     }
     return 0;
}
