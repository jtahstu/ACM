#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
        string a;cin>>a;
        int count=a.size();
        if(a.size()%2==1){cout<<a.size()<<endl;break;}
        bool flag=true;
        while(count%2!=1){
            for(int i=0,j=count-1; i<count/2; i++,j--){
                if(a[i]==a[j])continue;
                else flag=false;
            }
            if(flag)count=count/2;
            else{cout<<count<<endl;break;}
        }
        if(flag)cout<<count<<endl;
    }
    return 0;
}
