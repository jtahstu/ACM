#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--)
	  {
	    int m,res=1;
	    cin>>m;
	    cout<<((res<<m)-1)<<endl;
	  }
	return 0;
}
