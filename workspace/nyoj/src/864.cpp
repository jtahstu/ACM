/**
 * Project Name: nyoj 
 * File Name: 864.cpp
 * Created on: 2015��6��9�� ����10:36:54
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//void jtahstu( long long m) {
//	long long temp = m, i = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, a;
//	bool flag = true, flag2 = true;
//	while (temp) {
//		a = temp % 2;
//		if (flag && (a & 1)) {
//			count1 = i + 1; //�����0��ʼ������Ҫ+1
//			flag = false;
//		}
//		if (flag2 && a == 0) {
//			count3++;
//		} else {
//			flag2 = false;
//		}
//		if (a & 1)
//			count4++;
//		temp /= 2;
//		i++;
//	}
//	count2 = 32 - i;
//	cout << count1 << " " << count2 << " " << count3 << " " << count4 << endl;
//}
//int main() {
//	int n;
//	cin >> n;
//	while (n--) {
//		long long m;//Ҫ��long long �� unsigned int����Ҳ������
//		cin >> m;
//		jtahstu(m);
//	}
//	return 0;
//}

//����һ��ʮ����������n��������Ϊ32λ�Ķ�����(32-bit binary)
//  �������λ�ϵ�һ�γ���1��λ��
//  �������λ����0�ĸ���
//  �������λ����0�ĸ���
//  ���������1�ĸ���
//
//����
//��һ��һ��������T��ʾ�������ݵ�����
//������T�У�ÿ��һ����������ʾn (1 <= n <= 2^32 - 1)
//���
//һ���ĸ�������������Ŀ�����������������output
//��������
//
//3
//1
//100
//123456
//
//�������
//
//1 31 0 1
//3 25 2 3
//7 15 6 6
