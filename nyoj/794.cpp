#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    long long n,m;
    scanf("%lld%lld",&n,&m);
    for(long long i=1; i<=n; i++) {
        long long sum=0;
        for(long long j=i; j<=n; j++) {
            sum=(i+j)*(j-i+1)/2;
            if(sum==m) {
                printf("[%lld,%lld]\n",i,j);
                break;
            }
            if(sum>m)break;
        }
    }
    return 0;
}
/*
����������˼�����������......��������ac��
��ѧ�����Ͳ�������  ��Ҫ�������õ�c�� ͻȻ�������Ӳ������ˡ���
���еĵȲ�����a,a+1,a+2,....a+n;
���Ұ�b=a+n;
��2*s=(b-a+1)*(a+b);
��x=b-a+1,y=a+b;
���a=(x+y-1)/2,b=(y-x+1)/2;
Ȼ��x��1---sqrt(2*s)���ж�2*s�ܷ�����x���������x+y-1�ܱ�2������
�͵õ���a,b��ֵ��
������ϣ�*/
#include <stdio.h>
#include <math.h>
int main() {
    long long n,m,y,x;
    scanf("%lld %lld",&n,&m);
    for(x=sqrt(2*m); x>=1; x--) {
        if(2*m%x==0) {
            y=2*m/x;
            if((x+y-1)%2==0)
                printf("[%lld,%lld]\n",(y-x+1)/2,(x+y-1)/2);
        }
    }
    return 0;
}
