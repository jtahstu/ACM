#include "stdio.h"
#include<malloc.h>
#define N 1001
int main()
{
    int i,j,m,n,k=0,t=0,p=0;
    int s[N]= {0},A[N],B[N];
    int** C;
    C = (int **)malloc(N*sizeof(int *));
    for(i = 0; i < N; i ++)
        C[i] = (int*)malloc(N*sizeof(int));
    scanf("%d%d",&n,&m);
    while(n!=0&&m!=0)
    {
        for(i=0; i<n; i++)
            scanf("%d",&A[i]);
        for(j=0; j<m; j++)
            scanf("%d",&B[j]);
        i=0;
        j=0;
        while(i<n&&j<m)
        {
            if(A[i]==B[j])
            {
                C[k][p++]=A[i];  //��C[][]�洢��ͬ���Ը�
                s[t]++;    //��s[]�洢��ͬ�Ը�ĸ���
                i++;
                j++;
            }
            if(A[i]>B[j])
                j++;
            else i++;
        }
        t++;
        k++;
        p=0;
        scanf("%d%d",&n,&m);
    }
    for(i=0; i<t; i++)
    {
        if(s[i]>n/2)
            printf("������Ů�����㲻�ʺ�������ʺ���ACM��\n");
        if(s[i]==0)
            printf("����û��Ů����Ը�����һ��ؼ�����~~\n");
        else
        {
            printf("�������ˣ����һؼ�����ȥ�ɣ�\n");
            // printf("%d\n",s[i]);
            /* p=0;
             while(p<s[i])
             {
              printf("%d",C[i][p]);
              p++;
             }
             printf("\n");
            }
            }
            for(i = 0; i < N; i ++)
            free((void*)C[i]);
            free((void*)C);*/
        }
    }
}
