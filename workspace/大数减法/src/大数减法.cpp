//============================================================================
// Name        : ��������.cpp
// Author      : jtahstu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAX 100
int bigNumSub(char a[], char b[], char sub[]) {
	int i = 0;
	int c = 0; //�ж��Ƿ񹻼���0������1������
	char m[MAX] = { 0 },n[MAX] = { 0 }; //���������ڼ��� //����
	memset(sub, 0, 100);
	int lenA = strlen(a),lenB = strlen(b);
	for (i = 0; i < lenA; i++) {
		m[i] = a[lenA - i - 1] - '0';
	}
	for (i = 0; i < lenB; i++) {
		n[i] = b[lenB - i - 1] - '0';
	}
	for (i = 0; i < lenA; i++) {//λ���㣺��������λ����������λ�����Һ�һλ��һ
		c = (m[i] - n[i]) < 0 ? 1 : 0;
		sub[i] = m[i] + 10 * c - n[i] + '0'; //��'0'ת��
		if (i + 1 == lenA)
			break;
		m[i + 1] -= c;
	}
	return lenA;
}
void print(char sub[], int lenA) {
	int i;
	int k; //��һ����Ϊ0������
	for (i = lenA - 1; i >= 0; i--) {
		if (sub[i] != '0') {
			k = i;
			break;
		}
	}
	for (i = k; i >= 0; i--) {
		printf("%c", sub[i]);
	}
}
int main() {
	char a[MAX], b[MAX], sub[MAX];
	scanf("%s%s",a,b);
	print(sub, bigNumSub(a, b, sub));
	printf("\n");
	return 0;
}

