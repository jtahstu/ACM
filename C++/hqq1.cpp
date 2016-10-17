#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main() {
    int flag=1;
    double total;
    int n,i=0,x,sum;
    int a[15];
    scanf("%d",&n);
    while(n--) {
        flag=1;
        total=0;
        sum=0;
        x=0;
        for(i=0; i<12; i++) {
            scanf("%d",&a[i]);
        }
        for(i=0; i<12; i++) {
            sum+=300-a[i];
            if(sum>=100)
                total+=sum/100*100;
            if(sum<0) {
                printf("%d\n",-(i+1));
                flag=0;
                break;
            }
            sum%=100;
        }
        if(flag!=0) {
            x=round(sum+total*1.2);
            printf("%d\n",x);
        }
    }
    return 0;
}
