/*
 * 22.cpp
 * Created on: 2015年4月3日
 * Author: jtahstu
 */
//22百钱百鸡问题
//中国古代数学家张丘建在他的《算经》中提出了著名的“百钱买百鸡问题”：
//鸡翁一，值钱五，鸡母一，值钱三，鸡雏三，值钱一，百钱买百鸡，问翁、母、雏各几何？
//
//*运行结果
//Follwing are possible plans to buy 100 fowls with 100 Yuan.
//1:cock=0 hen=25 chicken=75
//2:cock=4 hen=18 chicken=78
//3:cock=8 hen=11 chicken=81
//4:cock=12 hen=4 chicken=84

#include<iostream>
#include<cstdio>
using namespace std;
int main22()
{
	int count=0;
	for(int i=0;i<=20;i++)
		for(int j=0;j<=33;j++)
			{
				if((100-i-j)%3==0&&(i*5+j*3+(100-i-j)/3==100))//雏鸡数量用前两个表示，简化很多计算
				{
					count++;
					cout<<count<<":cock="<<i<<" hen="<<j<<" chicken="<<(100-i-j)<<endl;
				}
			}
	return 0;
}



