/**
 * Project Name: Smartoj 
 * File Name: P1083.cpp
 * Created on: 2015年4月21日 下午9:24:03
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int main1083() {//WA 没看出什么问题
	char a[100];
	while (gets(a)) {
		if (a == "ENDOFINPUT")
			break;
		getchar();
		char s[205];
		gets(s);
		int len = strlen(s);
		for (int i = 0; i < len; i++) {
			if (s[i] >= 'A' && s[i] <= 'E')
				s[i] = s[i] + 21;
			if (s[i] >= 'F' && s[i] <= 'Z')
				s[i] = s[i] - 5;
		}

		for (int i = 0; i < len; i++) {
			cout << s[i];
		}
		cout << endl;
		cin >> a;
	}
	return 0;
}
#include <iostream>//AC
#include <string>

using namespace std;

string encrypt(string str)
{
        for(int i=0;i<str.size();i++)
        {
                if(str[i]>='A'&&str[i]<='Z')
                        str[i]=(str[i]-44)%26+65;
        }
        return str;
}

int main2()
{
        string str,tmp;
        while(cin>>tmp)
        {
                if(tmp=="ENDOFINPUT")break;
                cin.ignore();
                getline(cin,str);
                str=encrypt(str);
                cout<<str<<endl;
                cin>>tmp;
        }
        return 0;
}

