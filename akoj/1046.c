#include "stdio.h"
main()
{
 char s[81],c;
 int i,num=0,word=0;
 printf("请输入一行英文:\n");
 gets(s);
 for(i=0;(c=s[i])!='\0';i++)//判断句子是否到未
 if(c==' ') word=0;//是空格就为0
  else if(word==0)//不是空格就判断之前有没有空格
    {
      word=1;//复位用来判断空格是否存在的开关
      num++;//如果之前有空格，单词数加1
    }
 printf("本行中共有%d个单词.\n",num);
}
