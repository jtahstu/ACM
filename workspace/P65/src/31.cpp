/*
 * 31.cpp
 * Created on: 2015年4月4日
 * Author: jtahstu
 */
//31将真分数分解为埃及分数
//分子为1 的分数称为埃及分数，现输入一个真分数，请将该分数分解为埃及分数。
//如：8/11=1/2+1/5+1/55+1/110。
//
//*运行结果
//1. Please enter a optional fraction (a/b): 1/6
//It can be decomposed to: 1/6
//2. Please enter a optional fraction (a/b): 20/33
//It can be decomposed to: 1/2+1/10+1/165
//3. Please enter a optional fraction (a/b): 10/89
//It can be decomposed to: 1/9+1/801
//4. Please enter a optional fraction (a/b): 19/99
//It can be decomposed to: 1/6+1/40+1/3960
//5. Please enter a optional fraction (a/b): 8/89
//It can be decomposed to: 1/11+1/957
//*问题分析与算法设计
//若真分数的分子a能整除分母b，则真分数经过化简就可以得到埃及分数，
//若真分数的分子不能整除分母，则可以从原来的分数中分解出一个分母为b/a+1的埃及分数。  这是什么原理啊？？？？？？
//用这种方法将剩余部分反复分解，最后可得到结果。
#include<iostream>
#include<cstdio>
using namespace std;
int main31() {
	long int a, b, c;
	while (true) {
		cin >> a >> b;
		while (true) {//这里只要不遇到break,就一直在循环，直到结束
			if (b % a) /*若分子不能整除分母*/
				c = b / a + 1; /*则分解出一个分母为b/a+1的埃及分数*/
			else {
				c = b / a;
				a = 1;
			} /*否则，输出化简后的真分数(埃及分数)*/
			if (a == 1) {
				printf("1/%ld ", c);
				break; /*a为1标志结束*/
			} else
				printf("1/%ld + ", c);
			a = a * c - b; /*求出余数的分子*/
			b = b * c; /*求出余数的分母*/
			if (a == 3) /*若余数为3，输出最后两个埃及分数*/
			{
				printf("1/%ld + 1/%ld ", b / 2, b);
				break;
			}
		}
	}
	return 0;
}

