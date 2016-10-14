/**
 * Created on: 2016Äê09ÔÂ20ÈÕ 13:18:05
 * Author: Guest
 * Copyright (c) 2016, tool.usta.wiki , All Rights Reserved.
 */
#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

int BinSearch(int* a,int n,int key){
    int low,high,mid;
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(key==a[mid])
            return mid;
        else if(key<a[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}

int main()
{
   int a[5]={2,3,1,0,4};
   sort(a,a+5);
   int x=BinSearch(a,5,3);
   std::cout << x << std::endl;
   return 0;
}
