/**
 * Project Name: C++
 * File Name: 好多个1啊.cpp
 * Created on: 2015年6月23日 下午4:39:22
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//int main() {
//	int n, t;
//	cin >> t;
//	while (t--) {
//		cin >> n;
//		cout << (1 << (n - 1)) + (n - 1) * (1 << (n - 2)) << endl;
//	}
//	return 0;
//}
/*
 暴力法
 递推法
 公式法
 杨辉三角法

 n位二进制数一共有x=2^(n-1)个数，然后举两个例子就可以解了：
 输入4，则一共有如下这么多4位二进制数:
 1 0 0 0
 1 0 0 1
 1 0 1 0
 1 0 1 1
 1 1 0 0
 1 1 0 1
 1 1 1 0
 1 1 1 1
 第一列有x个1，以后每列都有x/2个1，然后一共有s=x+(n-1)*x/2个1

 bitset
 #include <iostream>
 #include <cstdio>
 #include <bitset>
 #include <algorithm>
 using namespace std;
 int main(){
 int T;
 cin >> T;
 while(T--){
 int n, cnt = 0;
 cin >> n;
 for(int i = (1<<(n-1)); i < (1<<n); ++i){
 bitset<22> t(i);
 cnt += t.count();
 }
 cout << cnt << endl;
 }
 return 0;
 }
 */
