#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str[105][105];

int main(){
    int i = 0,j,k,t;
    int m = 0, max=-1, len;
    while(gets(str[m])){        /*读取句子，并记录句子数目和句子最长的长度*/
        len = strlen(str[m]);
        if(max<len) max = len;
        ++m;
    }

    for(i = 0; i<max; i++){
        for(j = m-1; j>=0; j--){
            if(i<strlen(str[j]))
                printf("%c", str[j][i]);
            else    printf(" ");
        }
        printf("\n");
    }
    return 0;
}