/**
 * 5.cpp
 * Created on: 2015��4��1��
 * Author: jtahstu
 * 5���㻹��ɹ��
 *�й��о�����С������������ɹ������ĳ�˴�1990��1��1����ʼ�������������ɹ����������������Ժ��ĳһ�����ǡ����㡱���ǡ�ɹ������
 *˼���⣺���ӡ��������ݵ�����
 *���н��
 *Enter year/month/day:1991 10 25
 *He was fishing at day.
 *Enter year/month/day:1992 10 25
 *He was sleeping at day.
 *Enter year/month/day:1993 10 25
 *He was sleeping at day.
 *
 */
#include<iostream>
#include<cstdio>
using namespace std;
bool judge(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return true;
	return false;
}
int days(int year, int month, int day) {
	int days = 0, a[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
			b[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (judge(year))
		for (int i = 0; i < month-1; i++)
			days += b[i];
	else
		for (int i = 0; i < month-1; i++)
			days += a[i];
	return days + day;
}
int main5() {
	int year, month, day, sum = 0;
	while(cin >> year >> month >> day){
		sum=0;
	for (int i = 1990; i < year; i++)
		if (judge(i))
			sum += 366;
		else
			sum += 365;
	if (((sum + days(year, month, day)) % 5 == 1)
			|| ((sum + days(year, month, day)) % 5 == 2)||((sum + days(year, month, day)) % 5 == 3))
		cout << "He was fishing at day." << endl;
	else
		cout << "He was sleeping at day." << endl;}
	return 0;
}

