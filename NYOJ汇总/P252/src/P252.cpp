//============================================================================
// Name        : P252.cpp
// Author      : jtahstu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a[41];
	a[2]=3,a[3]=5;
	for(int i=4;i<41;i++)
		a[i]=a[i-1]+a[i-2];
	int n,tt;
	cin>>n;
	while(n--){
		cin>>tt;
		cout<<a[tt]<<endl;
	}
	return 0;
}
