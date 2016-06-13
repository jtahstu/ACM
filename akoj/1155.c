#include<stdio.h>
#include<string.h>
int f[8]= {1,2,4,8,16,32,64,128};
int main()
{
    int i,sum,len,count,j;
    char str[35],ch[33];
    while(~scanf("%s",str))
    {
        len=strlen(str);
        if(len==32)
        {
            sum=(str[0]-'0')*f[7];
            for(i=1; str[i]!='\0'; i++)
            {
                if(i%8==0)
                {
                    printf("%d.",sum);
                    sum=(str[i]-'0')*f[7];
                }
                else
                {
                    sum+=(str[i]-'0')*f[7-(i%8)];
                }
            }
            printf("%d\n",sum);
        }
        else
        {
            ch[32]='\0';
            j=0;
            for(i=0; str[i]!='\0'; i++)
            {
                if((str[i]>='0')&&(str[i]<='9'))
                {
                    sum=0;
                    while((str[i]>='0')&&(str[i]<='9'))
                    {
                        sum=sum*10+(str[i]-'0');
                        i++;
                    }
                    count=j+7;
                    while(count>=j)
                    {
                        ch[count]=((sum%2)+'0');
                        sum=sum/2;
                        count--;
                    }
                    j=j+8;
                }
                if(str[i]=='\0')
                    break;
            }
            printf("%s\n",ch);
        }
    }
    return 0;
}
