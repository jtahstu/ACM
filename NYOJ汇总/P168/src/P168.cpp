//============================================================================
// Name        : P168.cpp
// Author      : jtahstu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
		int m,a[200]={0},b,c,d;//计算出每天的最大人数，即房间数，保存
		cin>>m;
		while(m--){
			cin>>b>>c>>d;
			for(int i=c;i<c+d;i++)//是<,第c+d天不住的
				a[i]+=b;
		}
		int max=a[1];
		for(int i=2;i<181;i++)
			if(a[i]>max)
				max=a[i];
		cout<<max<<endl;
	}
	return 0;
}
