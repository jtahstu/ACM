/*#include <stdio.h>
#include <stdlib.h>
//��ӡ����
int main()
{
    int i,j,k,n;  //j���ƿո��λ�ã�K����*��λ��
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
            printf(" ");
        for(k=n-1-i;k<i+4;k++)
            printf("*");
        printf("\n");
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<i+1;j++)
            printf(" ");
        for(k=i+1;k<6-i;k++)
            printf("*");
        printf("\n");
    }
    return 0;
}*/
#include<stdio.h>
main()
{
    int i,j,n;
    while(scanf("%d",&n)==1){
    for(i=1; i<=n; i++) //�ȴ�ӡ�ϰ벿�֣���������������5����ô����ͻ���ʾ3�У��Դ�����
    {

        for(j=1; j<=n-i; j++) //��ӡ�ո�
        {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++) //��ӡ����
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1; i>=1; i--) //n�Ѿ���ȷ�ˣ���ӡ�°벿�֣����nΪ5����ô�°벿����ʾ���У��Դ�����
    {
        for(j=1; j<=n-i; j++) //��ӡ�ո�
        {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++) //��ӡ����
        {
            printf("*");
        }
        printf("\n");

    }}
    return 0;
}

