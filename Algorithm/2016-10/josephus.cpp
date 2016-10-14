//约瑟夫问题
//n个人每m个出列,出列顺序
#include<iostream>
using namespace std;

int count=1;

void josephus(int n,int m){
    int p[n+2];
    int t=0;
    for(int i=0;i<n;i++)
        p[i]=i+1;
    cout<<"出列顺序：";
    for(int i=n;i>=1;i--){
        t=(t+m-1)%i;
        cout<<" "<<p[t]<<" ";
        for(int j=t+1;j<=i-1;j++){
//            count++;
            p[j-1]=p[j];
        }
    }
    cout<<endl;
//    cout<<"运算"<<count<<"次"<<endl;
}

int main(){
    josephus(1000,50);
    return 0;
}
