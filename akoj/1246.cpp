#include<stdio.h>
#include<string.h>
int main()
{
    char input;
    int n;
    while(scanf("%d",&n),n)
    {
        getchar();
        while(n--)
        {
            char word[100][20]= {NULL};
            int i,count=0,clum=0,flag=0;
            while((input=getchar())!='\n')
            {
                if(((input>='a')&&(input<='z'))||((input>='A')&&(input<='Z')))
                {
                    if((flag==0)&&((input>='a')&&(input<='z')))
                        input+='A'-'a';             //变大写字母
                    word[count][clum]=input;
                    clum++;
                    if(flag==0) flag=1;  //一个单词第一个变大写，后面原样
                }
                else
                {
                    if(flag==1)
                        //如果不是字母，重新来，如果是连续的标点或空格，实际只算一次
                    {
                        count++;
                        clum=0;
                        flag=0;
                    }
                }
            }
            for(i=0; i<count-1; i++)
                printf("%s ",word[i]);
                        //输出实际上是一个单词一个单词在输出，这就是上面用到二维数组的原因
            printf("%s.\n",word[i]);
        }
    }
    return 0;
}

