/*队花的烦恼一
时间限制：3000 ms  |  内存限制：65535 KB
难度：1
描述
ACM队的队花C小+经常抱怨：“C语言中的格式输出中有十六、十、八进制输出，然而却没有二进制输出，哎，真遗憾！谁能帮我写一个程序实现输入一个十进制数n，输出它的二进制数呀？”

难道你不想帮帮她吗？^_^

输入
输入有多个数据，数据以EOF结束；每个数据ni（0<=ni<=1000010000）用空格隔开；
（温馨提示:EOF即是一个文件的结束标志；while(scanf("%d",&n)!=EOF){}）
输出
输出有多行，每行对应一个十进制数ni的二进制数；
注意：输出的二进制去掉任何一个多余的0；
样例输入
0 1 2 10
样例输出
0
1
10
1010
来源
原创
上传者
Never*/
#include "iostream"//十进制转换成二进制
using namespace std;
void dec_bin(const int x)
{
    if (x/2>0)
    {
        dec_bin(x/2);
        cout<<x%2;
    }
    else cout<<x;
}
int main(int argc, char const *argv[])
{
    int data=0;
    while(cin>>data)
    {
        dec_bin(data);
        cout<<endl;
    }
    return 0;
}
