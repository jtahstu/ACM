/*
 * 23.cpp
 * Created on: 2015年4月3日
 * Author: jtahstu
 */
//23爱因斯坦的数学题
//爱因斯坦出了一道这样的数学题：有一条长阶梯，若每步跨2阶，则最后剩一阶，若每步跨3 阶，则最后剩2阶，
//若每步跨5阶，则最后剩4阶，若每步跨6阶则最后剩5阶。只有每次跨7阶，最后才正好一阶不剩。请问这条阶梯共有多少阶？
//
//*运行结果
//Staris_number=119
#include<iostream>
#include<cstdio>
using namespace std;
int main23() {
	for (int i = 7;; i += 7) //台阶数为7的倍数，这样计算少，且这种数很多，此题估计是求最小的值
			{
		if (i % 6 == 5 && i % 5 == 4 && i % 3 == 2 && i % 2 == 1) {
			cout << "Staris_number=" << i << endl;
			break;
		}

	}
	return 0;
}

