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
                        input+='A'-'a';             //���д��ĸ
                    word[count][clum]=input;
                    clum++;
                    if(flag==0) flag=1;  //һ�����ʵ�һ�����д������ԭ��
                }
                else
                {
                    if(flag==1)
                        //���������ĸ��������������������ı���ո�ʵ��ֻ��һ��
                    {
                        count++;
                        clum=0;
                        flag=0;
                    }
                }
            }
            for(i=0; i<count-1; i++)
                printf("%s ",word[i]);
                        //���ʵ������һ������һ�����������������������õ���ά�����ԭ��
            printf("%s.\n",word[i]);
        }
    }
    return 0;
}

