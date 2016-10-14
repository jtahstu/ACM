#include<iostream>
using namespace std;

int j(int a[],int i){
    int m;
    if(i==0)
        return a[0];
    else{
        m=j(a,i-1);
        return m>a[i]?a[i]:m;
    }
}

int main(){
    int a[]={7,4,5,2,3,1,6,0};
    int minNum=j(a,8);
    cout<<minNum<<endl;
    return 0;
}
