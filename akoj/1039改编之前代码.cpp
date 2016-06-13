# include <stdio.h>
int c; //背包容量
int m; //物品数
int x[100];
int weight[100]; //物品重量
int price[100]; //物品价值
int bp=0;
int bA[100]; //当前最优解
int times=0;

void beibao(int n)
{
	int i,k;
    for (i=1; i<=n; i++)    //初始化
       x[i]=0;
    k=1;
    while (k>=1)
    {
	   times+=1;
       x[k]=x[k]+1;     //第k个物品放入背包

       if (x[k]<=2&& k==m)
	   {   //得到一个解，输出
          int currentWeight=0; //当前重量
		  int currentPrice=0; //当前价值
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
           k=k+1;      //放置下一个物品
       else
	   {
        x[k]=0;     //拿走第k个物品，重置x[k]，回溯
        k=k-1;
	   }
    }
 }

int main()
{
	int i;
	/*输入部分*/
    printf("请输入物品的数量:\n");
    scanf("%d",&m);
    printf("请输入背包的容量(能承受的重量):\n");
    scanf("%d",&c);
    printf("请依次输入%d个物品的重量:\n",m);
    for(i=1;i<=m;i++)
        scanf("%d",&weight[i]);
    printf("请依次输入%d个物品的价值:\n",m);
    for(i=1;i<=m;i++)
        scanf("%d",&price[i]);
   beibao(m);
   	printf("*******************************************************\n");
   	printf("\nthe best answer is {");
	for(i=1;i<m;++i)
		printf("%d,",bA[i]);
	printf("%d}\tthe price is %d\n",bA[i],bp);
	 printf("\n\n总共搜索结点数%d\n",times);
	 return 0;
 }

