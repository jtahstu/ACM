/**
 * Created on: 2016年09月21日 20:31:59
 * Author: Guest
 * Copyright (c) 2016, tool.usta.wiki , All Rights Reserved.
 * 静态局部变量
 */
#include <stdio.h>

void print(){
    static int a=0;
    printf("静态局部变量a=%d\n",a++);
}

int main()
{
   	print();
   	print();
   	return 0;
}
