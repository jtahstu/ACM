//#include<iostream>这个规律有问题
//using namespace std;
//int main()
//{
//    int n,m,a[100000+5]= {0,1,3,4,6,8,9};
//    //cin>>n;
//    for(int i=7; i<=100; i++)
//      {
//        a[i]=a[i-5]+8;
//         cout<<a[i]<<" "<<a[i]+i<<endl;
//      }
//    while(n--)
//    {
//        cin>>m;
//        cout<<a[m]<<" "<<a[m]+m<<endl;
//    }
//    return 0;
//}
#include<iostream>//正解
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int ncase;
	scanf("%d", &ncase);
	while(ncase--)
	{
		int num;
		scanf("%d", &num);
		int ans = num * ((sqrt(5.0) + 1) / 2); //威佐夫博弈
		printf("%d %d\n", ans, ans + num);
	}
	return 0;
}
