#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    int count=1;
    while(cin>>a)
    {
        if(a=="I")
        {
            cout<<"Case "<<count<<": 1"<<endl;
            count++;
        }
        if(a=="II")
        {
            cout<<"Case "<<count<<": 2"<<endl;
            count++;
        }
        if(a=="III")
        {
            cout<<"Case "<<count<<": 3"<<endl;
            count++;
        }
        if(a=="IV")
        {
            cout<<"Case "<<count<<": 4"<<endl;
            count++;
        }
        if(a=="V")
        {
            cout<<"Case "<<count<<": 5"<<endl;
            count++;
        }
        if(a=="VI")
        {
            cout<<"Case "<<count<<": 6"<<endl;
            count++;
        }
        if(a=="VII")
        {
            cout<<"Case "<<count<<": 7"<<endl;
            count++;
        }
        if(a=="VIII")
        {
            cout<<"Case "<<count<<": 8"<<endl;
            count++;
        }
        if(a=="IX")
        {
            cout<<"Case "<<count<<": 9"<<endl;
            count++;
        }
        if(a=="X")
        {
            cout<<"Case "<<count<<": 10"<<endl;
            count++;
        }
        if(a=="XI")
        {
            cout<<"Case "<<count<<": 11"<<endl;
            count++;
        }
        if(a=="XII")
        {
            cout<<"Case "<<count<<": 12"<<endl;
            count++;
        }
    }

    return 0;
}

#include<map>
#include<iostream>
#include<string>
using namespace std;
map<string,int>m;
int main()
{
	m["I"]=1;
	m["II"]=2;
	m["III"]=3;
	m["IV"]=4;
	m["V"]=5;
	m["VI"]=6;
	m["VII"]=7;
	m["VIII"]=8;
	m["IX"]=9;
	m["X"]=10;
	m["XI"]=11;
	m["XII"]=12;
	string s;
	int c=0;
	while(cin>>s)
		cout<<"Case "<<++c<<": "<<m[s]<<endl;
	return 0;
}
