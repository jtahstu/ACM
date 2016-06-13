/**
 * Project Name: hduoj 
 * File Name: 1527.cpp
 * Created on: 2015年5月19日 下午9:32:55
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//int main()
//{
//	int n,m;
//	while(cin>>n>>m){
//		if(n<m)swap(n,m);
//		int k=n-m,haha=k*((sqrt(5)+1)/2.0);
//		if(haha==m)cout<<"0"<<endl;
//		else cout<<"1"<<endl;
//	}
//	return 0;
//}


//取石子游戏
//Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
//Total Submission(s): 4286    Accepted Submission(s): 2207
//
//
//Problem Description
//有两堆石子，数量任意，可以不同。游戏开始由两个人轮流取石子。游戏规定，每次有两种不同的取法，一是可以在任意的一堆中取走任意多的石子；
//二是可以在两堆中同时取走相同数量的石子。最后把石子全部取完者为胜者。现在给出初始的两堆石子的数目，如果轮到你先取，
//假设双方都采取最好的策略，问最后你是胜者还是败者。
//
//
//Input
//输入包含若干行，表示若干种石子的初始情况，其中每一行包含两个非负整数a和b，表示两堆石子的数目，a和b都不大于1,000,000,000。
//
//
//Output
//输出对应也有若干行，每行包含一个数字1或0，如果最后你是胜者，则为1，反之，则为0。
//
//
//Sample Input
//
//2 1
//8 4
//4 7
//Sample Output
//
//0
//1
//0
//
//Source
//NOI

