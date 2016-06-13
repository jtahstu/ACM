/**
 * Project Name: hduoj
 * File Name: 4520.cpp
 * Created on: 2015年4月13日 下午9:18:50
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//小Q系列故事——最佳裁判
//
//Time Limit: 500/200 MS (Java/Others)    Memory Limit: 65535/32768 K (Java/Others)
//Total Submission(s): 1838    Accepted Submission(s): 905
//
//
//Problem Description
//　　过去的2012年对小Ｑ来说是很悲催的一年，失恋了12次，每次都要郁闷1个来月。
//　　好在小Q是个体育迷，在最痛苦的时候，他常常用观看各种体育节目来麻醉自己，比如伦敦奥运会期间，小Q就常常在周末邀上一群单身同事聚在自己的蜗居，一边畅饮啤酒，一边吹牛。
//　　小Q最喜欢看的是跳水，主要原因也是因为这个项目有中国人参加，而且中国队员获胜的几率很大，一般不会再给自己添堵，不然何谈看体育疗情伤呢。
//　　跳水项目的一个重要环节就是裁判打分，小Q他们有时候会觉得某个裁判不公平，是不是有意在压中国队员的分数。于是每当一个队员跳水完毕，他们几个也像电视上的裁判那样给队员打分，并且规定，谁的分数和最终得分最接近谁就是他们当中的最佳裁判，现场奖励啤酒一杯！
//　　其中，最终得分是这样计算的：N个人打分，去掉一个最高分，去掉一个最低分，然后剩余分数相加，再除以N-2即为最终得分。
//　　凭借“看体育疗情伤”而练就的专业体育知识，小Q几乎每局必胜，这一夜，小Ｑ注定要烂醉如泥了......
//
//
//Input
//　　输入包含多组测试用例。
//　　每组测试用例首先是一个整数N，表示裁判的人数，然后接着是N个实数，表示N个裁判的打分Pi，N为0时结束输入。
//　　[Technical Specification]
//　　5 <= N <= 20
//　　0<=Pi<=10
//
//
//Output
//　　请计算并输出最佳裁判的编号，每组数据输出占一行，若有多人并列最佳裁判，只要求输出编号最小的那个。
//　　特别说明：裁判编号按照打分的顺序从1开始，依次类推，最后一人编号为N。
//
//
//Sample Input
//5 8.3 9.2 8.7 8.9 9.0
//0
//
//
//Sample Output
//4
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<cstdlib>
//using namespace std;
//int main4520()
//{
//	int n,x;
//	while(cin>>n){
//		if(n==0)break;
//		double max=-1,min=11,sum=0,temp[25]={0};
//		for(int i=0;i<n;i++){
//			cin>>temp[i];
//			if(temp[i]>max)max=temp[i];
//			if(temp[i]<min)min=temp[i];
//			sum+=temp[i];
//		}
//		x=0;
//		double avg=(sum-max-min)/(n-2),ans=fabs(temp[0]-avg);
//		for(int i=1;i<n;i++){
//			if(fabs(temp[i]-avg)<ans){
//				ans=fabs(temp[i]-avg);
//				x=i;
//			}
//		}
//		cout<<x+1<<endl;
//	}
//	return 0;
//}
