/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1045
 * by jtahstu on 2015/3/26 15:00
 */
#include<iostream>
#include<set>
#include <algorithm>
using namespace std;
int main1045() {
	set<int> s;
	int n, a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		s.insert(a);
	}
	set<int>::iterator it;
	for (it = s.begin(); it != s.end(); it++)
		cout << *it << endl;
	return 0;
}

