#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        int a[105]={0},j=0;
        for(int i=0;i<s.size();i+=2){
            a[j++]=(int)(s[i]-'0');
        }
        sort(a,a+j);
        cout<<a[0];
        for(int i=1;i<j;i++)
            cout<<"+"<<a[i];
        cout<<endl;
    }
    return 0;
}
