#include <iostream>
#include <map>
#include <iterator>
#include<algorithm>
using namespace std;

int main() {
    int n,i=1;
	map<int, int> count;
	while(cin>>n)
    {
       if(count[n])continue;
        count[n]=i++;
    }
    map<int,int>::iterator it;
    for(it=count.begin();it!=count.end();it++)
        cout<<it->first<<":"<<it->second<<endl;
	return 0;
}

