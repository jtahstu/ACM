#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main() {
    int jt=0;
    string n;
	map<string, int> count;
	while(cin>>n)
        count[n]++,jt++;
    map<string,int>::iterator it=count.begin();
    cout<<jt<<endl;
    for(it=count.begin();it!=count.end();it++)
        cout<<it->first<<":"<<it->second<<endl;
	return 0;
}
