#include<iostream>
#include<cmath>
using namespace std;
const int N=505;
long long dp[N][N],a[N][N];
int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        for(int j=0; j<=i; j++) {
            cin>>a[i][j];
            if(i==n-1)
                dp[i][j]=a[i][j];
        }
    for(int i=n-2; i>=0; i--)
        for(int j=0; j<=i; j++)
            dp[i][j]=max(dp[i+1][j],dp[i+1][j+1])+a[i][j];
    cout<<dp[0][0]<<endl;
    return 0;
}
