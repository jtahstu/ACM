/**
 * Project Name: P65 
 * File Name: 50.cpp
 * Created on: 2015��4��5�� ����6:48:05
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//50 �����ܱ�ʾ1~23��5��������
//��֪���������ͬ��������֮��Ϊ23���Ҵ������������ѡ���ɸ����������Ա�ʾ��1��23֮�ڵ�ȫ����Ȼ���������������ʲô��
//
//*���н��
//There are following possible result:
//[1]: 1 2 3 5 12
//[2]: 1 2 3 6 11
//[3]: 1 2 3 7 10
//[4]: 1 2 4 5 11
//[5]: 1 2 4 6 10
//[6]: 1 2 4 7 9
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main50() {
	int a, b, c, d, e, i, j, k, l, m, x, f = 0;
	for (a = 1; a <= 23; a++) /*��23�ֽ�Ϊa,b,c,d,e�����*/
		for (b = 1 + a; b <= 23 - a; b++)
			for (c = 1 + b; c <= 23 - a - b; c++)
				for (d = 1 + c; d <= 23 - a - b - c; d++)
				{	f = 1;
					if ((e = 23 - a - b - c - d) > d)
						for (f = 0, x = 1; x < 24 && !f; x++) /*�ж�5�����ɷ��ʾ1~23*/
							for (f = 1, i = 0; i < 2 && f; i++)
								for (j = 0; j < 2 && f; j++)
									for (k = 0; k < 2 && f; k++)
										for (l = 0; l < 2 && f; l++)
											for (m = 0; m < 2 && f; m++)
												if (x== a * i + b * j + c * k+ d * l + e * m)//0��ʾ���ã�1��ʾ��
													f = 0;
					if (!f)printf("%d %d %d %d %d\n", a, b, c, d,e);
				}
	return 0;
}

