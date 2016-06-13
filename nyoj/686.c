/*
An Interesting Sequence
时间限制：1000 ms  |  内存限制：65535 KB
难度：0

描述

    YiYi is a smart boy, he is fascinated in solving eccentric problems. One day when he was reading a book, he came across a very interesting problem. After a few time’s thinking, he finally get the solution. YiYi considers this solution very heuristic, now he decides to show this problem to you so that you can also enjoy the happiness of solving this interesting problem. Here is the description of the problem:

    Suppose at first you have a sequence, S1, consists of two numbers: 1, 1. According to some rule you can get the sequence Sn from the sequence Sn-1.Once you get Sn-1, you will be asked to insert one n between a and b if a and b are two adjacent numbers in Sn-1 and a + b = n. After you have inserted all possible n you finally get Sn. You can also get the sequence Sn+1 using the same method and so on. 

    For example,S1 = 1,1.Since 1 + 1 = 2, we will insert 2 between two 1s and then we get S2, S2 = 1,2,1. Now we will insert two 3s in the sequence to get S3, as you can see, S3 = 1,3,2,3,1. In the same way, we know S4 = 1,4,3,2,3,4,1, S5 = 1,5,4,3,5,2,5,3,4,5,1 and so on.

    Here the question comes: give you n, you will be asked to output the number of n in Sn. For example if n = 5, you will output 4 since there are 4 5s in S5.

输入
    The first line of the input contains a number k, the number of test cases to solve (1 ≤ k ≤ 200). Each test case consists of a single integer 2 ≤ n ≤ 10^10 on a separate line.
输出
    For each test case, you are asked to output the number of n in Sn on a line.
样例输入

    3
    2
    4
    5

样例输出

    1
    2
    4
 题意：

当n为1的时候数列为1 1

当n为2是数列为 1 2 1

当n为3时数列为1 3 2 3 1

从而观察出相邻两相和等于n时把n插入

问每次能插入几个n？



分析：

  1,2,1 

 1,3,2,3,1

 1,4,3,2,3,4,1

 1,5,4,3,5,2,5,3,4,5,1

 由序列可观察出每个相邻的和和n相等的个数满足欧拉函数。//证明略*/

 #include<stdio.h>
long long eular(long long n)
{
    long long ret=1,i;
    for(i=2; i*i<=n; i++)
        if(n%i==0)
        {
            n/=i,ret*=i-1;
            while(n%i==0)
                n/=i,ret*=i;
        }
    if(n>1)
        ret*=n-1;
    return ret;
}
int main()
{
    long long i,j,k,n;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld",&i);
        printf("%lld\n",eular(i));
    }
    return 0;
}