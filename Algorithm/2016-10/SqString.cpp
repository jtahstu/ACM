// Algorithm.cpp : 定义控制台应用程序的入口点。
// 顺序串
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

//将字符串常量赋给串s
void StrAssign(SqString &s, char cstr[]) {
	int i;
	for (i = 0;cstr[i] != '\0';i++) {
		s.data[i] = cstr[i];
	}
	s.length = i;
}

//判断串相等
bool StrEqual(SqString s, SqString t) {
	if (s.length != t.length)
		return false;
	for (int i = 0; i < s.length; i++) {
		if (s.data[i] != t.data[i])
			return false;
	}
	return true;
}

//两个串连接
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


//求子串
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

//将串s2插入到串s1的第i个字符后
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

//从串s中删去第i个字符开始的长度为j的字符串
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

//显示字符串s
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
	cout << "字符s:";
	DisStr(s);
	cout << "字符s2:";
	DisStr(s2);
	SqString ss2 = InsStr(s,3, s2);
	cout << "字符s第3个位置插入s2:";
	DisStr(ss2);

	SqString delstr = DelStr(s, 4, 3);
	cout << "字符s从第4个位置删除3个字符:" ;
	DisStr(delstr);
	getchar();
	return 0;
}

