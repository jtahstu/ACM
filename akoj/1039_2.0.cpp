//by jtahstu on 2015/9/15 0:52
#include<iostream>
#include<cmath>
using namespace std;
int c[100+100];//��ֵ
int v[100+100];//���
int dp[100+100];
int main() {
    int n,V;
    cin>>n>>V;
    for(int i=0; i<n; i++)
        cin>>v[i];
    for(int i=0; i<n; i++)
        cin>>c[i];
    for(int i=0; i<n; i++) {
        for(int j=V; j>=v[i]; j--) {
            dp[j]=max(dp[j],dp[j-v[i]]+c[i]);//01����״̬ת�Ʒ���
        }
    }
    cout<<dp[V]<<endl;
    return 0;
}
