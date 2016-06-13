#include<stdio.h>
void main()
{
    int i;
    for(i=100;i<1000;i++)
        if(i%2==1&&i%3==2&&i%5==4&&i%6==5&&i%7==0)
        printf("½×ÌÝÊýÊÇ£º%d\n",i);
}
