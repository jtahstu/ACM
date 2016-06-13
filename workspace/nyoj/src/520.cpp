/**
 * Project Name: nyoj_2.0 
 * File Name: 520.cpp
 * Created on: 2015年5月9日 下午2:58:09
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int a[1000005];
//int icount = 1;
//int mainhahads()
//{
//    for(int i = 2; i <= 1000000; i++)//筛法求素数，然后给素数赋值，即第几个
//    {
//        if(!a[i])
//        {
//            a[i] = icount++;
//            for(int j = i * 2; j <= 1000000; j += i)
//                a[j] = a[i];
//        }
//    }
//    int num;
//    while(scanf("%d", &num) == 1)
//    {
//        for(int i = num; i >= 1; i--)
//        {
//            if(num % i == 0 && a[i] != -1)
//            {
//                printf("%d\n", a[i]);
//                break;
//            }
//        }
//    }
//}
//
//#include<iostream>//TLE
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//bool prime520(int a) {
//	for (int i = 2; i * i <= a; i++)
//		if (a % i == 0)
//			return false;
//	return true;
//}
//int main2() {
//	int count = 1, a[80000] = { 0 }, n;
//	for (int i = 2; i <= 1000000; i++)
//		if (prime520(i))
//			a[count++] = i;
//	while (cin >> n) {
//		if (n == 1)
//			cout << "0" << endl;
//		else if (prime520(n)) {
//			for (int j = 1; j < count; j++)
//				if (a[j] == n) {
//					cout << j << endl;
//					break;
//				}
//		} else {
//			bool flag = false;
//			for (int i = n / 2; i > 0; i--)
//				if (!flag) {
//					if (n % i == 0 && prime520(i)) {
//						for (int j = 1; j < count; j++)
//							if (a[j] == i) {
//								flag = true;
//								cout << j << endl;
//								break;
//							}
//
//					}
//				}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	cout<<"hello jt"<<endl;
//	return 0;
//}

