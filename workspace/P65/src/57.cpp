/**
 * Project Name: P65 
 * File Name: 57.cpp
 * Created on: 2015��4��6�� ����4:16:06
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//57�Զ�����
//һ���˿���52���ƣ�������ʱӦ���Ʒָ��ĸ��ˡ������һ����������Զ����ƵĹ�����
//Ҫ�󣺺�����S(Spaces)��ʾ��������H(Hearts)��ʾ��������D(Diamonds)��ʾ��÷����C(Clubs)��ʾ��
//
//*���н��
//
//S 3 2
//H J 8 6 2
//D J 9 8 4 3
//C 8 4
//
//S A Q 8 7
//H T 7 3
//D K
//C A Q J T 5
//
//S K J 9 5
//H A 9 4
//D Q T 6 5 2
//C 7
//
//S T 6 4
//H K Q 5
//D A 7
//C K 9 6 3 2
#include<iostream>//����㷨����  �����copy���ϵĴ���
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int comp(const void *j, const void *i);
void p(int b[], char n[]);
int main57(void) {
	static char n[] = { '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q',
			'K', 'A' };
	int a[53], b1[13], b2[13], b3[13], b4[13];
	int b11 = 0, b22 = 0, b33 = 0, b44 = 0, t = 1, m, flag, i;
	while (t <= 52) /*���Ʒ�52����*/
	{
		m = rand() % 52; /*����0��51֮��������*/
		for (flag = 1, i = 1; i <= t && flag; i++)/*�����²�����������Ƿ��Ѿ�����*/
			if (m == a[i])
				flag = 0; /*flag=1:���������µ������flag=0:�²�����������Ѿ�����*/
		if (flag) {
			a[t++] = m; /*����������µ�����������������*/
			if (t % 4 == 0)
				b1[b11++] = a[t - 1]; /*����t��ģֵ���жϵ�ǰ*/
			else if (t % 4 == 1)
				b2[b22++] = a[t - 1]; /*����Ӧ�����ĸ�������*/
			else if (t % 4 == 2)
				b3[b33++] = a[t - 1];
			else if (t % 4 == 3)
				b4[b44++] = a[t - 1];
		}
	}
	qsort(b1, 13, sizeof(int), comp); /*��ÿ���˵��ƽ�������*/
	qsort(b2, 13, sizeof(int), comp);
	qsort(b3, 13, sizeof(int), comp);
	qsort(b4, 13, sizeof(int), comp);
	p(b1, n);
	p(b2, n);
	p(b3, n);
	p(b4, n); /*�ֱ��ӡÿ���˵���*/
	return 0;
}
void p(int b[], char n[]) {
	int i;
	printf("\n����  "); /*��ӡ���ұ��*/
	for (i = 0; i < 13; i++) /*�������е�ֵת��Ϊ��Ӧ�Ļ�ɫ*/
		if (b[i] / 13 == 0)
			printf("%c ", n[b[i] % 13]); /*�û�ɫ��Ӧ����*/
	printf("\n���� "); /*��ӡ���ұ��*/
	for (i = 0; i < 13; i++)
		if ((b[i] / 13) == 1)
			printf("%c ", n[b[i] % 13]);
	printf("\n���� "); /*��ӡ������*/
	for (i = 0; i < 13; i++)
		if (b[i] / 13 == 2)
			printf("%c ", n[b[i] % 13]);
	printf("\n÷�� "); /*��ӡ÷�����*/
	for (i = 0; i < 13; i++)
		if (b[i] / 13 == 3 || b[i] / 13 == 4)
			printf("%c ", n[b[i] % 13]);
	printf("\n");
}
int comp(const void *j, const void *i) /*qsort���õ�������*/
{
	return (*(int*) i - *(int*) j);
}

