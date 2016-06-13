/*Dinner
时间限制：100 ms  |  内存限制：65535 KB
难度：1

描述
    Little A is one member of ACM team. He had just won the gold in World Final. To celebrate, he decided to invite all to have one meal. As bowl, knife and other tableware is not enough in the kitchen, Little A goes to take backup tableware in warehouse. There are many boxes in warehouse, one box contains only one thing, and each box is marked by the name of things inside it. For example, if "basketball" is written on the box, which means the box contains only basketball. With these marks, Little A wants to find out the tableware easily. So, the problem for you is to help him, find out all the tableware from all boxes in the warehouse.

输入
    There are many test cases. Each case contains one line, and one integer N at the first, N indicates that there are N boxes in the warehouse. Then N strings follow, each string is one name written on the box.
输出
    For each test of the input, output all the name of tableware.
样例输入

    3 basketball fork chopsticks
    2 bowl letter

样例输出

    fork chopsticks
    bowl

提示
    The tableware only contains: bowl, knife, fork and chopsticks.
来源
    辽宁省10年省赛
上传者
    ACM_李如兵*/
/*

#include "iostream"
#include "string.h"
using namespace std;
main(int argc, char const *argv[])
{
    int n,i;
    char a[1001][20];
    while(cin>>n)
    {
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<n; i++)
        {
            if(strcmp(a[i],"fork")==0) cout<<"fork ";
            if(strcmp(a[i],"chopsticks")==0) cout<<"chopsticks ";
            if(strcmp(a[i],"bowl")==0) cout<<"bowl ";
            if(strcmp(a[i],"knife")==0) cout<<"knife ";
        }
        cout<<endl;
    }
    return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    while (cin >> n)
    {
        string str;
        for (i = 0; i < n; i++)
        {
            cin >> str;
            if (str == "bowl" || str == "knife" || str =="fork" || str == "chopsticks")
                cout << str << " ";
        }
        cout << endl;
    }
}
