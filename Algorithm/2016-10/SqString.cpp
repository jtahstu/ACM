// Algorithm.cpp : �������̨Ӧ�ó������ڵ㡣
// ˳��
//

#include "stdafx.h"
#include<algorithm>
#include<iostream>
using namespace std;
#define MaxSize 100

typedef struct {
	char data[MaxSize];
	int length;
}SqString;

//���ַ�������������s
void StrAssign(SqString &s, char cstr[]) {
	int i;
	for (i = 0;cstr[i] != '\0';i++) {
		s.data[i] = cstr[i];
	}
	s.length = i;
}

//�жϴ����
bool StrEqual(SqString s, SqString t) {
	if (s.length != t.length)
		return false;
	for (int i = 0; i < s.length; i++) {
		if (s.data[i] != t.data[i])
			return false;
	}
	return true;
}

//����������
SqString Concat(SqString s, SqString t) {
	SqString str;
	str.length = s.length + t.length;
	for (int i = 0; i < s.length; i++) {
		str.data[i] = s.data[i];
	}
	for (int i = 0;i < t.length;i++) {
		str.data[s.length + i] = t.data[i];
	}
	return str;
}


//���Ӵ�
SqString SubStr(SqString s, int i, int length) {
	SqString str;
	str.length = 0;
	if (i <= 0 || i > s.length || length < 0 || i + length - 1>s.length)
		return str;
	for (int k = i - 1; k < i + length - 1; k++) {
		str.data[k - i + 1] = s.data[k];
	}
	str.length = length;
	return str;
}

//����s2���뵽��s1�ĵ�i���ַ���
SqString InsStr(SqString s1, int i, SqString s2) {
	SqString str;
	str.length = 0;
	if (i<0 || i>s1.length)
		return str;
	for (int k = 0;k < i; k++)
		str.data[k] = s1.data[k];
	for (int k = i;k < i + s2.length;k++)
		str.data[k] = s2.data[k - i];
	for (int k = i; k < s1.length;k++)
		str.data[s2.length + k] = s1.data[k];
	str.length = s1.length + s2.length;
	return str;
}

//�Ӵ�s��ɾȥ��i���ַ���ʼ�ĳ���Ϊj���ַ���
SqString DelStr(SqString s, int i, int j) {
	SqString str;
	str.length = 0;
	if (i <= 0 || i > s.length || i + j>s.length + 1)
		return str;
	for (int k = 0;k < i - 1;k++) {
		str.data[k] = s.data[k];
	}
	for (int k = i+j-1;k < s.length;k++) {
		str.data[k - j] = s.data[k];
	}
	str.length = s.length - j;
	return str;
}

//��ʾ�ַ���s
void DisStr(SqString s) {
	if (s.length > 0) {
		for (int i = 0; i < s.length; i++)
			cout << s.data[i];
		cout << endl;
	}
}

void GetNext(SqString t, int next[]) {
	int j=0, k=-1;
	next[0] = -1;
	while (j<t.length-1) {
		if (k == -1  ) {

		}
	}
}

int main()
{
	SqString s,s2;
	char data1[] = "asdfghjkl";
	char data2[] = "qwertyuiop";
	StrAssign(s, data1);
	StrAssign(s2, data2);
	cout << "�ַ�s:";
	DisStr(s);
	cout << "�ַ�s2:";
	DisStr(s2);
	SqString ss2 = InsStr(s,3, s2);
	cout << "�ַ�s��3��λ�ò���s2:";
	DisStr(ss2);

	SqString delstr = DelStr(s, 4, 3);
	cout << "�ַ�s�ӵ�4��λ��ɾ��3���ַ�:" ;
	DisStr(delstr);
	getchar();
	return 0;
}

