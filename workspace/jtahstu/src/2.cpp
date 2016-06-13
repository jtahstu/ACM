#include<iostream>
#include<vector>
using namespace std;

void test()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	vector<int>::const_iterator it = v.begin();
	while (it != v.end())
		cout << 2*(*it++) << endl;
}
int mai()
{
	test();
	return 0;
}
