//============================================================================
// Name        : P124.cpp
// Author      : jtahstu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;cin>>n;
	while(n--){
		int m,a[1001];
		cin>>m;
		for(int i=0;i<m;i++)
			cin>>a[i];
		sort(a,a+m);
		cout<<a[m/2]<<endl;
	}
	return 0;
}
