/*韩信点兵

Time Limit:1000MS  Memory Limit:65536K
Total Submit:269 Accepted:117

Description

相传韩信才智过人，从不直接清点自己的军队的个数，只要让士兵先后以三人一排，五人一排，七人一排，变换队形，而他每次只掠一眼队伍的排尾人数就知道总人数了，输入三个非负整数,a,b,c表示每种队形排尾的人数，(a < 3, b < 5,c < 7)输出总人数的最小值（或报告无解）,已知总人数不超过100，不少于10人

Input

，输入三个非负整数,a,b,c表示每种队形排尾的人数，(a < 3, b < 5,c < 7)

Output

输出总人数的最小值（或报告无解）

Sample Input

2 1 6
2 1 3
Sample Output

41
No answer*/

#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
    int a,b,c,i;
    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        bool flag=0;
        for(i=10;i<=100;i++)
        {
            if(i%3==a&&i%5==b&&i%7==c)
            {   flag=1;
                cout<<i<<endl;}
        }
        if(flag==0) cout<<"No answer"<<endl;
    }
    return 0;
}
