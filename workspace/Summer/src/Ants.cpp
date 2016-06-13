/**
 * Project Name: Summer
 * File Name: Ants.cpp
 * Created on: 2015年7月13日 下午11:31:29
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
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
//int main() {
//	int L, n;
//	long long max0 = 0, min0 = 0, x;
//	for (scanf("%d%d", &L, &n); n > 0; n--) {
//		scanf("%lld", &x);
//		max0 = max(max0, max(x, L - x)); //一直求最大
//		min0 = max(min0, min(x, L - x)); //为了让所有蚂蚁都落下杆子，这里要取较大的
//	}
//	printf("%lld %lld\n", min0, max0);
//	return 0;
//}
//Ants（POJ No.1852）
//n 只蚂蚁以每秒1cm 的速度在长为Lcm 的竿子上爬行。当蚂蚁爬到竿子的端点时就会掉落。
//由于竿子太细，两只蚂蚁相遇时，它们不能交错通过，只能各自反向爬回去。对于每只蚂蚁，
//我们知道它距离竿子左端的距离xi，但不知道它当前的朝向。请计算所有蚂蚁落下竿子所需
//的最短时间和最长时间。
//竿子和蚂蚁的情况
//限制条件
// 1 ≤ L ≤ 10^6
// 1 ≤ n ≤ 10^6
// 0 ≤ xi ≤ L
//输入
//L = 10
//n = 3
//x = {2, 6, 7}
//输出
//min = 4（左、右、右）
//max = 8（右、右、右）
