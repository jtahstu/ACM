#include<iostream>
using namespace std;
int main() {
    int n,m,p;
    while(cin>>n>>m>>p) {
        int count=1;
        for(int i=0; i<p; i++) {
            count*=m;//������б��������ɣ����������ݱȽ���
            count%=7;
        }
        if((n+count)%7)
            cout<<(n+count)%7<<endl;
        else
            cout<<"7"<<endl;
    }
    return 0;
}

