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
    while(n)//这里既取模求出各个位，然后想加
    {
        a=n%10;
         sum+=a;
        n=n/10;//取出个位了，然后这个位就没用了，除10把最后一位去掉
    }
    if(m%sum==0)//如果可以整除
        printf("Lucky Word\n");
    else
        printf("No Answer\n");
        //system("1027.exe");
    return 0;
}

#include<stdio.h>
int f(int n)//求各个位数之和的函数
{
    if(n<10)
        return n;
    else
        return f(n/10)+(n%10);//n%10就取出了最后一位数，f(n/10)就把这个数除10后，继续调用这个函数，直到这个数小于10
}

int main()
{
    int n;
    scanf("%d",&n);
    if(n%f(n)==0)//如果可以整除
        printf("Lucky Word\n");
    else
        printf("No Answer\n");
    return 0;
}
