/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1084
 * by jtahstu on 2015/3/26 22:00
 */
#include<iostream>
#include<string>
using namespace std;
int main22() {
	int s, a;
	while (cin >> s >> a) {
		int count = 0;
		int s1 = s.size(), a1 = a.size();
		for (int i = 0; i <= s1 - a1; i++) {
			int b = s.substr(i, a1);
			if (b == a)
				count++;
		}
		cout << count << endl;
	}
	return 0;
}
