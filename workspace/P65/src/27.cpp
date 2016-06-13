/*
 * 27.cpp
 * Created on: 2015年4月3日
 * Author: jtahstu
 */
//27马克思手稿中的数学题
//马克思手稿中有一道趣味数学问题：有30个人，其中有男人、女人和小孩，在一家饭馆吃饭花了50先令；
//每个男人花3先令，每个女人花2先令，每个小孩花1先令；问男人、女人和小孩各有几人？
//
//*运行结果
//M  W  C
//  1: 0 20 10
//  2: 1 18 11
//  3: 2 16 12
//  4: 3 14 13
//  5: 4 12 14
//  6: 5 10 15
//  7: 6 8 16
//  8: 7 6 17
//  9: 8 4 18
// 10: 9 2 19
// 11: 10 0 20
#include<iostream>
#include<cstdio>
using namespace std;
int main27() {
	int count = 0;
	cout << "   M W C" << endl;
	for (int i = 0; i <= 17; i++) {
		for (int j = 0; j <= 25; j++) {
			if (i * 3 + j * 2 + (30 - i - j) == 50) {
				count++;
				cout << count << ": " << i << " " << j << " " << (30 - i - j)
						<< endl;
			}
		}
	}
	return 0;
}

