#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    long long t,n;
	bool b=true;
    while(scanf("%lld",&t)!=EOF)
    {
		if(!b) printf("\n");
		b=0;
        map<long long,long long>m;
        set<long long>s;
        vector<long long>v;
        while(t--)
        {
            scanf("%lld",&n);
            if(s.count(n)==0)
            {
                s.insert(n);
                v.push_back(n);
                m[n]=1;
            }
            else m[n]++;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
            printf("%lld %lld\n",v[i],m[v[i]]);
    }
    return 0;
}
