/**
 * Project Name: P65 
 * File Name: 57.cpp
 * Created on: 2015年4月6日 下午4:16:06
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//57自动发牌
//一副扑克有52张牌，打桥牌时应将牌分给四个人。请设计一个程序完成自动发牌的工作。
//要求：黑桃用S(Spaces)表示；红桃用H(Hearts)表示；方块用D(Diamonds)表示；梅花用C(Clubs)表示。
//
//*运行结果
//
//S 3 2
//H J 8 6 2
//D J 9 8 4 3
//C 8 4
//
//S A Q 8 7
//H T 7 3
//D K
//C A Q J T 5
//
//S K J 9 5
//H A 9 4
//D Q T 6 5 2
//C 7
//
//S T 6 4
//H K Q 5
//D A 7
//C K 9 6 3 2
#include<iostream>//随机算法吗？晕  这个是copy网上的代码
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int comp(const void *j, const void *i);
void p(int b[], char n[]);
int main57(void) {
	static char n[] = { '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q',
			'K', 'A' };
	int a[53], b1[13], b2[13], b3[13], b4[13];
	int b11 = 0, b22 = 0, b33 = 0, b44 = 0, t = 1, m, flag, i;
	while (t <= 52) /*控制发52张牌*/
	{
		m = rand() % 52; /*产生0到51之间的随机数*/
		for (flag = 1, i = 1; i <= t && flag; i++)/*查找新产生的随机数是否已经存在*/
			if (m == a[i])
				flag = 0; /*flag=1:产生的是新的随机数flag=0:新产生的随机数已经存在*/
		if (flag) {
			a[t++] = m; /*如果产生了新的随机数，则存入数组*/
			if (t % 4 == 0)
				b1[b11++] = a[t - 1]; /*根据t的模值，判断当前*/
			else if (t % 4 == 1)
				b2[b22++] = a[t - 1]; /*的牌应存入哪个数组中*/
			else if (t % 4 == 2)
				b3[b33++] = a[t - 1];
			else if (t % 4 == 3)
				b4[b44++] = a[t - 1];
		}
	}
	qsort(b1, 13, sizeof(int), comp); /*将每个人的牌进行排序*/
	qsort(b2, 13, sizeof(int), comp);
	qsort(b3, 13, sizeof(int), comp);
	qsort(b4, 13, sizeof(int), comp);
	p(b1, n);
	p(b2, n);
	p(b3, n);
	p(b4, n); /*分别打印每个人的牌*/
	return 0;
}
void p(int b[], char n[]) {
	int i;
	printf("\n黑桃  "); /*打印黑桃标记*/
	for (i = 0; i < 13; i++) /*将数组中的值转换为相应的花色*/
		if (b[i] / 13 == 0)
			printf("%c ", n[b[i] % 13]); /*该花色对应的牌*/
	printf("\n红桃 "); /*打印红桃标记*/
	for (i = 0; i < 13; i++)
		if ((b[i] / 13) == 1)
			printf("%c ", n[b[i] % 13]);
	printf("\n方块 "); /*打印方块标记*/
	for (i = 0; i < 13; i++)
		if (b[i] / 13 == 2)
			printf("%c ", n[b[i] % 13]);
	printf("\n梅花 "); /*打印梅花标记*/
	for (i = 0; i < 13; i++)
		if (b[i] / 13 == 3 || b[i] / 13 == 4)
			printf("%c ", n[b[i] % 13]);
	printf("\n");
}
int comp(const void *j, const void *i) /*qsort调用的排序函数*/
{
	return (*(int*) i - *(int*) j);
}

