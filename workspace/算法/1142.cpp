#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a,b,c[27],d[27];
        cin>>a>>b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        c[0]=a[0],d[0]=b[0];
        int count1=1,count2=1;
        for(int i=1; i<a.length(); i++)
            if(a[i]!=a[i-1])
                c[count1++]=a[i];
        for(int i=1; i<b.length(); i++)
            if(b[i]!=b[i-1])
                d[count2++]=b[i];
	if(count1!=count2)cout<<"No"<<endl;
	else
	{
		bool flag=true;
		for(int i=0;i<count1;i++)
			if(c[i]!=d[i])
		{
			flag=false;
			break;
		}
		if(flag)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
    }
    return 0;
}
