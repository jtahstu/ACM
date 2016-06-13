#include <stdio.h>
int main(void)
{
    int i,j,k,n;
    int a[21][21]= {0};
    while(scanf("%d",&n)==1&&1<=n&&n<=20)
    {
        int base=1;
        for(k=0; k<n/2; k++)   //n/2为矩阵的矩形数目
        {
            for(i=k; i<=n-1-k; i++) //第一区块
                a[k][i]=base++;;
            for(j=k+1; j<n-1-k; j++) //第二区块
                a[j][n-1-k]=base++;
            for(i=n-1-k; i>k; i--) //第三区块
                a[n-1-k][i]=base++;
            for(j=n-1-k; j>k; j--) //第四区块
                a[j][k]=base++;
            if(n%2==1)
                a[(n-1)/2][(n-1)/2]=base;//为基数是奇数的矩阵的中心点进行赋值
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

