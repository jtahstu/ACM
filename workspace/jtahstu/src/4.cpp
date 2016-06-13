#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main4()
{
	vector<int> a;
	int n;
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		a.push_back(n);
	}
	sort(a.begin(),a.end());
	for(int i=0;i<5;i++)
		cout<<a[i]<<" ";
	return 0;
}
