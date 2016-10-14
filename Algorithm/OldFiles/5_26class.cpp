#include<iostream>
#include<string>
using namespace std;
class myfunc{
    const static int x=10,y=20,z=30;
public:
    int cc(int a){
        return a*a;
    }
    string jt(string a){
        return a+a;
    }
    int bb(){
        return x*y*z;
    }
};
