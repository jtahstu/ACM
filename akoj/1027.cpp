//#include<iostream>
//using namespace std;
//int main()
//{
//    int n,sum=0,a=0;
//    cin>>n;
//    int m=n;
//    while(n)
//    {
//        a=n%10;
//         sum+=a;
//        n=n/10;
//    }
//    if(m%sum==0)
//        cout<<"Lucky Word"<<endl;
//    else
//        cout<<"No Answer"<<endl;
//    return 0;
//}



#include<stdio.h>
#include<cstdlib>
int main()
{
    int n,sum=0,a=0;
    scanf("%d",&n);
    int m=n;
    while(n)//�����ȡģ�������λ��Ȼ�����
    {
        a=n%10;
         sum+=a;
        n=n/10;//ȡ����λ�ˣ�Ȼ�����λ��û���ˣ���10�����һλȥ��
    }
    if(m%sum==0)//�����������
        printf("Lucky Word\n");
    else
        printf("No Answer\n");
        //system("1027.exe");
    return 0;
}

#include<stdio.h>
int f(int n)//�����λ��֮�͵ĺ���
{
    if(n<10)
        return n;
    else
        return f(n/10)+(n%10);//n%10��ȡ�������һλ����f(n/10)�Ͱ��������10�󣬼����������������ֱ�������С��10
}

int main()
{
    int n;
    scanf("%d",&n);
    if(n%f(n)==0)//�����������
        printf("Lucky Word\n");
    else
        printf("No Answer\n");
    return 0;
}
