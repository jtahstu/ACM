#include<iostream>//结构体排序
#include<algorithm>
#include<cstdio>
using namespace std;
struct stu
{
    int ban;//班级号
    int xue;//学号
    int chen;//成绩
} a[100000+100];

bool cmp(const stu& a,const stu& b)//结构体排序
{
    if(a.chen==b.chen&&a.ban==b.ban)
        return a.xue<b.xue;
    if(a.chen==b.chen&&a.ban!=b.ban)
        return a.ban<b.ban;
    return a.chen>b.chen;
}

int main()
{
    int t,m,n,p=1,q,xun;
    cin>>t>>m;
    for(int i=1; i<=t; i++)//依次读取数据进结构体
    {
        scanf("%d",&n);
        for(int j=p; j<p+n; j++)// p用来累计人数和标记数组保存到的位置
        {
            scanf("%d",&q);
            a[j].chen=q;
            a[j].ban=i;
            a[j].xue=j-p+1;
        }
        p+=n;
    }
    sort(a+1,a+p,cmp);
    int b[100000+100]= {0},c=1;//用数组b来去除成绩重复，得到一个无重复的排好序的数组
    for(int i=1; i<p; i++)
    {
        if(a[i].chen!=a[i+1].chen)
            b[c++]=a[i].chen;
    }
    for(int i=1; i<=m; i++)
    {
        scanf("%d",&xun);//询问名次
        for(int j=1; j<p; j++)
        {
            if(a[j].chen==b[xun])//利用排好序的数组找到要输出的数据
                printf("%d %d\n",a[j].ban,a[j].xue);
        }
    }
    return 0;
}

