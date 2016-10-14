/**
 * Created on: 2016年09月21日 20:46:41
 * Author: jtahstu
 * Copyright (c) 2016, tool.usta.wiki , All Rights Reserved.
 * 其他表示二维数组每行起始地址的方式
 */
#include <stdio.h>

int main()
{
   	int arr[4][4]={0,1,2,3,4,5,6,7,8,9,10,1,12,13,14,15};
   	int i;
   	for (int i = 0; i < 4; i++) {
   	    printf("第%d行的起始地址为：%d\n",i+1,arr+i);
   	    printf("第%d行的起始地址为：%d\n",i+1,arr[i]);
   	    printf("第%d行的起始地址为：%d\n",i+1,*(arr+i));
   	    printf("第%d行的起始地址为：%d\n\n",i+1,&arr[i]);
   	}
   	return 0;
}
