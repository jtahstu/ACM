/**
 * Project Name: nyoj
 * File Name: 1146.cpp
 * Created on: 2015��7��24�� ����8:16:31
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<cstdlib>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//string jt[] = { "._", "_...", "_._.", "_..", ".", ".._.", "__.", "....", "..",
//		".___", "_._", "._..", "__", "_.", "___", ".__.", "__._", "._.", "...",
//		"_", ".._", "..._", ".__", "_.._", "_.__", "__.." };
//string tt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//int main() {
//	string s;
//	while (cin >> s) {
//		for (unsigned int i = 0; i < s.length();) {
//			int k = 0; //��ʾĿǰ����ַ��ĳ���
//			string b;
//			for (unsigned int j = i; j < s.length(); j++) {
//				if (s[j] == '/') {
//					k = j - i;
//					b = s.substr(i, k);//��仰Ҫд��i�ı�֮ǰ��Ҫ��д��forѭ��֮�⣬i��ֵ�͸ı���
//					i = j + 1;
//					break;
//				}
//			}
//			for (unsigned int l = 0; l < 26; l++) {
//				if (b == jt[l])
//					cout << tt[l];
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}
//Morse code
//ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
//�Ѷȣ�3
//
//����
//
//         ǰЩʱ�俴��һЩTVB�ĵ��Ӿ磬goshawk�о� Morse code�����棬���ܹ��ڶ����ֹ������֮�������Ϣ���ݡ����ڸ���������ַ���Ӧ�ı��
//		 ���㽫���뷭���Ҫ���д��ݵ���Ϣ��
//
//����
//    ÿ���������һ�У�ÿ�б�ʾ��Ϣ��Ӧ�ĵ��룬ÿ����ĸ��Ӧ�ĵ�����"/"�������ļ���EOF������
//���
//    ����öε����Ӧ����Ϣ��ÿ��������ݽ��ռһ�С�
//��������
//
//    ../._/__/._/.__./___/._../../_._././__/._/__/
//    ../._/__/.._./_.../../
//
//�������
//
//    IAMAPOLICEMAM
//    IAMFBI
