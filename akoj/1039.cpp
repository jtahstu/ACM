#include <stdio.h>
#include<iostream>
using namespace std;
int x[100],c,m,weight[100]; //��Ʒ����
int price[100],bp=0,bA[101];
void beibao(int n)
{
    int i,k;
    for (i=1; i<=n; i++)    //��ʼ��
        x[i]=0;
    k=1;
    while (k>=1){
        x[k]=x[k]+1;     //��k����Ʒ���뱳��
        if (x[k]<=2&& k==m){
            int currentWeight=0; //��ǰ����
            int currentPrice=0; //��ǰ��ֵ
            for (i=1; i<=n; i++){
                if(x[i]==1){
                    currentWeight += weight[i];
                    currentPrice += price[i];
                }
            }
            if(currentWeight<=c){
                if(currentPrice>bp){
                    bp=currentPrice;
                    for (int j=1; j<=n; j++){
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
        else{
            x[k]=0;     //���ߵ�k����Ʒ������x[k]������
            k=k-1;
        }
    }
}
int main()
{
    int i;
    cin>>m>>c;
    for(i=1; i<=m; i++)
        scanf("%d",&weight[i]);
    for(i=1; i<=m; i++)
        scanf("%d",&price[i]);
    beibao(m);
    cout<<bp<<endl;
    return 0;
}

