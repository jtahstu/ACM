# include <stdio.h>
int c; //��������
int m; //��Ʒ��
int x[100];
int weight[100]; //��Ʒ����
int price[100]; //��Ʒ��ֵ
int bp=0;
int bA[100]; //��ǰ���Ž�
int times=0;

void beibao(int n)
{
	int i,k;
    for (i=1; i<=n; i++)    //��ʼ��
       x[i]=0;
    k=1;
    while (k>=1)
    {
	   times+=1;
       x[k]=x[k]+1;     //��k����Ʒ���뱳��

       if (x[k]<=2&& k==m)
	   {   //�õ�һ���⣬���
          int currentWeight=0; //��ǰ����
		  int currentPrice=0; //��ǰ��ֵ
          for (i=1; i<=n; i++)
		  {
			   if(x[i]==1)
			   {
            	currentWeight += weight[i];
			    currentPrice += price[i];
			   }
		  }
		  if(currentWeight<=c)
		  {
              if(currentPrice>bp)
			 {
				bp=currentPrice;
				for (int j=1; j<=n; j++)
				{
					if(x[j]==2)
					   bA[j]=x[j]-2;
					else
						bA[j]=x[j];
				}
			 }
		  }
	   }
	   else if (x[k]<=2 && k<m)
           k=k+1;      //������һ����Ʒ
       else
	   {
        x[k]=0;     //���ߵ�k����Ʒ������x[k]������
        k=k-1;
	   }
    }
 }

int main()
{
	int i;
	/*���벿��*/
    printf("��������Ʒ������:\n");
    scanf("%d",&m);
    printf("�����뱳��������(�ܳ��ܵ�����):\n");
    scanf("%d",&c);
    printf("����������%d����Ʒ������:\n",m);
    for(i=1;i<=m;i++)
        scanf("%d",&weight[i]);
    printf("����������%d����Ʒ�ļ�ֵ:\n",m);
    for(i=1;i<=m;i++)
        scanf("%d",&price[i]);
   beibao(m);
   	printf("*******************************************************\n");
   	printf("\nthe best answer is {");
	for(i=1;i<m;++i)
		printf("%d,",bA[i]);
	printf("%d}\tthe price is %d\n",bA[i],bp);
	 printf("\n\n�ܹ����������%d\n",times);
	 return 0;
 }

