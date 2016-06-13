#include<iostream>
#include<string>
using namespace std;

const double PI=3.1415;

class test {
public:
    void print(test b) {
        cout<<"原来我是可以输出的\n"<<b.pi()<<endl;
    }
    double pi(){
        double _pi=3.14;//变量要定义为局部变量
        return _pi;
    }
private:

};


int main() {
    test a;
    a.print(a);
    return 0;
}
