/**
 * Project Name: nyoj
 * File Name: 481.cpp
 * Created on: 2015��7��15�� ����5:19:48
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
//using namespace std;
//void show(string sb) {
//	for (int i = sb.size() - 1; i >= 0; i--)
//		cout << sb[i];
//	cout << endl;
//}
//int main() {
//	string sb;
//	while (cin >> sb) {
//		int s = 0, b = 0;
//		for (unsigned int i = 0; i < sb.size(); i++) {
//			if (sb[i] - 'a' >= 0 && sb[i] - 'a' <= 12)
//				s++;
//			else
//				b++;
//		}
//		if (s == 0) { //ǰһ�Ѹ���Ϊ0
//			for (unsigned int i = 0; i < sb.size() / 2; i++) {
//				sb[i] = sb[i] - 13;
//			}
//			show(sb);
//		} else if (b == 0) { //��һ�Ѹ���Ϊ0
//			for (unsigned int i = 0; i < sb.size() / 2; i++) {
//				sb[i] = sb[i] + 13;
//			}
//			show(sb);
//		} else if (s == b) { //���Ѹ������
//			show(sb);
//		} else { //���Ѹ�������
//			while (s != b) { //����һֱִ��
//				if (s > b) {
//					for (unsigned int i = 0; i < sb.size(); i++) { //��ǰ����ÿ��ֻɾ��һ����ĸ
//						if (sb[i] - 'a' >= 0 && sb[i] - 'a' <= 12) {
//							sb.erase(i, 1);
//							s--;
//							break;
//						}
//					}
//				}
//				if (b > s) {
//					for (unsigned int i = 0; i < sb.size(); i++) { //ͬ��
//						if (sb[i] - 'a' >= 13 && sb[i] - 'a' <= 25) {
//							sb.erase(i, 1);
//							b--;
//							break;
//						}
//					}
//				}
//			}
//			show(sb);
//		}
//	}
//	return 0;
//}
//ƽ���ַ���
//ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
//�Ѷȣ�2
//����
//����һ�����ȵ��ַ���.�ַ�����ֻ����26��Сд��ĸ���������ǰ���ĸa-z��Ϊ2��(a--m)��(n--z),
//�жϸ����ַ�����(a--m)��(n--z)�����е���ĸ�����Ƿ����,�����ߵ��ַ������,
//���������Ҫ�Ӹ�������Ƕ���ĸ��ɾȥ������ĸʹ������ĸ����ȡ�ɾ������:
//������˳������ɾ����ĸ��������Ƕ���ĸ�е���ĸ ,ֱ��������ĸ�����������ɾ����Ȼ��ߵ��ַ��������
//��δɾ��ǰĳһ����ĸ����Ϊ0������Ҫ������һ���а�˳��ȡ��һ�����ĸ����Ϊ0��һ��,ȡ������һ����ĸ��Ҫ�����任��
//�任����:Ϊ��������ĸ��Ӧλ�ñ仯(a--n,b--o ... l--y,m--z),���ߵ��ַ��������
//
//����
//����һ�����Ȳ�����100���ַ���,�ַ�����û�пո�.�ַ�������ĸ��ΪСд��ĸ.
//ע�⣺�������ļ���������EOF���������롣
//���
//��Ҫ������ַ�����ÿ���ַ���ռһ��.
//��������
//ace
//xyz
//accept
//ko
//�������
//ecn
//zyk
//tpec
//ok
