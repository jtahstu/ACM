/*
 * 9.cpp
 * Created on: 2015��4��3��
 * Author: jtahstu
 */
//9ƽ���߿���
//�ס��ҡ�����λ���������㣬�����洬����21ֻ��𡣵�����ʱ�����Ƿ������߿�װ�����㣬�����߿�װ�˰���㣬
//�����߿����ǿյģ���������û�гӣ�ֻ��ͨ��Ŀ����Ϊ�߸����������������ȵģ�7����������������ȵġ�
//�ڲ����㵹������ǰ���£���������Ϳ�ƽ��Ϊ���ݣ�
//*˼����
//�̻�����ѧ�ҳ���һ�����⣺�ٶ�����������ƿơ�ƣ�Ѣƿ���еľƷָ������˺ȣ����ȸ�ƿ�Ƶ������ǲ�һ���ġ�
//����������һ���˺���ÿһƿ�еľƣ��Ҽ������պ���һƿ�����ʺ�����ƿ�Ƶĸ��ж����ˣ�
//(�𰸣�����ƿ�Ƶ������ֱ���2�ˡ�3�˺�6��)
//
//* ���н��
//It exists possible distribution plans:
//No.1 Full basket Semi--basket Empty
//fisher A: 1 5 1 i j
//fisher B: 3 1 3 k a
//fisher C: 3 1 3 b c
//No.2 Full basket Semi--basket Empty
//fisher A: 2 3 2
//fisher B: 2 3 2
//fisher C: 3 1 3
#include<iostream>
#include<cstdio>
using namespace std;
int main9() {
	for (int i = 0; i <= 7; i++) //ƽ��ÿ��3.5���㣬ÿ���߸���   ��������8^6=262144
		for (int j = 0; j <= 7; j++)
			for (int k = 0; k <= 7; k++)
				for (int a = 0; a <= 7; a++)
					for (int b = 0; b <= 7; b++)
						for (int c = 0; c <= 7; c++) {
							if (i + j <= 7 && k + a <= 7 && b + c <= 7
									&& i + k + b == 7 && j + a + c == 7
									&& (7 - i - j) + (7 - k - a) + (7 - b - c)
											== 7 && i + j * 0.5 == 3.5
									&& k + a * 0.5 == 3.5
									&& b + c * 0.5 == 3.5) {
								cout << i << " " << j << " " << 7 - i - j
										<< endl;
								cout << k << " " << a << " " << 7 - k - a
										<< endl;
								cout << b << " " << c << " " << 7 - b - c
										<< endl << endl;
							}
						}

	return 0;
}

