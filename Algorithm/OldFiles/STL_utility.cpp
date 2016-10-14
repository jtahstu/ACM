//判断两个值是否相等
#include<utility>
#include<iostream>
using namespace std;
typedef pair<int,int>POINT;
int main()
{
    POINT p1,p2;
    cin>>p1.first>>p1.second>>p2.first>>p2.second;
    if(p1==p2)
        cout<<"Equal!"<<endl;
    else cout<<"Not Equal"<<endl;
    return 0;
}
#C++标准模板库提供三种顺序容器：vector、list和deque。
#Vector类和deque类都是基于数组的，list类实现链表数据结构
