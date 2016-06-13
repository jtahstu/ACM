#include<cstdio>//have some problem , 看以后能不能检查出来 ， 再修改
#include<iostream>
#include<cstdlib>
using namespace std;
int gcd(int a,int b)
{
    if(a<b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    if(a%b == 0)
        return abs(b);
    else return gcd(b,a%b);
}

int main()
{
    int a,b,c,d;
    char o;
    while(~scanf("%d/%d%c%d/%d",&b,&a,&o,&d,&c))
    {
        int m;
        if(o=='-'&&b*c-a*d==0)
        {cout<<"0"<<endl;continue;}//为零要首先判断
        if(o=='+')m=gcd(a*c,b*c+a*d);
        else m=gcd(a*c,b*c-a*d);

         if(a*c/m==1)
            cout<<(b*c+a*d)/m<<endl;
        else if(o=='+') cout<<((b*c+a*d)/m)<<"/"<<(a*c/m)<<endl;//两种情况
        else cout<<((b*c-a*d)/m)<<"/"<<(a*c/m)<<endl;
    }
    return 0;
}

//#include <iostream>
//#include<cstdlib>
//using namespace std;
//int yinshu(int x,int y)
//{
//    if(x<y)
//    {
//        int tmp;
//        tmp = x;
//        x = y;
//        y = tmp;
//    }
//    if(x%y == 0)
//        return abs(y);
//    else
//        return yinshu(y,x%y);
//}
//int main(void)
//{
//    int a,b,c,d;
//    char optr,num;
//    while(cin >> a >> num >> b >> optr >> c >> num >> d)
//    {
//        int x,y;
//        switch(optr)
//        {
//        case '+':
//        {
//            x = a*d+b*c;
//            y = b*d;
//            break;
//        }
//        case '-':
//        {
//            x = a*d-b*c;
//            y = b*d;
//            break;
//        }
//        }
//        if(x == 0)
//            cout << 0 << endl;
//        else if(y/yinshu(x,y) == 1)
//            cout << x/yinshu(x,y) << endl;
//        else
//            cout << x/yinshu(x,y) << "/" << y/yinshu(x,y) << endl;
//    }
//    return 0;
//}
//
//#include<stdio.h>
//char str[20];
//int Gcd(int m,int n)
//{
//	if (m==0) return n;
//	return Gcd(n%m,m);
//}
//int main()
//{
//	int fz,fm,gcd;
//	while(scanf("%s",str)!=EOF)
//	{
//		if(str[3]=='-')
//			fz=(str[0]-'0')*(str[6]-'0')-(str[2]-'0')*(str[4]-'0');
//		else fz=(str[0]-'0')*(str[6]-'0')+(str[2]-'0')*(str[4]-'0');
//		if(fz)
//		{
//			fm=(str[2]-'0')*(str[6]-'0');
//			gcd=Gcd(fz,fm);
//			if(gcd<0) gcd=-gcd;
//			if(fm/gcd==1) printf("%d\n",fz/gcd);
//			else printf("%d/%d\n",fz/gcd,fm/gcd);
//		}
//		else puts("0");
//	}
//}
