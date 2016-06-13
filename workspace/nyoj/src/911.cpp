/**
 * Project Name: nyoj 
 * File Name: 911.cpp
 * Created on: 2015年6月10日 下午2:56:57
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//using namespace std;
//int main()
//{
//	long long n,m;
//	cin>>n;
//	while(n--){
//		cin>>m;
//		long long m1=m/5,m2=m/6,m3=m/8,m4=m/30,m5=m/40,m6=m/24,m7=m/120;
//		cout<<m-m1-m2-m3+m4+m5+m6-m7<<endl;
//	}
//	return 0;
//}
//由概率公式可知：P(a&b&c)=P(a)+P(b)+P(c)-P(ab)-P(ac)-P(bc)+P(abc)
//因为这里是求不能整除的，即相当于对上式取反，即加变成减，减变成加
//样例输入
//
//    2
//    1
//    100
//
//样例输出
//
//    1
//    61
