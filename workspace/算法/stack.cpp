#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> a;
    for(int i=0;i<5;i++)
	{
		int n;
		cin>>n;
		a.push(n);
	}
    while( !a.empty() )
    {
        cout << a.top() << " ";
        a.pop();
    }

    return 0;
}
