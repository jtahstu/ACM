#include<stdio.h>
void main()
{
    int i,j;
    int hun,ten,data;
    printf("½á¹ûÊÇ£º\n");
    for(i=100;i<=999;i++)
    {
        j=10;
        while(j*j<=i)
        {
            if(i==j*j)
            {
                hun=i/100;
                data=i-hun*100;
                ten=data/10;
                data=data-ten*10;
                if(hun==ten||hun==data||ten==data)
                    printf("%5d",i);
            }
            j++;
        }
    }
    printf("\n");
}
