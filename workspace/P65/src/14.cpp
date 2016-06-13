/*
 * 14.cpp
 * Created on: 2015年4月2日
 * Author: jtahstu
 */
//14求车速
//一辆以固定速度行驶的汽车，司机在上午10点看到里程表上的读数是一个对称数(即这个数从左向右读和从右向左读是完全一样的)，
//为95859。两小时后里程表上出现了一个新的对称数。问该车的速度是多少？新的对称数是多少？
//
//*运行结果
//The new symmetrical number kelometers is:95959.
//The velocity of the car is:50.00
#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main14() {
	bool flag = false;
	int count=0;
	for (int i = 95859+1; i <= 100000; i++) {
		if (i % 10 == i / 10000 && i / 10 % 10 == i / 1000 % 10) {
			count = i;
			flag = true;
			break;
		}
	}
	if (flag)
		cout << "The velocity of the car is:" <<setiosflags(ios::fixed)<<setprecision(2)<< (count * 1.0 - 95859) / 2
				<< endl;
	return 0;
}

