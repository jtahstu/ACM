/*游程编码

Time Limit:1000MS  Memory Limit:65536K
Total Submit:70 Accepted:25

Description

游程编码又称“运行长度编码”或“行程长度编码”，是一种统计编码，该编码属于无损压缩编码。对于二值图有效。 　　RLE行程长度编码概述　　目前, 压缩技术已经广泛应用于各种软件、声音、影像格式等领域。总的来说, 有两种截然不同的图像格式压缩类型: 有损压缩和无损压缩[1]。有损压缩利用视觉识别的原理可以大大地压缩文件的数据, 但是会影响图像质量。无损压缩的基本原理是相同的颜色信息只需保存一次, 可以删除一些重复数据, 大大减少要在磁盘上保存的图像的容量。无损压缩方法的优点是能够比较好地保存图像的质量, 但是相对有损压缩来说这种方法的压缩率是比较低的。常用的无损压缩算法有 RLE、LZW 等。 RLE 压缩算法的基本原理　　RLE(Run- Length Encoding 行程长度编码)压缩算法是Windows 系统中使用的一种图像文件压缩方法, 其基本思想是: 将一扫描行中颜色值相同的相邻像素用两个字节来表示, 第一个字节是一个计数值, 用于指定像素重复的次数; 第二个字节是具体像素的值[2]。主要通过压缩除掉数据中的冗余字节或字节中的冗余位,从而达到减少文件所占空间的目的。
例如, 有一表示颜色像素值的字符串RRRRRGGBBBBBB,用 RLE 压缩方法压缩后可用 5R2G6B 来代替,显然后者的串长度比前者的串长度小得多。译码时按照与编码时采用的相同规则进行, 还原后得到的数据与压缩前的数据完全相同。因此, RLE 是无损压缩技术。

Input

输入的第一行是一个整数N表示有N组测试数据。
接下来N行，每行都有一个字符串。(由小写字母组成且长度小于1000)

Output

编码后的字符串。

Sample Input

2
aabbbb
iiiiillllovvveeeeeeeaaaccccccccmmmmmmmmmm
Sample Output


2a4b
5i4l1o3v7e3a8c10m*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a;
        cin>>a;
        while(!a.empty())
        {
            int count=1;
            for(int i=1; i<a.size(); i++)
            {
                if(a[i-1]!=a[i])//this
                {

                    break;
                }
                count++;
            }
            cout<<count<<a[0];
            a.erase(a.begin(),a.begin()+count);//缩短串长度，循环往复
        }
        cout<<endl;
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char s[10001];
    int i,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",&s);
        int lenth=strlen(s);
        int count=1;
        for(i=0; i<lenth; i++)
        {
            if(s[i]==s[i+1])
            {
                count++;
            }
            else
            {
                printf("%d%c",count,s[i]);
                count =1;
            }
        }
        printf("\n");
    }
}
