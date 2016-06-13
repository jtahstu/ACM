/*
 * 36.cpp
 * Created on: 2015年4月4日
 * Author: jtahstu
 */
//36谁在说谎
//张三说李四在说谎，李四说王五在说谎，王五说张三和李四都在说谎。现在问：这三人中到底谁说的是真话，谁说的是假话？
//
//*运行结果
//Zhangsan told a lie (张三说假话)
//Lisi told a truch. (李四说真话)
//Wangwu told a lie. (王五说假话)

#include<iostream>
#include<cstdio>
using namespace std;
int main36()
{
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			for(int k=0;k<2;k++)

					cout<<i<<j<<k<<endl;
	return 0;
}



