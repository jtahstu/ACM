/*
 * 25.cpp
 * Created on: 2015年4月3日
 * Author: jtahstu
 */
//25年龄几何
//张三、李四、王五、刘六的年龄成一等差数列，他们四人的年龄相加是26，相乘是880，求以他们的年龄为前4项的等差数列的前20项。
//
//*运行结果
//The series with equal difference are:
//2 5 8 11 14 17 20 23 26 29 32 35 38 41 44 47 50 53 56 59

#include<iostream>
#include<cstdio>
using namespace std;
int main25()
{
	bool flag=false;
	cout<<"The series with equal difference are:"<<endl;
	for(int i=1;i<=6;i++){
		if(flag)break;//如果有一个输出了，跳出循环
		for(int j=1;j<=6;j++)
		{
			if(i*4+ 6*j==26&&(i*(i+j)*(i+2*j)*(i+3*j)==880))
			{
				for(int x=0;x<20;x++)
					cout<<i+x*j<<" ";
				flag=true;//有结果了，跳出
				break;
			}
		}
	}
	cout<<endl;
	return 0;
}



