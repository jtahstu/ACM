#include<iostream>
#include<string>
using namespace std;

const double PI=3.1415;

class test {
public:
    void print(test b) {
        cout<<"ԭ�����ǿ��������\n"<<b.pi()<<endl;
    }
    double pi(){
        double _pi=3.14;//����Ҫ����Ϊ�ֲ�����
        return _pi;
    }
private:

};


int main() {
    test a;
    a.print(a);
    return 0;
}
