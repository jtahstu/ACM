/*奇数个数
时间限制：1000 ms  |  内存限制：65535 KB
难度：1
描述
  现在让你任意输入10个整数，任务是：统计出其中奇数的个数。
输入
多组数据，以EOF结束。任意输入10个整数（int型范围内）
输出
输出其中奇数的个数
样例输入
1 2 3 4 5 6 7 8 9 10
样例输出
5
来源
2012年C语言上机题*/

#include "iostream"
#include "cstdio"
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c,d,e,f,g,h,i,j;
    while(~scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j))
    {
        int count=0;
      if(a%2==1)count++;
      if(b%2==1)count++;
      if(c%2==1)count++;
      if(d%2==1)count++;
      if(e%2==1)count++;
      if(f%2==1)count++;
      if(g%2==1)count++;
      if(h%2==1)count++;
      if(i%2==1)count++;
      if(j%2==1)count++;
      cout<<count<<endl;
    }
    return 0;
}
 
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  int a[10];
  int b;
  while(scanf("%d",&a[0]) != EOF){
    b = 0;
    for(int i = 1;i < 10;++i)
      scanf("%d",&a[i]);
    for(int i = 0;i < 10;++i)
     if(a[i] % 2 == 1)
      b++;
    cout<<b<<endl;
  }
  return 0;
}        