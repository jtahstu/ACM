#include <stdio.h>
int main(void)
{
    int i,j,k,n;
    int a[21][21]= {0};
    while(scanf("%d",&n)==1&&1<=n&&n<=20)
    {
        int base=1;
        for(k=0; k<n/2; k++)   //n/2Ϊ����ľ�����Ŀ
        {
            for(i=k; i<=n-1-k; i++) //��һ����
                a[k][i]=base++;;
            for(j=k+1; j<n-1-k; j++) //�ڶ�����
                a[j][n-1-k]=base++;
            for(i=n-1-k; i>k; i--) //��������
                a[n-1-k][i]=base++;
            for(j=n-1-k; j>k; j--) //��������
                a[j][k]=base++;
            if(n%2==1)
                a[(n-1)/2][(n-1)/2]=base;//Ϊ�����������ľ�������ĵ���и�ֵ
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
                printf("%d ",a[i][j]);
            printf("\n");
        }
    }
    return 0;
}

