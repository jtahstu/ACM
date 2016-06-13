///*
// * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=721
// * by jtahstu on 2015/2/21 20:00
// */
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//void jt(char a,char b[],char c[])
//{
//	int p=0,q=0;
//	p=b[0],q=c[0];
//	if(b[0]=='A')p=40;
//	if(c[0]=='A')q=40;
//	if(b[0]=='J')p=60;
//	if(c[0]=='J')q=60;
//	if(b[0]=='Q')p=70;
//	if(c[0]=='Q')q=70;
//	if(b[0]=='K')p=80;
//	if(c[0]=='K')q=80;
//	if(b[0]=='1'&&b[1]=='0')
//		{p=55;if(b[2]==a)p+=100;}
//	if(c[0]=='1'&&c[1]=='0')
//		{q=55;if(c[2]==a)q+=100;}
//	if(b[1]==a)p+=100;
//	if(c[1]==a)q+=100;
//
//	if(p>q)cout<<"YES"<<endl;
//	else cout<<"NO"<<endl;
//}
//
//int main() {
//	int n;
//	cin>>n;
//	while(n--)
//	{
//		char a,b[3],c[3];
//		cin>>a;
//		cin>>b>>c;
//		jt(a,b,c);
//	}
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
inline int tonumber(char c);
int main() {

	int n, sum1, sum2;
	string s1, s2;
	char c;
	cin >> n;
	while (n--) {
		sum1 = sum2 = 0;
		cin >> c; //获取王牌花色
		cin >> s1 >> s2;
		if (s1[s1.length() - 1] == c)
			sum1 += 100;
		if (s2[s2.length() - 1] == c)
			sum2 += 100;
		if (s1.length() == 3)
			sum1 += 10;
		else
			sum1 += tonumber(s1[0]);
		if (s2.length() == 3)
			sum2 += 10;
		else
			sum2 += tonumber(s2[0]);
		if (sum1 > sum2)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;

}
inline int tonumber(char c) {
	if (c >= '2' && c <= '9')
		return c - '0';
	else if (c == 'A')
		return 1;
	else if (c == 'J')
		return 11;
	else if (c == 'Q')
		return 12;
	else
		return 13;
}
