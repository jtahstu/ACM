/*两数组最短距离

Time Limit:1000MS  Memory Limit:65536K
Total Submit:19 Accepted:15

Description

已知元素未排序的两个数组x[]和y[]，请写出一个程序算出两个数组彼此之间差的绝对值中最大的一个，这叫做数组的距离。

Input

第一行为两个整数m, n(1≤m, n≤1000)，分别代表数组f[], g[]的长度。
第二行有m个元素，为数组f[]。
第三行有n个元素，为数组g[]。

Output

数组的最短距离

Sample Input


5 5
2 4 5 3 1
8 10 7 6 9
Sample Output

9*/
#include<stdio.h>
int main()
{
    int m,n,a[1001],b[1001],i;
    int min1,max1,min2,max2;
    freopen("input.txt","r",stdin);
    while(scanf("%d%d",&m,&n)!=EOF)
    {

        for(i=0; i<m; i++)
        {
            scanf("%d",&a[i]);
        }
        min1= max1=a[0];
        for(i=0; i<m; i++)
        {
            if(a[i]<min1) min1=a[i];
            if(a[i]>max1) max1=a[i];
        }
        for(i=0; i<n; i++)
        {
            scanf("%d",&b[i]);
        }
        min2= max2=b[0];
        for(i=0; i<n; i++)
        {
            if(b[i]<min2) min2=b[i];
            if(b[i]>max2) max2=b[i];
        }

        if((max1-min2)>(max2-min1))
            printf("%d\n",max1-min2);
        else printf("%d\n",max2-min1);
    }
    return 0;
}
