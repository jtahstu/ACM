/**
 * Project Name: nyoj_2.0 
 * File Name: 840.cpp
 * Created on: 2015年6月9日 上午1:16:05
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
//	int n;
//	cin>>n;
//	while(n--){
//		string s,b[10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
//		int a[10]={0};
//		for(int i=0;i<7;i++)
//			cin>>a[i];
//		sort(a,a+7);
//		cin>>s;
//		for(int i=0;i<7;i++)
//			if(b[i]==s)
//				cout<<a[i]<<endl;
//	}
//	return 0;
//}
//描述
//    HEIHEI非常喜欢吃花生，他每天都会吃一些花生，心情好的话会吃的比较多，现在已经知道，HEIHEI从周一到周日的心情值递增的，
//	也就是说周一吃的花生最少，周日吃的花生最多。现在给你7个数表示有7堆花生，顺序是打乱的，HEIHEI每天吃的花生数都在这7个数中，
//	现在告诉你今天周几，请你告诉HEIHEI他今天应该吃多少花生。例如花生数有“1 2 5 4 6 7 3”，输入“Monday”，星期一就应该输出1，
//	如果输入“”Thursday”，周四的话应该吃4个，输出4.
//
//输入
//    第一行有一个数t(1<=t<=100)表示有t组测试数据。
//    第二行有7个数分别表示这一周内每一天的花生数。
//    第三行有一个字符串，表示周几（Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday)。
//输出
//    输出一个数，表示这一天应该吃的花生数。
//样例输入
//
//    2
//    1 2 3 4 5 6 7
//    Friday
//    1 4 3 5 6 8 10
//    Sunday
//
//样例输出
//
//    5
//    10


