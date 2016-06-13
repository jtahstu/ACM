/*
 * 4 -1 3 1 1
 * 2 19 17
 * 5 -645 952 -1488 -5456 -9342
 * -1
Sum of #1 is 4
Sum of #2 is 36
Sum of #3 is -15979
 */

#include <iostream>
using namespace std;

int main() {
	int count=0,n;
	while(cin>>n)
	  {
	    int sum=0,m;
	    if(n<=0)break;
	    while(n--)
	      {
	        cin>>m;
	        sum+=m;
	      }
	    count++;
	    cout<<"Sum of #"<<count<<" is "<<sum<<endl;
	  }
	return 0;
}
