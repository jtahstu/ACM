#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n,a,b,i,j;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		cout<<(a+b)*(a+b+1)/2+a+1<<endl;
	}
	return 0;
}/*1 3 6 10 15 ..
2 5 9 14 ..
4 8 13 ..
7 12 ..
11 ..
..*/
