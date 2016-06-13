#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n, s = 0;
	while (cin >> n)
	{
		if (n == 0)
			break;
		for (int i = 2; i <= n; i++)
			s = (s + 2) % i;
		cout << s + 1 << endl;
	}
}
