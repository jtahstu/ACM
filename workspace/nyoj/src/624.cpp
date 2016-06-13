/**
 * Project Name: nyoj_2.0 
 * File Name: 624.cpp
 * Created on: 2015年5月17日 下午8:38:50
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
//int change624(string s)
//{
//
//	if(s[0]=='N')return 1;
//	if(s[0]=='E')return 2;
//	if(s[0]=='S')return 3;
//	if(s[0]=='W')return 4;
//}
//int main624()
//{
//	string s,ans624[5]={"","North","East","South","West"};
//	int n,m;
//	while(cin>>s>>n){
//		int start=change624(s);
//		for(int i=0;i<n;i++){
//			cin>>m;
//			if(m==0){
//				if(start==1)start+=4;
//				start-=1;
//			}
//			if(m==1){
//				if(start==4)start-=4;
//				start+=1;
//			}
//		}
//		cout<<ans624[start]<<endl;
//	}
//	return 0;
//}


//笨蛋的难题(一)
//时间限制：1000 ms  |  内存限制：65535 KB
//难度：1
//描述
//       笨蛋之所以称为笨蛋，是因为他有点路痴。他一旦不高兴，就必然一个人漫无目的的出去走走。今天下雨了，他又不高兴了，怎么办？
//	   那就出去走呗，这不又丢了，这次幸好记下出来时的方向，并且在一张纸上密密麻麻的记下了他拐的弯（他很聪明吧，拐的弯都是90度的弯）
//	   ，0代表左拐，1代表右拐，那么多0、1，他实在看不下去了，正好遇见善良加聪明的你，你能告诉他，他现在面向哪吗？
//输入
//多组测试数据
//第一行
//输入：他开始时的面对方向，和他拐弯次数n（0<n<100）。
//接着n行数字表示拐的弯。
//输出
//他现在所面向的方向(West,East,North,South)
//样例输入
//East  1
//0
//North   1
//1
//样例输出
//North
//East
