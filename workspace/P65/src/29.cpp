/*
 * 29.cpp
 * Created on: 2015年4月3日
 * Author: jtahstu
 */
//29分数比较
//比较两个分数的大小。
//
//*运行结果
//输入： 4/5，6/7 输出： 4/5<6/7
//输入： 8/4，16/32 输出： 8/4>16/32
//输入：16/32，4/8 输出： 16/32=4/8

#include<iostream>
#include<cstdio>
using namespace std;
int gcd29(int a,int b){//最大公约数
	return b==0?a:gcd29(b,a%b);
}
int lcm29(int a,int b){//最小公倍数
	return a/gcd29(a,b)*b;
}

int main29()
{
	int x1,y1,x2,y2;
	while(~scanf("%d/%d %d/%d",&x1,&y1,&x2,&y2)){
		if(x1*(lcm29(y2,y1)/y1)>x2*(lcm29(y1,y2))/y2)
			cout<<">"<<endl;
		else if(x1*(lcm29(y2,y1)/y1)<x2*(lcm29(y1,y2))/y2)
			cout<<"<"<<endl;
		else
			cout<<"="<<endl;
	}
	return 0;
}



