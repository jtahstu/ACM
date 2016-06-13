#include<stdio.h>
#include<algorithm>
using namespace std;
int main() {
    int a[50000];
    int n,m,i,j;
    while(~scanf("%d%d",&n,&m)) {
        for(i=0; i<n+m; i++)
            scanf("%d",&a[i]);
        sort(a,a+n+m);
        printf("%d",a[0]);
        for(i=1; i<n+m; i++) {
            if(a[i]==a[i-1]) continue;
            printf(" %d",a[i]);
        }
        printf("\n");
    }
    return 0;
}
