//#include<cstdio>
//#include <iostream>
//using namespace std;
//void swap(int &a,int &b) { //交换连个元素
//    int tem;
//    tem = a;
//    a = b;
//    b = tem;
//}
//void cal(int *a,int first,int length) {
//    if(first == length) { //如果递归到深层时，到最后交换的元素即时最后一个元素时就打印出来
//        for(int i = 0; i <= length; i++)
//            cout<<a[i];
//        cout<<endl;
//    } else {
//        for(int i = first; i <= length; i++) {
//            //循环遍历使得当前位置后边的每一个元素都和当前深度的第一个元素交换一次
//            swap(a[first],a[i]);//使得与第一个元素交换
//            cal(a,first+1,length);//深入递归，此时已确定前边的元素，处理后边子序列的全排列形式。
//            swap(a[first],a[i]);//恢复交换之前的状态
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
            swap(a[k],a[j]); //回溯时，恢复原来的排列
        }
}
int main() {
    int i;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i];
    tryArrange(1);
    cout<<"换行符"<<"s="<<s;
}
