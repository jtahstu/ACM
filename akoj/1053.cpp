//#include <iostream>
//#include <vector>
//#include<iterator>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	for (int m; cin >> m;) {
//		vector<int> v;
//		v.push_back(1);
//		for (int i = 2; i <= m; i++) {
//			int sc = 0;
//			for (size_t j = 0; j < v.size(); j++) {
//				int cur = v[j] * i + sc;
//				sc = cur / 10;
//				v[j] = cur % 10;
//			}
//			while (sc > 0) {
//				v.push_back(sc % 10);
//				sc /= 10;
//			}
//		}
//		copy(v.rbegin(), v.rend(), ostream_iterator<int>(cout, ""));
//		cout << endl;
//
//	}
//	return 0;
//}
#include<cstdio>
#include<cstring>
#define N 1200
int A[N];
int main()
{
    int n,i,j,temp,start,sc;
    while(1==scanf("%d",&n))
    {
        memset(A,0,sizeof(A));
        for(A[0]=1,i=1; i<=n; i++)
            for(sc=0,j=0; j<N; j++)
                temp=A[j]*i+sc,
                sc=temp/10,
                A[j]=temp%10;
        for(start=N-1; A[start]==0; --start);
        for(; start>=0; --start)
            printf("%d",A[start]);
        printf("\n");
    }
}
//#include<stdio.h>
//int a[1000001];
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int len=1;
//    a[1]=1;
//    for(int i=2; i<=n; ++i)
//    {
//        int b=0;
//        for(int j=1; j<=len; ++j)
//        {
//            int t=a[j]*i+b;
//            a[j]=t%10;
//            b=t/10;
//            if(j==len&&b!=0)
//                len++;
//        }
//    }
//    for(int i=len; i>0; --i)
//        printf("%d",a[i]);
//    printf("\n");
//}
