/**
 * Created on: 2016年09月21日 20:24:58
 * Author: jtahstu
 * Copyright (c) 2016, tool.usta.wiki , All Rights Reserved.
 * 作用域
 */
#include <stdio.h>

void fun(){
    int a=3,b;
    printf("fun()函数里面的a的值为：%d\n",a);
    return ;
}

int main()
{
   	int a=0,b;
   	{
   	    int a=1;
   	    printf("main()函数里面被大括号封装的a的值为：%d\n",a);
   	}
   	fun();
   	printf("mian()函数里面的a的值为:%d\n",a);
   	return 0;
}
