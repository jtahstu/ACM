#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
        int m;
        string s,a;
        cin>>m;
        for(int i=0;i<m;i++)
        {
        	cin>>a;
        	s+=a;
        }
        cout<<s<<endl;
        while(next_permutation(s.begin(),s.end()))
            cout<<s<<endl;

    return 0;
 }
