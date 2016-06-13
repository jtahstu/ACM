/*
 * 35.cpp
 * Created on: 2015年4月4日
 * Author: jtahstu
 */
//35委派任务
//某侦察队接到一项紧急任务，要求在A、B、C、D、E、F六个队员中尽可能多地挑若干人，但有以下限制条件：
//1)A和B两人中至少去一人；
//2)A和D不能一起去；
//3)A、E和F三人中要派两人去；
//4)B和C都去或都不去；
//5)C和D两人中去一个；
//6)若D不去，则E也不去。
//问应当让哪几个人去？
//
//*运行结果
//A will be assigned. (去)
//B will be assigned. (去)
//C will be assigned. (去)
//D will not be assigned. (不去)
//E will not be assigned. (不去)
//F will be assigned. (去)

#include<iostream>
#include<cstdio>
using namespace std;
int main35()
{
	for(int a=0;a<=1;a++)
		for(int b=0;b<=1;b++)
			for(int c=0;c<=1;c++)
				for(int d=0;d<=1;d++)
					for(int e=0;e<=1;e++)
						for(int f=0;f<=1;f++)
							if((a+b>=1)&&a+d<2&&a+e+f==2&&b==c&&c+d==1&&((d==0&&e==0)||d==1))//这个判断条件要看清，仔细理解
									cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<endl;//0表示不去，1表示去
	return 0;
}



