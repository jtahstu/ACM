/*字母小游戏
时间限制：1000 ms  |  内存限制：65535 KB

描述
    给你一个乱序的字符串,里面包含有小写字母(a--z)以及一些特殊符号，请你找出所给字符串里面所有的小写字母的个数， 拿这个数对26取余，输出取余后的数字在子母表中对应的小写字母(0对应z,1对应a，2对应b....25对应y)。

输入
    第一行是一个整数n(1<n<1000)表示接下来有n行的字符串m(1<m<200)需要输入
输出
    输出对应的小写字母 每个小写字母单独占一行
样例输入

    2
    asdasl+%$^&ksdhkjhjksd
    adklf&(%^(alkha

样例输出

    q
    j
*/
#include "stdio.h"
#include "string.h"
#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    char a;
    //freopen("input.txt","r",stdin);
    cin>>n;
    getchar();
    while(n--)
    {
       int number=0;  
       while(scanf("%c",&a),a!='\n')
        {
            if (a>='a'&&a<='z')
                number++;
        }
        if (number%26==0)
            printf("z\n");
        else
            printf("%c\n",'a'+number%26-1);
    }
    return 0;
}

/*#include<stdio.h>
#include<string.h>
int main()
{
    char a[200];
    int t,i,k,x;
    scanf("%d",&t);
    getchar(); //清除换行；
    while(t--)
    {
        x=0;
        memset(a,0,sizeof(a)); //清除数组a
        gets(a); //获取数组的值；
        k=strlen(a);
        for(i=k-1; i>=0; i--)
            if(a[i]>='a'&&a[i]<='z')
                x++;
        x=x%26;
        if(x==0)
            printf("z\n");
        else
            printf("%c\n",'a'+x-1);
    }
    return 0;
}
*/
// #include<stdio.h>
// int main()
// {
// int k;
// scanf("%d",&k);
// getchar();/*吃掉换行符*/
// while(k--){
// int n,i,j,sum=0;
// char c,a;
// while(scanf("%c",&c),c!='\n')
// {
// if(c<='z'&&c>='a')
// sum++;}
// i=sum%26;
// if(i==0)
// j=122;
// else
// j=i+96;
// printf("%c\n",j);
// }
// return 0;
// }
/* 
#include <cstdio>
#include <cctype>
#include <cstring>
int main(){
    int n,i;
    char arr[201];
    scanf("%d",&n);
    while(n--){
        scanf("%s",arr);
        int l=strlen(arr),r=0;
        for(int i=0;i!=l;i++)
            if(islower(arr[i]))
                r++;
        r%=26;
        printf("%c\n",r==0?'z':96+r);
    }
}       最优程序 */