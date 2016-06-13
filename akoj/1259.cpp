#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cctype>
#include<cstdlib>
using namespace std;
int main() {
	string a, b;
	while (cin >> a >> b) {
		for (int i = 0; i < a.length(); i++)
			a[i] = tolower(a[i]);
		for (int i = 0; i < b.length(); i++)
			b[i] = tolower(b[i]);
		if (a == b)
			cout << "yes" << endl;
		else if (a.length() == b.length())
			cout << "no" << endl;
		else {
			if (a.length() < b.length())
				a.swap(b);
			bool flag = true;
			for (int i = 0; i < a.length(); i++) {
				string s = a;
				s.erase(s.begin() + i);//É¾³ýµ±Ç°×Ö·û£¬ÅÐ¶ÏÊÇ·ñÄÜ
				if (s == b) {
					cout << "yes" << endl;
					flag = false;
					break;
				}
			}
			if (flag)
				cout << "no" << endl;
		}
	}
	return 0;
}
