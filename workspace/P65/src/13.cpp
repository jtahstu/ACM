/*
 * 13.cpp
 * Created on: 2015年4月2日
 * Author: jtahstu
 */
//13  4位反序数
//设N是一个四位数，它的9倍恰好是其反序数，求N。反序数就是将整数的数字倒过来形成的整数。例如：1234的反序数是4321。
//
//*运行结果
//The number satisfied states condition is:1089

#include<iostream>
#include<cstdio>
using namespace std;
int main13()
{
	int a;
	for(int i=1000;i<=1111;i++)//因为反序数也是四位且是n的9倍，则反序数不超过10000/9≈1111
	{
		a=i%10*1000+i/10%10*100+i/100%10*10+i/1000;
		if(a/i==9&&a%i==0)
			cout<<"The number satisfied states condition is:"<<i<<endl;
	}
	return 0;
}



