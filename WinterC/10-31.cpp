/*实验班14-12 第五章循环程序设计编程题---10033 与7无关的数
2.
【问题描述】一个正整数，如果它能被7整除，或者它的十进制表示中某位数为7，则称其为与7相关的数。现求所有小于
  等于n(n<100)的与7无关的正整数的平方和。
 【输入形式】输入占一行，为正整数n(n<100)。
 【输出形式】输出小于等于n的与7无关的正整数的平方和。
 【样例输入】21
【样例输出】2336
【样例说明】21之前的与7无关的数的平方和是2336。
 【评分标准】本题共4个测试点，每个测试点0.25分，全部通过得1.0分。*/

#include "iostream"
#include "cstdio"
using namespace std;
int f(int n)
{
	if(n%7==0||n/10==7||n%10==7) return 0;
	return 1;
}
int main(int argc, char const *argv[])
{
	int sum=0,n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(f(i))sum+=i*i;
	}
	cout<<sum;
	return 0;
}


/*验班14-12 第五章循环程序设计编程题---10032 求累加和
3.
【问题描述】有一分数序列:
2/1,3/2,5/3,8/5,13/8,21/13........
求出该序列前n项之和。
【输入形式】输入只有一行，该行包含一个正整数n(n<200).。
 【输出形式】序列前n项之和(保留两位小数)。
 【样例输入】2
【样例输出】3.50
【样例说明】前两项的和为3.50。
 【评分标准】本题共4个测试点，每个测试点0.25分，全部答对得1.0分。*/
#include "iostream"
#include "cstdio"
#include "iomanip"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	double a=2,b=1,sum=0,t;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		 sum+=a/b;
        t=a;
        a=a+b;
        b=t;
	}
	//cout<<setprecision(2)<<sum<<endl;
    printf("%.2lf\n",sum);
	return 0;
}

/*实验班14-12 第五章循环程序设计编程题---10031 整数的立方和
4.
【问题描述】给定一个正整数k(1<k<10),求1到k的立方和m,即m=1+2*2*2+...k*k*k.
【输入形式】输入只有一行，该行包含一个正整数k。
 【输出形式】输出只有一行，该行包含1到k的立方和。
 【样例输入】5
【样例输出】225
【样例说明】输入5时，输出从1到5这5个数的立方和。
 【评分标准】本题共4个测试点，每个测试点0.25分，全部通过得1.0分*/
#include "iostream"
#include "cstdio"
using namespace std;
int main(int argc, char const *argv[])
{
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum+=i*i*i;
	}
	cout<<sum<<endl;
	return 0;
}
