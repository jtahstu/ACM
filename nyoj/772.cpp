#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main() {
    int n;
    scanf("%d",&n);
    getchar();
    while(n--) {
        char ans[100];
        gets(ans);
        int len=strlen(ans);
        int i,j,k;
        for(i=0; i<len; i++) {
            for(j=i+1; j<len; j++) {
                if(ans[j]==' ')
                    break;
            }
            if(j-i>3) {
                if(ans[i]>'Z')
                    ans[i]-=32;
                printf("%c",ans[i]);
            } else if(j-i==3) {
                string cmp="";
                for(k=i; k<3+i; k++) {
                    if(ans[k]<'a')
                        ans[k]+=32;
                    cmp+=ans[k];
                }
                if(cmp!="for"&&cmp!="and"&&cmp!="the") {
                    if(cmp[0]>'Z')
                        cmp[0]-=32;
                    printf("%c",cmp[0]);
                }
            }
            i=j;
        }
        printf("\n");
    }
    return 0;
}
