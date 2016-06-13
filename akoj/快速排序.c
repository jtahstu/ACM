#include<stdio.h>
void binary_search(int key,int a[],int n)
{
    int low,high,mid,count=0,count1=0;
    low=0;
    high=n-1;
    while(low<high)
    {
        count++;
        mid=(low+high)/2;
        if(key<a[mid])
            high=mid-1;
        else if(key>a[mid])
            low=mid+1;
        else if(key==a[mid])
        {
            printf("查找成功！\n查找%d次！a[%d]=%d",count,mid,key);
            count1++;
            break;
        }
    }
    if(count1==0)
        printf("查找失败！");
}

void main()
{
    int i,key,a[100],n;
    printf("请输入数组长度：\n");
    scanf("%d",&n);
    printf("请输入数组元素：\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("请输入你想查找的元素：\n");
    scanf("%d",&key);
    binary_search(key,a,n);
    printf("\n");
}






