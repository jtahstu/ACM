#include "iostream"//十进制转换成二进制
using namespace std;
void dec_bin(const int x)
{
	if (x/2>0)
	{
		dec_bin(x/2);
		cout<<x%2;
	}
	else cout<<x;
}
int main(int argc, char const *argv[])
{
	int data=0;
	cin>>data;
	dec_bin(data);
	cout<<endl;
	return 0;
}

#include<stdio.h>
bool b[11] = { 0 } ;
int main(void)
{
    int n , i;
    scanf("%d",&n);
    {
        for( i = 31 ; i >= 0 ; i -- )
            b[i] = n & 1 << i ;
        for( i = 31 ; b[i] == 0 ; i -- ) ;
        if(i < 0)
        {
            printf("0\n");
            continue;
        }
        for( ; i >= 0 ; i -- )
            printf("%d", b[i]);
        printf("\n");
    }
    return 0;
}


// int main(int argc, char const *argv[])//这个就正好把值颠倒过来了
// {
// 	int n;
// 	cin>>n;
// 	while(n)
// 	{
// 		cout<<n%2;
// 		n/=2;
// 	}
// 	cout<<endl;
// 	return 0;
// }
