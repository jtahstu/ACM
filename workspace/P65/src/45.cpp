/*
 * 45.cpp
 * Created on: 2015年4月5日
 * Author: jtahstu
 */
//45  1~9组成三个3位的平方数
//将1、2、3、4、5、6、7、8、9九个数字分成三组，每个数字只能用一次，
//即每组三个数不允许有重复数字，也不许同其它组的三个数字重复，要求每组中的三位数都组成一个平方数。
//
//*运行结果
//The 3 squares with 3 different digits each are:
//361,529,784
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main45() {
	int a[30] = { 0 };
	for (int i = 0; i < 22; i++) //10 -- 31的平方数，存数组
		a[i] = (i + 10) * (i + 10);
	for (int i = 0; i < 22; i++)
		for (int j = i + 1; j < 22; j++)
			for (int k = j + 1; k < 22; k++) { // 三重循环，判断条件
				bool flag = true;
				int b[10] = { a[i] % 10, a[i] / 10 % 10, a[i] / 100, a[j] % 10, //分离每一位数字
				a[j] / 10 % 10, a[j] / 100, a[k] % 10, a[k] / 10 % 10, a[k]
						/ 100 };
				sort(b, b + 9);
				for (int c = 1; c < 10; c++) { //判断是否有重复
					if (b[c] == b[c - 1]) {
						flag = false;
						break;
					}
				}
				if (flag)//满足没有重复，符合条件，输出
					cout << a[i] << " " << a[j] << " " << a[k] << endl;
			}
	return 0;
}

