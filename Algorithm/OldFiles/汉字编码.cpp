#include<stdio.h>
int main()
{
    printf("《%c%c",192,241);
    printf("%c%c",210,199);
    printf("%c%c",214,174);
    printf("%c%c》",176,238);
    printf("\n");
}
int q,w;
    int count=0,count1=175;
    printf("line 175:");
    for(q=16; q<=87; q++)
    {
        for(w=1; w<=94; w++)
        {

            printf("%c%c", q+160,w+160);
            count++;
            if(count%94==0)
            {
                count1++;
                printf("\nline %d:",count1);
            }
        }
    }
