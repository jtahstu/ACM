/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1231
 * by jtahstu on 2015/2/8 7:00
 * ÄáÄ·²©ÞÈ£¨Nimm Game£©
 */

#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	while (cin >> a >> b >> c) {
		if ((a ^ b ^ c) == 0)
			cout << "thin" << endl;
		else
			cout << "fat" << endl;
	}
	return 0;
}
