#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
const int maxn = 1000+100;
char str1[maxn],str2[maxn];
int maxlen[maxn][maxn];
int main() {
    int n;
    cin >> n;
    while(n-- ) {
        memset(maxlen,0,sizeof(maxlen));
        scanf("%s",str1);
        int i,j;
        int len = strlen(str1);
        for(i = 0 ; i < len ; ++i) {
            str2[i] = str1[len-1 -i];//str2为str1的逆序串
        }
        for(i = 1 ; i <= len ; i++) { //求公共子序列的最大长度
            for(j = 1 ; j <= len ; j++) {
                if(str1[i-1] == str2[j-1]) {
                    maxlen[i][j] = maxlen[i-1][j-1] + 1;
                } else {
                    maxlen[i][j] = max(maxlen[i-1][j],maxlen[i][j-1]);
                }
            }
        }
        cout<<len-maxlen[len][len]<<endl;
    }
    return 0;
}
