#include<iostream>//�ṹ������
#include<algorithm>
#include<cstdio>
using namespace std;
struct stu
{
    int ban;//�༶��
    int xue;//ѧ��
    int chen;//�ɼ�
} a[100000+100];

bool cmp(const stu& a,const stu& b)//�ṹ������
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
    for(int i=1; i<=t; i++)//���ζ�ȡ���ݽ��ṹ��
    {
        scanf("%d",&n);
        for(int j=p; j<p+n; j++)// p�����ۼ������ͱ�����鱣�浽��λ��
        {
            scanf("%d",&q);
            a[j].chen=q;
            a[j].ban=i;
            a[j].xue=j-p+1;
        }
        p+=n;
    }
    sort(a+1,a+p,cmp);
    int b[100000+100]= {0},c=1;//������b��ȥ���ɼ��ظ����õ�һ�����ظ����ź��������
    for(int i=1; i<p; i++)
    {
        if(a[i].chen!=a[i+1].chen)
            b[c++]=a[i].chen;
    }
    for(int i=1; i<=m; i++)
    {
        scanf("%d",&xun);//ѯ������
        for(int j=1; j<p; j++)
        {
            if(a[j].chen==b[xun])//�����ź���������ҵ�Ҫ���������
                printf("%d %d\n",a[j].ban,a[j].xue);
        }
    }
    return 0;
}

