/*
 * 31.cpp
 * Created on: 2015��4��4��
 * Author: jtahstu
 */
//31��������ֽ�Ϊ��������
//����Ϊ1 �ķ�����Ϊ����������������һ����������뽫�÷����ֽ�Ϊ����������
//�磺8/11=1/2+1/5+1/55+1/110��
//
//*���н��
//1. Please enter a optional fraction (a/b): 1/6
//It can be decomposed to: 1/6
//2. Please enter a optional fraction (a/b): 20/33
//It can be decomposed to: 1/2+1/10+1/165
//3. Please enter a optional fraction (a/b): 10/89
//It can be decomposed to: 1/9+1/801
//4. Please enter a optional fraction (a/b): 19/99
//It can be decomposed to: 1/6+1/40+1/3960
//5. Please enter a optional fraction (a/b): 8/89
//It can be decomposed to: 1/11+1/957
//*����������㷨���
//��������ķ���a��������ĸb�����������������Ϳ��Եõ�����������
//��������ķ��Ӳ���������ĸ������Դ�ԭ���ķ����зֽ��һ����ĸΪb/a+1�İ���������  ����ʲôԭ��������������
//�����ַ�����ʣ�ಿ�ַ����ֽ⣬���ɵõ������
#include<iostream>
#include<cstdio>
using namespace std;
int main31() {
	long int a, b, c;
	while (true) {
		cin >> a >> b;
		while (true) {//����ֻҪ������break,��һֱ��ѭ����ֱ������
			if (b % a) /*�����Ӳ���������ĸ*/
				c = b / a + 1; /*��ֽ��һ����ĸΪb/a+1�İ�������*/
			else {
				c = b / a;
				a = 1;
			} /*������������������(��������)*/
			if (a == 1) {
				printf("1/%ld ", c);
				break; /*aΪ1��־����*/
			} else
				printf("1/%ld + ", c);
			a = a * c - b; /*��������ķ���*/
			b = b * c; /*��������ķ�ĸ*/
			if (a == 3) /*������Ϊ3��������������������*/
			{
				printf("1/%ld + 1/%ld ", b / 2, b);
				break;
			}
		}
	}
	return 0;
}

