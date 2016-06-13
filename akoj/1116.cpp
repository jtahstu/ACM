/*倒三角形
Time Limit:1000MS  Memory Limit:65536K
Total Submit:155 Accepted:106
Description
输入一个正整数n lt21 输出一个n层倒三角形 例如n=5输出如下:
#########
 #######
   #####
     ###
       #
Input

输入一个正整数n
Output
倒三角形
Sample Input
5
Sample Output
#########
 #######
  #####
   ###
    #
#include<stdio.h>
int main()
{
    int n,i,j;
    while(scanf("%d",&n)!=-1)
    {for (i=0;i<n;i++)
    {
        for (j=1;j<=2*n-i-1;j++)
        {
            if (i>=j)
                printf(" ");
                else
                printf("#");
        }
        printf("\n");
    }}
    return 0;
}*/

#include<iostream>
#include<stdio.h>
using namespace std;
main()
{
    int n,i,j;
   while(scanf("%d",&n)==1)
   {
     for (i=0;i<n;i++)
    {
        for (j=1;j<=2*n-i-1;j++)
        {
            if (i>=j)
               cout<<" ";
                else
                cout<<"#";
        }
       cout<<'\n';
    }
   }
    return 0;
}
