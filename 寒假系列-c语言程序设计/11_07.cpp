#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdio>
using namespace std;
const double PI = 3.141592654;
int main ( )
{
	int h , m;
	while ( scanf("%d:%d",&h,&m)==2)
	{
		if ( h == 0 && m == 0 )break;
		double a , b;
		if(h==12) h=0;
		a = ( 12 - h - m / 60 ) * 360 / 12;
		b = ( m / 60 )*360;
		if ( a + b <= 180 )cout << setiosflags ( ios::fixed ) << setprecision ( 3 ) << a + b << endl;
		else if (180<a+b&& a + b <= 360 )cout << setiosflags ( ios::fixed ) << setprecision ( 3 ) <<360- a - b << endl;
		else cout << setiosflags ( ios::fixed ) << setprecision ( 3 ) << a + b-360 << endl;
	}
}
