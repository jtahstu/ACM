///**
// * Project Name: nyoj
// * File Name: 1185.cpp
// * Created on: 2016年3月9日 下午7:13:33
// * Author: jtahstu
// * Email: root@jtahstu.com
// * Copyright (c) 2016, www.jtahstu.com , All Rights Reserved.
// */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<cstdlib>
//#include<cctype>
//#include<algorithm>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<map>
//#include<set>
//using namespace std;
//typedef struct S {
//	int value;
//	int id;
//} S;
//bool cmp(S a, S b) {
//	return a.value < b.value;
//}
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		cin >> n;
//		S a[10000 + 1000];
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &a[i].value);
//			a[i].id = i;
//		}
//		sort(a, a + n, cmp);
////		for (int i = 0; i < n; i++) {
////			cout << a[i].value << "," << a[i].id << endl;
////		}
//		int cc, c, l, r;
//		cin >> cc;
//		while (cc--) {
//			cin >> c >> l >> r;
//			int max, min;
//			if (c == 1 || c == 3) {
//				for (int j = 0; j < n; j++) {
//					if (a[j].id >= l - 1 && a[j].id <= r - 1) { //找到就退出
//						min = a[j].value;
//						break;
//					}
//				}
//			}
//			if (c == 2 || c == 3) {
//				for (int j = n - 1; j >= 0; j--) {
//					if (a[j].id >= l - 1 && a[j].id <= r - 1) {
//						max = a[j].value;
//						break;
//					}
//
//				}
//			}
//			int out = (c == 1) ? min : (c == 2 ? max : min + max);
//			cout << out << endl;
//		}
//	}
//	return 0;
//}

///**
// * Project Name: nyoj
// * File Name: 1185.cpp
// * Created on: 2016年3月9日 下午7:13:33
// * Author: jtahstu
// * Email: root@jtahstu.com
// * Copyright (c) 2016, www.jtahstu.com , All Rights Reserved.
// */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<cstdlib>
//#include<cctype>
//#include<algorithm>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<map>
//#include<set>
//using namespace std;
//typedef struct S {
//	int value;
//	int id;
//} S;
//bool cmp(S a, S b) {
//	return a.value < b.value;
//}
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int n;
//		scanf("%d", &n);
//		S a[10000 + 1000];
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &a[i].value);
//			a[i].id = i;
//		}
//		sort(a, a + n, cmp);
////		for (int i = 0; i < n; i++) {
////			cout << a[i].value << "," << a[i].id << endl;
////		}
//		int cc, c, l, r;
//		scanf("%d", &cc);
//		while (cc--) {
//			scanf("%d%d%d", &c, &l, &r);
////			cin >> c >> l >> r;
//			int max = -1, min = 10000000;
//			if (c == 1 || c == 3) {
//				for (int j = 0; j < n; j++) {
//					if (a[j].id >= l - 1 && a[j].id <= r - 1
//							&& a[j].value < min) {
//						min = a[j].value;
//						break;
//					}
//				}
//			}
//			if (c == 2 || c == 3) {
//				for (int j = 0; j < n; j++) {
//					if (a[j].id >= l - 1 && a[j].id <= r - 1
//							&& a[j].value > max) {
//						max = a[j].value;
//						break;
//					}
//				}
//			}
//			int out = (c == 1) ? min : (c == 2 ? max : min + max);
//			printf("%d\n", out);
////			cout << out << endl;
//		}
//	}
//	return 0;
//}
