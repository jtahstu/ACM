/**
 * Project Name: C++
 * File Name: �ö��1��.cpp
 * Created on: 2015��6��23�� ����4:39:22
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
 ������
 ���Ʒ�
 ��ʽ��
 ������Ƿ�

 nλ��������һ����x=2^(n-1)������Ȼ����������ӾͿ��Խ��ˣ�
 ����4����һ����������ô��4λ��������:
 1 0 0 0
 1 0 0 1
 1 0 1 0
 1 0 1 1
 1 1 0 0
 1 1 0 1
 1 1 1 0
 1 1 1 1
 ��һ����x��1���Ժ�ÿ�ж���x/2��1��Ȼ��һ����s=x+(n-1)*x/2��1

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
