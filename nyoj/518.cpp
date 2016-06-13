/**
 * Project Name: nyoj_2.0
 * File Name: 518.cpp
 * Created on: 2015年5月19日 下午4:49:09
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */

#include <iostream>
using namespace std;
int main()
{
    int a[16]={1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1},n,m;
   cin>>n;
   while(n--){
    cin>>m;
    cout<<a[m%15]<<endl;
   }
    return 0;
}
