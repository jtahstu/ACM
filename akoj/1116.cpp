/*��������
Time Limit:1000MS  Memory Limit:65536K
Total Submit:155 Accepted:106
Description
����һ��������n lt21 ���һ��n�㵹������ ����n=5�������:
#########
 #######
   #####
     ###
       #
Input

����һ��������n
Output
��������
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
