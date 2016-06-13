#include "stdio.h"
int main(int argc, char const *argv[])
{
	int a,b,c;
	while(scanf("%d",&a)==1)
		{
        printf("%d\n",func(a) );
		}
	return 0;
}

int func(int year)
{
    if(year<4)
    {return 1;}
   else
   {return (func(year-3)+func(year-1));}
}
