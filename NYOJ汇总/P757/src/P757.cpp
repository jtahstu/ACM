
#include<iostream>
#include<algorithm>
using namespace std;
struct work
{
	int final;
	int score;
} a[2001];
int main()
{
	int n, i, j, sum;
	while (cin >> n)
	{
		int b[2001] =
		{ 0 };
		sum = 0;
		for (i = 0; i < n; ++i)
			cin >> a[i].final >> a[i].score;
		sort(a, a + n);
		for (i = 0; i < n; ++i)
		{
			for (j = a[i].final; j > 0; j--)
			{
				if (b[j] == 0)
				{
					b[j] = a[i].score;
					break;
				}
			}
			if (j == 0)
				sum += a[i].score;
		}
		cout << sum << endl;
	}
	return 0;

}
bool operator<(const work &a, const work &b)
{
	return a.score >= b.score;
}
