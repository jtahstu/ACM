#include<stdio.h>
int isprime(int n)/*�ж�n�Ƿ�Ϊ�����ĺ���*/
{
    int j,x;
    for(j=2; j<n; j++)
        if(n%j==0)
        {
            x=0;
            break;
        }
        else
            x=1;
    return(x);
}
main()
{
    int n,i;
    printf("������һ����С��6��ż����\n");
    scanf("%d",&n);
    while(n<6||n%2!=0)
    {
        printf("���������������������룺\n");
        scanf("%d",&n);
    }
    for(i=3; i<(n/2); i++)
    {
        if(isprime(i)!=0)
            if(isprime(n-i)!=0)
                printf("%d����д��%d��%d֮�͡�\n",n,i,n-i);
    }
}
