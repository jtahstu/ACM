#include<iostream>
using namespace std;
int main(){
    int a[5]={0,1,2,3,4},x;
    try{
        exception e;
        cout<<x<<endl;
        for(int i=0;i<5;i++)
            cout<<"我到底输不输出啊,看来我还是输出了"<<endl;
        throw e;
    }catch(exception e){
        cout<<"我捕捉到了异常"<<endl;
    }    cout<<"  我就看着"<<endl;
   return 0;
}
