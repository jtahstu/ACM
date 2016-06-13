/**
 * Project Name: Summer
 * File Name: My Scores.cpp
 * Created on: 2015年7月19日 下午7:08:32
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<cstdlib>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//const int N = 1000;
//struct Stu {
//	int syear; //起始学年
//	int eyear; //终止学年
//	int semester; //学期
//	string code; //课程代码
//	string course; //课程名称
//	string property; //课程性质
//	double credit; //学分
//	double gpa; //绩点
//	string scores; //字符串形式的成绩
//	int score; //数字形式的成绩
//	int minor; //辅修标记
//	string college; //开课学院
//} jtahstu[N];
//int stringToint(string s) {
//	return (s[0] - '0') * 10 + (s[1] - '0');
//}
//int main() {
//	//freopen("My Scores.txt", "r", stdin);
//	//freopen("My Scores Result.txt", "w", stdout);
//	int n;
//	cout << "请输入课程的总数目：";
//	cin >> n;
////	cout << "请依次输入各科信息，按1、起始学年 2、终止学年 3、学期 4、课程代码 5、课程名称 6、课程性质  8、学分 9、绩点 "
////			"10、成绩 11、辅修标记 12、开课学院 的顺序" << endl;
//	for (int i = 0; i < n; i++)
//		cin >> jtahstu[i].syear >> jtahstu[i].eyear >> jtahstu[i].semester
//				>> jtahstu[i].code >> jtahstu[i].course >> jtahstu[i].property
//				>> jtahstu[i].credit >> jtahstu[i].gpa >> jtahstu[i].scores
//				>> jtahstu[i].college;
////	cout << jtahstu[0].syear << jtahstu[0].eyear << jtahstu[0].semester
////			<< jtahstu[0].code << jtahstu[0].course << jtahstu[0].property
////			<< jtahstu[0].credit << jtahstu[0].gpa << jtahstu[0].scores
////			<< jtahstu[0].minor << jtahstu[0].college << endl;
//	for (int i = 0; i < n; i++) { //处理一下成绩
//		if (jtahstu[i].scores == "优秀")
//			jtahstu[i].score = 95;
//		else if (jtahstu[i].scores == "良好")
//			jtahstu[i].score = 85;
//		else if (jtahstu[i].scores == "中等")
//			jtahstu[i].score = 75;
//		else
//			jtahstu[i].score = stringToint(jtahstu[i].scores);
//	}
//	double sumscore = 0; //加权学分总和
//	double sumgpa = 0; //绩点总和
//	double sumcredit = 0; //学分总和
//	for (int i = 0; i < n; i++) {
//		sumscore += jtahstu[i].score * jtahstu[i].gpa;
//		sumgpa += jtahstu[i].gpa * jtahstu[i].credit;
//		sumcredit += jtahstu[i].credit;
//	}
//	double averagescore = sumscore / sumcredit; //平均成绩
//	double averagegpa = sumgpa / sumcredit; //平均学分绩点
//	cout << "ok" << endl;
//	cout << "你的总学分为：" << sumcredit << endl;
//	cout << "你的总绩点为：" << sumgpa << endl;
//	cout << "你的加权平均分为：" << averagescore << endl;
//	cout << sumscore << " " << sumcredit << endl;
//	cout << "你的平均学分绩点为：" << averagegpa << endl;
//	cout << "Congratulations" << endl;
//	return 0;
//}
