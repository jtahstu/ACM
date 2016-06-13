/*
 * 10.cpp
 * Created on: 2015年4月1日
 * Author: jtahstu
 */
//10 有限5位数
//个位数为6且能被3整除的五位数共有多少？
//*思考题
//求100到1000之间有多少个其数字之和为5的整数。
//(答案：104，113，122，131，140，203，212，221，230，302，311，320，401，410，500)
//
//*运行结果
//count=2999
#include<iostream>
#include<cstdio>
using namespace std;
int main10() {
	int count = 0;
	for (int i = 0; i <= 9; i++)
		for (int j = 0; j <= 9; j++)
			for (int k = 0; k <= 9; k++)
				for (int l = 0; l <= 9; l++)
					if ((i * 10000 + j * 1000 + k * 100 + l * 10 + 6) % 3 == 0
							&& (i * 10000 + j * 1000 + k * 100 + l * 10 + 6)
									> 10000)
						count++;
	cout << count << endl;
	return 0;
}

