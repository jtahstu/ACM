#include<stdio.h>
int main()
{
    int i,s;
    scanf("%d",&s);
    char a[4];
    getchar();
    while(s--)
    {

        gets(a);
        char max=a[0];
        for(i=0; i<3; i++)
        {
            if(a[i]>max)
                max=a[i];
        }
        char min=max;
        for(i=0; i<3; i++)
        {
            if(a[i]<min)
                min=a[i];
        }
        char mid;
        for(i=0; i<3; i++)
        {
            if(a[i]!=max&&a[i]!=min)
                mid=a[i];
        }
        printf("%c %c %c\n",min,mid,max);
    }
    return 0;
}
