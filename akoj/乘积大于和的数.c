#include<stdio.h>
void main()
{
    char c1,c2,c3;
    printf("输入一个字符，使用getche函数接收\n");
    c1=getche();
    printf("\n");
    printf("输入一个字符，使用getch函数接收\n");
    c2=getch();
    printf("\n");
    printf("输入一个字符，使用getchar函数接收\n");
    c3=getchar();
    printf("\n输入的这三个字符是：\n");
    putchar(c1);
     putchar(c2);
      putchar(c3);
      printf("\n");
}
