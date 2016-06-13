#include "iostream"//字符串处理
#include "string.h"
using namespace std;
int main(int argc, char const *argv[])
{
	char a[100];
	cin>>a;
	cout<<strupr(a)<<endl;//小写转换成大写
	cout<<strlwr(a)<<endl;//大写转换成小写
	return 0;
}
