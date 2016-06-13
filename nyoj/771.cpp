#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
using namespace std;
int main() {
    char n[10001];
    while(~scanf("%s",n)) {
        getchar();
        char a[10001],s[10001];
        int j=0;
        gets(s);
        int len=strlen(s);
        for(int i=0; i<len; i++) {
            if((s[i]+(n[j]-'0'))<=122)
                a[i]=(char)(s[i]+(n[j]-'0'));
            else
                a[i]=(char)((s[i]+(n[j]-'0'))%122+31);
            j++;
            if(j==strlen(n))
                j=0;
        }
        a[len]='\0';
        printf("%s\n",a);
    }
    return 0;
}
