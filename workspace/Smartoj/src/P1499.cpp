/**
 * Project Name: Smartoj 
 * File Name: P1499.cpp
 * Created on: 2015年4月21日 下午8:32:26
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
const int MOD=32768;
void mult(int A[2][2],int B[2][2],int C[2][2])
{
    C[0][0]=(A[0][0]*B[0][0]+A[0][1]*B[1][0])%MOD;
    C[0][1]=(A[0][0]*B[0][1]+A[0][1]*B[1][1])%MOD;
    C[1][0]=(A[1][0]*B[0][0]+A[1][1]*B[1][0])%MOD;
    C[1][1]=(A[1][0]*B[0][1]+A[1][1]*B[1][1])%MOD;
}
void sq(int A[2][2],int B[2][2])
{
    mult(A,A,B);
}
void pow2(int A[2][2],int n,int B[2][2])
{
    int E[2][2],F[2][2];

    if(n==0)
    {
        B[0][0]=B[1][1]=1;
        B[0][1]=B[1][0]=0;
        return;
    }
    if(n%2==0)
    {
        sq(A,E);
        pow2(E,n/2,B);
        return ;
    }
    sq(A,E);
    pow2(E,n/2,F);
    mult(F,A,B);
}

void solve(long long  n)
{
    int B[2][2];
    int A[2][2]= {{1,1},{1,0}};
    pow2(A,n-1,B);
    cout<<B[0][0]<<endl;
}
void print(int A[2][2])
{
    cout<<A[0][0]<<" "<<A[0][1]<<endl;
    cout<<A[1][0]<<" "<<A[1][1]<<endl;
}
int main1499()
{
    long long  n;
    cin>>n;
    solve(n);
    return 0;
}





