#include<iostream>
using namespace std;
int main(){
    int a[5]={0,1,2,3,4},x;
    try{
        exception e;
        cout<<x<<endl;
        for(int i=0;i<5;i++)
            cout<<"�ҵ����䲻�����,�����һ��������"<<endl;
        throw e;
    }catch(exception e){
        cout<<"�Ҳ�׽�����쳣"<<endl;
    }    cout<<"  �ҾͿ���"<<endl;
   return 0;
}
