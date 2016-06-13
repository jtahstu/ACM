//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    while(n--)
//    {
//        int m;
//        cin>>m;
//        int a[100001]={0},count=0;
//        for(int i=0;i<m;i++)
//            cin>>a[i];
//        for(int i=1;i<m;i++)
//            if(a[i]>a[i-1])
//            count++;
//        cout<<count<<endl;
//    }
//    return 0;
//}
#include<stdio.h>
int a[1000005],temp[1000005];
long long sum;
void merge(int l ,int mid,int r)
{
    int i = l, j = mid+1,k = l;
    while(i <= mid && j <= r)
    {
        if(a[i] <= a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
            sum += mid - i+1;
        }

    }
    while(i <= mid) temp[k++] = a[i++];
    while(j <= r) temp[k++] = a[j++];
    for(i = l; i <= r ; i++)
        a[i] = temp[i];
}
void msort(int l, int r)
{
    if(l == r) return ;
    int mid = (l + r)/2;
    msort(l,mid);
    msort(mid+1,r);
    merge(l,mid,r);
}

int main()
{
    int i,n,T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(i = 0; i < n; i ++)
            scanf("%d",&a[i]);
        sum = 0;
        msort(0,n - 1);
        printf("%lld\n",sum);
    }
    return 0;
}
