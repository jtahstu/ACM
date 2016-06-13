/**
 * 5.cpp
 * Created on: 2015年4月1日
 * Author: jtahstu
 * 5打鱼还是晒网
 *中国有句俗语叫“三天打鱼两天晒网”。某人从1990年1月1日起开始“三天打鱼两天晒网”，问这个人在以后的某一天中是“打鱼”还是“晒网”。
 *思考题：请打印出任意年份的日历
 *运行结果
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

