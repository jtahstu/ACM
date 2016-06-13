/*
 * 9.cpp
 * Created on: 2015年4月3日
 * Author: jtahstu
 */
//9平分七筐鱼
//甲、乙、丙三位鱼夫出海打鱼，他们随船带了21只箩筐。当晚返航时，他们发现有七筐装满了鱼，还有七筐装了半筐鱼，
//另外七筐则是空的，由于他们没有秤，只好通过目测认为七个满筐鱼的重量是相等的，7个半筐鱼的重量是相等的。
//在不将鱼倒出来的前提下，怎样将鱼和筐平分为三份？
//*思考题
//晏会上数学家出了一道难题：假定桌子上有三瓶啤酒，癣瓶子中的酒分给几个人喝，但喝各瓶酒的人数是不一样的。
//不过其中有一个人喝了每一瓶中的酒，且加起来刚好是一瓶，请问喝这三瓶酒的各有多少人？
//(答案：喝三瓶酒的人数分别是2人、3人和6人)
//
//* 运行结果
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
	for (int i = 0; i <= 7; i++) //平均每人3.5筐鱼，每人七个筐   计算量：8^6=262144
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

