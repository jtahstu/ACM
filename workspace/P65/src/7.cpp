/**
 * 7.cpp
 * Created on: 2015��4��1��
 * Author: jtahstu
 *
 */
//7������Ǯ�����
// ��������������ȡ��ͬ���޵���Ϣ���ʷֱ�Ϊ��
// 0.63% ����=1��
// 0.66% ����=2��
// 0.69% ����=3��
// 0.75% ����=5��
// 0.84% ����=8��
// ��Ϣ=����*��Ϣ����*12*������ޡ�
// ����ĳ��������2000ԪǮ����ͨ������ѡ��һ�ִ�Ǯ������ʹ��Ǯ��������20���õ�����Ϣ���(�ٶ����жԳ���������޵���һ����ʱ�䲻����Ϣ)��
// *˼����
// ĳ��λ��ְ������ס����ÿ��Ϊ2��Ԫ���򷿸���ķ����ǣ�
// һ�ν��壬�Ż�20%
// �ӵ�һ�꿪ʼ��ÿ��������ڸ��
// 5�꽻�壬�Ż�50%��
// 10�꽻�壬�Ż�10%��
// 20�꽻�壬û���Żݡ�
// ������������������2��Ԫ�����ٶ��ڽ��20������ۺ��������ʾ����ֲ��䣬����Ӧ��ѡ�����ָ��ʽ����ʹӦ����Ǯ���٣�
//
// *���н��
// For maxinum profit,he should so save his money in a bank:
// made fixed deposit for 8 year: 0times
// made fixed deposit for 5 year: 4times
// made fixed deposit for 3 year: 0times
// made fixed deposit for 2 year: 0times
// made fixed deposit for 1 year: 0times
// Total:8841.01
// �ɼ���ѵĴ���Ϊ�����Ĵδ�5���ڡ�
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
	cout << "1��2��3��5��8���ڷֱ�� ��" << " ";
	cout << a << " " << b << " " << c << " " << d << " " << e << "��";
	return 0;
}

