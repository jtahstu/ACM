/*
 * 26.cpp
 * Created on: 2015年4月3日
 * Author: jtahstu
 */
//26三色球问题
//若一个口袋中放有12个球，其中有3个红的。3个白的和6个黒的，问从中任取8个共有多少种不同的颜色搭配？
//
//*运行结果
//R W B
//1: 0 2 6
// 2: 0 3 5
// 3: 1 1 6
// 4: 1 2 5
// 5: 1 3 4
// 6: 2 0 6
// 7: 2 1 5
// 8: 2 2 4
// 9: 2 3 3
//10: 3 0 5
//11: 3 1 4
//12: 3 2 3
//13: 3 3 2

#include<iostream>
#include<cstdio>
using namespace std;
int main26()
{
	int count=0;
	cout<<"   R W B"<<endl;
	for(int i=0;i<=3;i++){
		for(int j=0;j<=3;j++){
			for(int k=0;k<=6;k++){
				if(i+j+k==8)
				{
					count++;
					cout<<count<<": "<<i<<" "<<j<<" "<<k<<endl;
				}
			}
		}
	}
	return 0;
}



