//Լɪ������
//n����ÿm������,����˳��
#include<iostream>
using namespace std;

int count=1;

void josephus(int n,int m){
    int p[n+2];
    int t=0;
    for(int i=0;i<n;i++)
        p[i]=i+1;
    cout<<"����˳��";
    for(int i=n;i>=1;i--){
        t=(t+m-1)%i;
        cout<<" "<<p[t]<<" ";
        for(int j=t+1;j<=i-1;j++){
//            count++;
            p[j-1]=p[j];
        }
    }
    cout<<endl;
//    cout<<"����"<<count<<"��"<<endl;
}

int main(){
    josephus(1000,50);
    return 0;
}
