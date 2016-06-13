##include "stdio.h"
int main(int argc, char const *argv[])
{
	int a,b,c;
	while(scanf(%d,&a)==1)
		{		
				printf("%d\n",func(a) );
				/* code */
		}
	return 0;
}

int func(int year)  
{  
    if(year<4) //只有1头牛时 头三年只有原本的母牛1头   
    {  
        return 1;  
    }  
   else    
   {  
    // func(year-3) 是老母牛1头 因为前三年只有1头母牛   func(year-1)第二代牛数量没1年产1头  
      return (func(year-3)+func(year-1));   
   }  
}  