/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1092
 * by jtahstu on 2015/2/9 8:00
 */
#include <iostream>
using namespace std;

#define max 10
int n, m;
int k;
bool goal;
int road[max + 1];

int Fx(int t, int i) {
	if (i == 0)
		return t / 2;
	else
		return 3 * t;
}

bool Search(int dep, int N) {
	if (dep > k)
		return false;
	for (int i = 0; i < 2; i++) {
		int num = N;
		num = Fx(num, i);
		road[dep] = i;
		if (num == m || Search(dep + 1, num)) {
			goal = true;
			return true;
		}
	}
	return false;
}

void Procedure() {
	k = 1;
	goal = false;
	while (!Search(1, n)) {
		k++;
		if (k > max)
			break;
		if (goal)
			break;
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < max; i++) {
		road[i] = 0;
	}
	Procedure();
		cout << k << endl;
		for (int i = k; i>=1; i--) {
			if (road[i] == 0)cout << "g";
			else if (road[i] == 1)cout << "f";
		}
		cout<<endl;
}

