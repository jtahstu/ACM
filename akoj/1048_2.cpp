//#include<cstdio>
//#include <iostream>
//using namespace std;
//void swap(int &a,int &b) { //��������Ԫ��
//    int tem;
//    tem = a;
//    a = b;
//    b = tem;
//}
//void cal(int *a,int first,int length) {
//    if(first == length) { //����ݹ鵽���ʱ������󽻻���Ԫ�ؼ�ʱ���һ��Ԫ��ʱ�ʹ�ӡ����
//        for(int i = 0; i <= length; i++)
//            cout<<a[i];
//        cout<<endl;
//    } else {
//        for(int i = first; i <= length; i++) {
//            //ѭ������ʹ�õ�ǰλ�ú�ߵ�ÿһ��Ԫ�ض��͵�ǰ��ȵĵ�һ��Ԫ�ؽ���һ��
//            swap(a[first],a[i]);//ʹ�����һ��Ԫ�ؽ���
//            cal(a,first+1,length);//����ݹ飬��ʱ��ȷ��ǰ�ߵ�Ԫ�أ������������е�ȫ������ʽ��
//            swap(a[first],a[i]);//�ָ�����֮ǰ��״̬
//        }
//    }
//}
//int main() {
//    int a[6] = {1,2,3};
//    cal(a,0,2);
//    return 0;
//}
#include<iostream>
using namespace std;
int a[100],n,s=0;
void output() {
    for(int j=1; j<=n; j++)
        cout<<a[j]<<ends;
    cout<<endl;
}
void  tryArrange(int k) {
    int j;
    if(k>n) {
        output();
    } else
        for(j=k; j<=n; j++) {
            swap(a[k],a[j]);
            tryArrange(k+1);
            swap(a[k],a[j]); //����ʱ���ָ�ԭ��������
        }
}
int main() {
    int i;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i];
    tryArrange(1);
    cout<<"���з�"<<"s="<<s;
}
