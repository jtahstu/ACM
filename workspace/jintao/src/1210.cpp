/*
 * 1210.cpp
 *
 *  Created on: 2015Äê3ÔÂ30ÈÕ
 *      Author: Administrator
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main1210() {
	int n;
	vector<int> a;
	while (cin >> n) {
		vector<int>::iterator it = find(a.begin(), a.end(), n);
		if (it == a.end())
			a.push_back(n);
	}
	vector<int>::iterator jt;
	cout<<a[0];
	for (jt = a.begin()+1; jt < a.end(); jt++)
		cout << " "<<*jt ;
	cout<<endl;
	return 0;
}
