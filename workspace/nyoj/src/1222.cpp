/**
 * Project Name: nyoj
 * File Name: 1222.cpp
 * Created on: 2015��7��25�� ����5:45:52
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>//���ǳ�ʱ��jj˼�ܴ�
//#include<cstdio>
//#include<cmath>
//#include<cstdlib>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//int number(unsigned long long x) {
//	if (x < 0 || (x & 1))
//		return 0;
//	return number(x >> 1) + 1;
//}
//int main() {
//	char c;
//	unsigned long long x;
//	unsigned long long sum = 0;
//	while (~(c = getchar())) {
//		if (c >= '0' && c <= '9')
//			x = x * 10 + c - '0';
//		else if (c == ' ') {
//			if (x == 0)
//				sum += 64;
//			else {
//				int y = number(x);
//				//cout << y << endl;
//				sum += y;
//			}
//			x = 0;
//		}
//	}
//	printf("%llu\n", sum);
//	return 0;
//}
//0�ĸ��������ٰ棩
//ʱ�����ƣ�700 ms  |  �ڴ����ƣ�65535 KB
//
//����
//
//    Ҫ�ڰ����ڳ�����Ŀ��ûʱ���ˣ���������ٶȵĸ�������������������ĩβ0�ĸ����ĺ͡�
//
//    ֻ��һ������ݡ�
//
//    Hint������ʹ�ø�Ч���뷽ʽ
//
//        while(~(c=getchar()))
//
//        if(c>='0'&&c<='9')x=x*10+c-'0';
//
//����
//    40,000,000����������0��ÿ��������2^64-1)��ÿ���������涼��һ���ո�
//���
//    ֻ���һ��������Ϊ��������������ĩβ0�ĸ����ĺ�
//��������
//
//    8 0 17
//
//�������
//
//    67
