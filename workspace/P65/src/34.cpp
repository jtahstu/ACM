/*
 * 34.cpp
 * Created on: 2015年4月4日
 * Author: jtahstu
 */
//34新娘和新郞
//
//三对情侣参加婚礼，三个新郞为A、B、C，三个新娘为X、Y、Z。有人不知道谁和谁结婚，
//于是询问了六位新人中的三位，但听到的回答是这样的：
//A说他将和X结婚；X说她的未婚夫是C；C说他将和Z结婚。这人听后知道他们在开玩笑，全是假话。
//请编程找出谁将和谁结婚。
//*运行结果
//
//X will marry to B. (X与B结婚)
//
//Y will marry to C. (Y与C结婚)
//
//Z will marry to A. (Z与A结婚)
//a  x
//b  y
//c  z
#include<iostream>
#include<cstdio>
using namespace std;
int main34() {
	for (int i = 1; i <= 3; i++) //i代表A
		for (int j = 1; j <= 3; j++) //j代表B
			for (int k = 1; k <= 3; k++) //k代表C
				if (i != 1 && k != 1 && k != 3&&i!=j&&i!=k&&j!=k)
					cout << "A B C分别与" << char(i+87) << " " << char(j+87) << " " << char(k+87) << "结婚"
							<< endl;

	return 0;
}

