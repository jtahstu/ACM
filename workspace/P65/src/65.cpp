/**
 * Project Name: P65 
 * File Name: 65.cpp
 * Created on: 2015��4��5�� ����7:21:03
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//65�����������ļӷ�
//�����һ���㷨��������������������ļӷ���
//
//*���н��
//Enter S1= 1234567890
//Enter S2= 1122334455667
// S1=1234567890
// S2=1122334455667
//S1+S2=1123569023557
#include<iostream>//������ʵ�ִ������
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
int main655() {
	string a, b;
	while(cin >> a >> b){
	int s[10000] = { 0 }, min=0, max=0;
	if (a.size() > b.size()) {
		max = a.size();
		min = b.size();
	} else {
		max = b.size();
		min = a.size();
	}
	if (max ==(int)a.size()){
		for (int i = min - 1, j = max - 1; i >= 0; i--, j--) {
				s[j] = (b[i] - '0') + (a[j] - '0');
			}
		for (int k = max - min - 1; k >= 0; k--) {
			s[k] = a[k]-'0';//this,ǰ��-'0'���������ˣ���
		}
	}
	else{
		for (int i = min - 1, j = max - 1; i >= 0; i--, j--) {
				s[j] = (a[i] - '0') + (b[j] - '0');
			}
		for (int i = max - min - 1; i >= 0; i--) {
			s[i] = b[i]-'0';
		}
	}
	for(int i=max-1;i>=1;i--)
		if(s[i]>9){
			s[i]%=10;
			s[i-1]++;
		}
	for(int i=0;i<max;i++)
		cout<<s[i];
	}
	return 0;
}

