//============================================================================
// Name        : P51.cpp
// Author      : jtahstu
// Version     : 1.0 AC
// Copyright   : Your copyright notice 2015/1/31 22:29
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
		int l,m,a[10001]={0},b,c;
		cin>>l>>m;
		for(int i=0;i<m;i++){
			cin>>b>>c;
			for(int j=b;j<=c;j++)
				a[j]=1;
		}
		int count=0;
		for(int i=0;i<=l;i++)
			if(a[i]==0)
				count++;
		cout<<count<<endl;
	}
	return 0;
}
