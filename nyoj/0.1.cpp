/**
 * Project Name: C++
 * File Name: 10000Hours.cpp
 * Created on: 2015年6月23日 上午10:04:18
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
using namespace std;
const int N = 10000;
const int d[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int calc(int month, int day) { //计算这一年还有多少天
	int days = 0;
	for (int i = month + 1; i <= 12; i++)
		days += d[i];
	return days + (d[month] - day + 1);
}
int main() {
	int Satrt_year, Start_month, Start_day, hour;
	while (~scanf("%d/%d/%d %d", &Satrt_year, &Start_month, &Start_day, &hour)) {
		int days;
		int End_year = Satrt_year, End_month = Start_month, End_day;
		if (N % hour)
			days = N / hour + 1;
		else
			days = N / hour;
		while (days >= 365) {
			End_year++;
			days -= 365;
		}
		if (calc(Start_month, Start_day) > days) { //如果就在这一年内
			if (days >= d[Start_month] - Start_day + 1) { //如果不在起始的月份
				End_day = 0;
				End_month++;
				days -= d[Start_month] - Start_day + 1;
				for (int i = Start_month + 1; i <= 12; i++) {
					if (days >= d[i]) {
						End_month++;
						days -= d[i];
					}
				}
				End_day = Start_day + days; //这里相加可能会大于这个月的天数
				if (End_day > d[End_month]) {
					End_month++;
					End_day -= d[End_month - 1];
				}
			} else { //如果恰好在起始的月份
				End_day = Start_day + days;
			}
		} else { //如果到达下一年
			End_month = 1;
			End_day = 0;
			days -= calc(Start_month, Start_day);
			End_year++;
			for (int i = 1; i <= 12; i++) {
				if (days >= d[i]) {
					End_month++;
					days -= d[i];
				}
			}
			End_day += days;
		}
		cout << End_year << "/" << End_month << "/" << End_day << endl;
	}
	return 0;
}

