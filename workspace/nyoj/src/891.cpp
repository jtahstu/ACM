/**
 * Project Name: nyoj 
 * File Name: 891.cpp
 * Created on: 2015年4月24日 下午9:01:20
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//int main() {					//思路有错误
//	int n, s[300] = { 0 }, count;
//	while (cin >> n) {
//		count = 0;
//		int min = 200, max = -1;
//		memset(s, 0, sizeof(s));
//		for (int i = 0; i < n; i++) {
//			int a, b;
//			cin >> a >> b;
//			for (int j = a * 2; j <= b * 2; j++)
//				s[j] = 1;
//			if (a < min)
//				min = a;
//			if (b > max)
//				max = b;
//		}
//		for (int i = min * 2; i <= max * 2; i++)
//			if (s[i] == 0)
//				count++;
//		cout << count + 1 << endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//using namespace std;
//struct f {
//	int start;
//	int end;
//} a[100];
//int cmp(f a, f b) {
//	return a.end < b.end;
//}
//int main891() {
//	int s, sum;
//	while (cin >> s) {
//		sum = 0;
//		for (int i = 0; i < s; i++)
//			cin >> a[i].start >> a[i].end;
//		sort(a, a + s, cmp);
//		for (int i = 0, j = 0; i < s; i++) {
//			if (a[i].start > a[j].end) {
//				sum++;
//				j = i;
//			}
//		}
//		printf("%d\n", sum + 1);
//	}
//	return 0;
//}



//#include<algorithm>
//#include<iostream>
//using namespace std;
//struct Node
//{
//    int x,y;
//}a[108];
//bool cmp(Node a,Node b)
//{
//    return a.x<b.x;
//}
//int main()
//{
//    int n,m;
//    while(cin>>n)
//    {
//        for(int i=0;i<n;i++)cin>>a[i].x>>a[i].y;
//        sort(a,a+n,cmp);
//        int sum = 1;
//        for(int i=1;i<n;i++)
//        {
//            if(a[i].x>a[i-1].y)sum++;
//            else
//                a[i].y = min(a[i].y,a[i-1].y);
//        }
//        cout<<sum<<endl;
//    }
//	return 0;
//}

