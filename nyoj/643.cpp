#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main() {
    string a[26]= {"2","22","222","3","33","333","4","44","444",
                   "5","55","555","6","66","666","7","77","777","7777",
                   "8","88","888","9","99","999","9999"
                  };//初始化手机键盘
    string s;
    while(getline(cin,s)!=NULL) {
        if(!isdigit(s[0])) { //不是数字
            if(s[0]==' ') cout<<"0";//处理输出中的空格
            else cout<<a[s[0]-'A'];
            for(int i=1; i!=s.size(); ++i) {
                if(s[i]==' ') cout<<" 0";
                else cout<<" "<<a[s[i]-'A'];
            }
            cout<<endl;
        } else { //是数字
            string b[1000];//储存截取字符串
            int k=0;
            for(int i=0; i!=s.size(); ++i) {
                if(s[i]==' '||i==s.size()-1) {
                    if(i==s.size()-1) b[k]+=s[i];//处理最后一个字符
                    if(b[k]=="0") cout<<" ";
                    else for(int j=0; j<26; j++) {
                            if(b[k]==a[j]) {
                                cout<<(char) ('A'+j);
                                break;
                            }
                        }
                    ++k;
                } else b[k]+=s[i];
            }
            cout<<endl;
        }
    }
    return 0;
}


#include <stdio.h>
#include <string.h>

const int sz[26] = {2,22,222,3,33,333,4,44,444,5,55,555,6,66,666,7,77,777,7777,8,88,888,9,99,999,9999};
void WordToNumber(char s[]) {
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == ' ') {
            printf("0 ");
        } else {
            printf("%d ",sz[s[i] - 'A']);
        }

    }
    printf("\n");
}
void NumberToWord(char s[]) {
    for(int i = 0; s[i] != '\0'; ++i) {
        if(s[i] == '0') {
            printf(" ");
            continue;
        }
        int k = 0;
        while(s[i] != ' '&&s[i] != '\0') {
            k = k*10+s[i]-'0';
            ++i;
        }
        for(int j = 0; j < 26; j++) {
            if(k == sz[j])
                printf("%c",'A'+j);
        }
    }
    printf("\n");
}
int main(int argc, char const *argv[]) {
    char s[1010];
    while(gets(s) != NULL) {
        if('0'<=s[0]&&s[0]<='9')
            NumberToWord(s);
        else
            WordToNumber(s);
    }
    return 0;
}
