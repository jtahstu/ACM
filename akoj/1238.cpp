//潇潇的烦恼
//
//Time Limit:1000MS  Memory Limit:65536K
//Total Submit:46 Accepted:11
//
//Description
//
//新的一学期开始了，潇潇同学又遇到烦恼了，作为花样美男一枚，总有那么多的女孩喜欢他，于是他会有很多女朋友（不要在意这些）打电话给他，可是他的手机坏了，无法显示来电人姓名
//于是他就请你帮帮他判断一下他最喜欢的人事谁？已知号码中数字8最多的就是他喜欢的！
//
//Input
//
//对于每组数据：
//第一行为 n<=10000
//接下来的n行表示n个人的手机号码（11位）
//
//Output
//
//他最喜欢的那人的手机号码(数据输入保证有唯一解)
//
//Sample Input
//
//
//3
//18365285310
//18777777777
//10000000086
//Sample Output
//
//
//18365285310
//Source
#include "iostream"
using namespace std;

int judge(long long a) {
    int count=0;
    while(a) {
        if(a%10==8)count++;
        a/=10;
    }
    return count;
}

int main(int argc, char const *argv[]) {
    int n,x=0;
    long long m[10001],count[10001]= {0};
    while(cin>>n) {

        for(int i=0; i<n; i++)
            cin>>m[i];

        for(int i=0; i<n; i++)
            count[i]=judge(m[i]);

        int max=count[0];
        for(int i=1; i<n; i++) {
            if(count[i]>max) {
                max=count[i];
                x=i;
            }
        }
        cout<<m[x]<<endl;
    }
    return 0;
}
