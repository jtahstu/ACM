/**
 * Project Name: P65 
 * File Name: 49.cpp
 * Created on: 2015��4��5�� ����5:02:01
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//49Լɪ������
//����17���͵ķ�����ѧ�Ҽ�˹���ڡ���Ŀ����Ϸ���⡷�н���һ�����£�
//15����ͽ��15 ���ǽ�ͽ��������գ����뽫һ�����Ͷ�뺣�У�������˲����������ѣ�
//��������һ���취��30����Χ��һԲȦ���ӵ�һ���˿�ʼ���α�����ÿ�����ھŸ��˾ͽ�������󺣣����ѭ������ֱ������15����Ϊֹ��
//�������ŷ�������ʹÿ��Ͷ��󺣵Ķ��Ƿǽ�ͽ��
//
//*���н��
//The original circle is(+:pagandom, @:christian):
//+++@@ +@+@@ @+@++ +@@+@ @@+++ @+@@+  4 5 7 9 10 11 13 17 18 20 21 22 26 28 29
//(+"��ʾ�����º����ķǽ�ͽ @�����ڴ��ϻ����Ľ�ͽ)
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main49() {				//������������ݺ����ⲻ�������ٶȽ��ͬ�ҵļ���������Ŀ������������Ϊ������
	vector<int> a;
	for (int i = 1; i <= 30; i++)
		a.push_back(i);
	vector<int>::iterator it;
	vector<int>::iterator jt = a.begin();
	int count = 0;
	cout << "���ͽ�����º��ķֱ�Ϊ��";
	while (a.size() != 15) {
		for (it = jt;; it++) {
			if (it == a.end()) {
				jt = a.begin();
				break;
			}
			count++;
			if (count % 9 == 0) {
				cout << *it << " ";
				a.erase(it);
				jt = it;
				break;
			}
		}
	}
	cout << endl << "��ͽλ�÷ֱ�Ϊ��";
	for (vector<int>::iterator it = a.begin(); it != a.end(); it++)
		cout << *it << " ";
	return 0;
}

