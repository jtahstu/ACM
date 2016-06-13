/*
 * 21.cpp
 * Created on: 2015年4月2日
 * Author: jtahstu
 */
//21歌德巴赫猜想
//验证：2000以内的正偶数都能够分解为两个素数之和(即验证歌德巴赫猜想对2000以内的正偶数成立)。
#include<iostream>
#include<cstdio>
using namespace std;
bool jt21(int n) { //普通简单的方法求素数
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
		else
			continue;
	return true;
}
int main21() {
	int a[500] = { 0 }, count = 0,sum=0;
	for (int i = 2; i <= 2000; i++)//素数打表
		if (jt21(i))
			a[count++] = i;
	for (int i = 6; i <= 2000; i += 2) {
		bool flag = false;
		for (int j = 0; j < count; j++)
			if (a[j] < i && jt21(i - a[j])) {
				flag = true;
				break;
			}
		if (!flag)
			cout << i << endl; //出现不成立的情况，输出这个例子
		else sum++;
	}
	cout<<sum+2<<endl;//输出表示猜想成立的偶数个数，即枚举中有多少个满足猜想的偶数
	return 0;
}

