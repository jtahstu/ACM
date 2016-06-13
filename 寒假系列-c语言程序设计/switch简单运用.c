#include<stdio.h>
main()
{
    float num;
    char grade;
    scanf("%d",&num);
    if(num >=90) grade='A';
    else if(num >=80&&num <89) grade='B';
    else if(num >=70&&num <79) grade='C';
    else if(num >=60&&num <69) grade='D';
    else grade='E';
    printf("%c",grade);
    return 0;
    
}
