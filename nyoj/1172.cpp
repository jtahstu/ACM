/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=1172
 * by jtahstu on 2015/2/10 10:00
 */

//#include <iostream>
//using namespace std;
//
//int main() {
//    long long a[500000]={0};
//    int b=2,c=0;
//    a[0]=1,a[1]=7;
//    while(a[b-1]<1e18) {
//        a[b++]=a[c]*10+1;
//        a[b++]=a[c]*10+7;
//        c++;
//    }
//    long long l,r;
//   while(cin>>l>>r)
//    {
//        int d=0,e=0;
//        for(int i=0; i<b; i++) {
//            if(a[i]<=l)d=i;
//            if(a[i]>r) {
//                e=i;
//                break;
//            }
//        }
//        if(a[d]==l||l==0) d--;
//        cout<<e-d-1<<endl;
//    }
//    return 0;
//}

#include<stdio.h>
long long n,m,sum;
void dfs(long long x)
{
    if(x>n) return ;
    if(x>=m&&x<=n) sum++;
    dfs(x*10+7);
    dfs(x*10+1);
}
int main()
{
    while(~scanf("%lld %lld",&m,&n))
    {
        sum=0;
        dfs(1);
        dfs(7);
        printf("%lld\n",sum);
    }
}
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//using namespace std;
//long long a[1000000];
//int c;
//void init()
//{
//    c=0;
//    a[c++]=1;
//    a[c++]=7;
//    int k=0;
//    while(a[c-1]<1e18)
//    {
//        a[c++]=a[k]*10+1;
//        a[c++]=a[k]*10+7;
//        k++;
//    }
//}
//int main()
//{
//    init();
//    long long l,r;
//    while(cin>>l>>r)
//    {
//        int L=0,R=0;
//        for(int i=0; i<c; i++)
//        {
//            if(a[i]<=l) L=i;
//            if(a[i]>r)
//            {
//                R=i;
//                break;
//            }
//        }
//        if(a[L]==l||l==0) L--;
//        printf("%d\n",R-L-1);
//    }
//}
