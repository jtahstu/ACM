/**
 * Project Name: nyoj
 * File Name: 495.cpp
 * Created on: 2015��7��15�� ����4:15:58
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
//bool judge(char sb[]) { //�ж��ַ����Ƿ�Ϊ���Ĵ�
//	int lenn = strlen(sb);
//	for (int i = 0; i < lenn / 2; i++) {
//		if (sb[i] != sb[lenn - i - 1])
//			return false;
//	}
//	return true;
//}
//void solve() {
//	int n;
//	cin >> n;
//	getchar();
//	while (n--) {
//		char s[110];
//		memset(s, 0, sizeof(s));
//		gets(s);
//		int len = strlen(s), k;
//		if (judge(s)) {
//			puts(s);
//		} else {
//			for (int i = 0; i < len; i++) { //���ΰ�ǰi����ĸ��0~len-1�������ӵ����棬�ж��Ƿ����
//				k = len;
//				for (int j = i; j >= 0; j--)
//					s[k++] = s[j];
//				if (judge(s)) {
//					puts(s);
//					break;
//				}
//			}
//		}
//	}
//}
//int main() {
//	solve();
//	return 0;
//}
//���� DXH
//ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
//�Ѷȣ�2
//����
//��Ҷ�֪��,DXH ��ʱ�Ը���,С���Ѷ���ϲ��������,�������һֱ�� DXH ������ʱ��Ҳû�иı䡣
//����ʱ�ڵ� DXH ������"���Ĵ�",�����Ĵ�����ָ���Ŷ����Ŷ���һ�����ַ�����DXHһ���˵�ʱ��ϲ���ڵ������дһ���ַ��� S,
//Ȼ��������ַ������ұ���Ӿ����ٵ��ַ�(���Բ����,���� 0 ��),ʹ������ַ�����ɡ����Ĵ����������ʱ�䳤��,DXH ����Ҳ����,
//���������ܰ���дһ������,��������������ַ��γɵĻ��Ĵ���?
//һ���ַ��� S[1..L]����Ϊ���Ĵ�,���ҽ��� S[i] = S[L - i + 1] (1 <= i <= L)��
//����
//��һ��,һ�� T (T <= 100),��ʾ�� T ���ַ�����Ҫ���ж�
//֮�� T ��,ÿ��һ���ַ��� S��
//S �ĳ���|S|���� 1 <= |S| <= 50,�� S ֻ��Сд��ĸ'a' -'z'��ɡ�
//���
//����ÿ���ַ���,���һ��,ÿ��һ���ַ��� S', ���� S �Ҳ�������ٵ��ַ��γɵĻ��Ĵ���
//��������
//5
//add
//cigartragic
//dxhisgirl
//acaba
//abczyxyz
//�������
//adda
//cigartragic
//dxhisgirlrigsihxd
//acabaca
//abczyxyzcba
