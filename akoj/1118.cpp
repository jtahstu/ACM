/*���ͼ���

Time Limit:3000MS  Memory Limit:65536K
Total Submit:190 Accepted:93
Case Time Limit:1000MS

Description

����������n ���H��n��=1+1/2+1/3+....+1/n��ֵ������3λ��Ч����

Input

����������n (n <10^6)

Output

���H��n��=1+1/2+1/3+....+1/n��ֵ������3λ��Ч����

Sample Input

3
2
1
Sample Output

1.833
1.500
1.000*/

#include<iostream>
//#include<iomanip>
#include<stdio.h>
using namespace std;
main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
        double s=0;
        for(i=1; i<=n; i++)
        {
            s+=1.0/i;
        }
        //cout<<precision(3)<<s<<endl;
        printf("%.3lf\n",s);
    }
    return 0;
}
