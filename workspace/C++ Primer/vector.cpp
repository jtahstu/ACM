#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    vector<int> tt;
    int b[5]={5,4,3,2,1};
    for (int i=0;i<5;i++)
     tt.push_back(i);

    int a[5]={11,22,33,44,55};
    vector<int> aa(a,a+5);    cout<<aa.size()<<endl;

    vector<int>::iterator it=aa.begin();
    cout<<*it<<endl;

    if(aa==tt)
        cout<<"�ҿ�����������Ȼ���"<<endl;
    else
        cout<<"�������ˣ�ԭ������"<<endl;
    swap(aa,tt);
    sort(tt.begin(),tt.end());

    vector<int>::iterator found=find(aa.begin(),aa.end(),3);
    cout<<"�ҵ��� ���ҵ���"<<*found<<endl;

    vector<string> str;
    vector<double> dou;

}
