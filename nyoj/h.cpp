/*just for you
时间限制：1000 ms  |  内存限制：65535 KB
描述
今天tlp和ly想去看电影了到了电影院才发现买票的人特别多 ，ly不想让tlp等着急了，就先带她去逛商场了，tlp是个特别爱花钱的人，哎，女人嘛，你懂得，逛完商场就差不多到了看定影的时间了，然后他们去看了黄渤演的《心花路放》，片子里的黄渤演的真心很搞笑，看完了电影，ly又带着tlp去唱歌（听说ly唱歌很好听），到了KTV，ly就和tlp开心的唱了起来，但是ly总是记不住歌词，说了这么多，其实我还没告诉你题目，现在，给你一段歌词（英文的）求它是由几个单词组成的



输入
只有一组测试数据，即一篇文章
输出
输出单词数量
样例输入
tong tong ai chi xiang
样例输出
5
上传者
ACM_刘炀*/

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[10001];
    int count=0,i,len;
    gets(a);
    len=strlen(a);
    for(i=0;i<len-1;i++)
    {
        if(a[i]==' ')
        {
            count++;
        }
    }
    cout<<count+1<<endl;
    return 0;
}
