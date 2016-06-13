#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<cstring>
#include<cstdio>
using namespace std; //这题用sort可以过，但是你既用sort，又用cin,不超时就见鬼了
int main() {
    int n,k,m,a[100005];
    while(scanf("%d%d",&n,&k)!=EOF) {
        memset(a,0,sizeof(a));
        for(int i=0; i<n; i++) {
            scanf("%d",&m);
            a[m]++;
        }
        int count=0,sum=0;
        for(int i=0; i<2001; i++)
            if(a[i]!=0) {
                if(count==k)break;
                else if(count+a[i]<=k) {
                    sum+=i*a[i];
                    count+=a[i];
                } else if(count+a[i]>k) {
                    sum+=i*(k-count);
                    break;
                }
            }
        printf("%d\n",sum);
    }
    return 0;
}
