/**
 * 7.cpp
 * Created on: 2015年4月1日
 * Author: jtahstu
 *
 */
//7怎样存钱利最大
// 假设银行整存整取存款不同期限的月息利率分别为：
// 0.63% 期限=1年
// 0.66% 期限=2年
// 0.69% 期限=3年
// 0.75% 期限=5年
// 0.84% 期限=8年
// 利息=本金*月息利率*12*存款年限。
// 现在某人手中有2000元钱，请通过计算选择一种存钱方案，使得钱存入银行20年后得到的利息最多(假定银行对超过存款期限的那一部分时间不付利息)。
// *思考题
// 某单位对职工出售住房，每套为2万元。买房付款的方法是：
// 一次交清，优惠20%
// 从第一年开始，每年年初分期付款：
// 5年交清，优惠50%；
// 10年交清，优惠10%；
// 20年交清，没有优惠。
// 现在有人手中正好有2万元，若假定在今后20年中物价和银行利率均保持不变，问他应当选择哪种付款方式可以使应付的钱最少？
//
// *运行结果
// For maxinum profit,he should so save his money in a bank:
// made fixed deposit for 8 year: 0times
// made fixed deposit for 5 year: 4times
// made fixed deposit for 3 year: 0times
// made fixed deposit for 2 year: 0times
// made fixed deposit for 1 year: 0times
// Total:8841.01
// 可见最佳的存款方案为连续四次存5年期。
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main7() {
	double temp = 0, max = 1.0, a = 0, b = 0, c = 0, d = 0, e = 0;
	for (int i = 0; i <= 20 / 1; i++)
		for (int j = 0; j <= 20 / 2; j++)
			for (int k = 0; k <= 20 / 3; k++)
				for (int l = 0; l <= 20 / 5; l++)
					for (int m = 0; m <= 20 / 8; m++) {
						if (i + j * 2 + k * 3 + l * 5 + m * 8 <= 20) {
							temp = pow(1 + 0.0063 * 12, i)
									* pow(1 + 0.0066 * 12 * 2, j)
									* pow(1 + 0.0069 * 12 * 3, k)
									* pow(1 + 0.0075 * 12 * 5, l)
									* pow(1 + 0.0084 * 12 * 8, m);
							if (temp > max) {
								max = temp;
								a = i;
								b = j;
								c = k;
								d = l;
								e = m;
							}
						}
					}
	cout << max * 2000.0 << endl;
	cout << "1、2、3、5、8年期分别存 ：" << " ";
	cout << a << " " << b << " " << c << " " << d << " " << e << "次";
	return 0;
}

