/*
 * 17.cpp
 * Created on: 2015年4月2日
 * Author: jtahstu
 */
//17 亲密数
//如果整数A的全部因子(包括1，不包括A本身)之和等于B；且整数B的全部因子(包括1，不包括B本身)之和等于A，
//则将整数A和B称为亲密数。求3000以内的全部亲密数。
//
//*运行结果
//There are following friendly--numbers pair smaller than 3000:
//220.. 284 1184.. 1210 2620.. 2924
#include<iostream>
#include<cstdio>
int sum17(int i) {
	int sum = 0;
	for (int j = 1; j <= i / 2; j++)
		if (i % j == 0)
			sum += j;
	return sum;
}
using namespace std;
int main17() {
	for (int i = 2; i < 3000; i++)
		for(int j=i;j<3000;j++) //优化一下，瞬间减少一半的计算量
		if ((sum17(i) == j)&&(i==sum17(j))&&i!=j)
			cout << i<<".."<<j << "   ";
	cout << endl;
	return 0;
}

