/**
 * Project Name: Summer
 * File Name: My Scores.cpp
 * Created on: 2015��7��19�� ����7:08:32
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
//	int syear; //��ʼѧ��
//	int eyear; //��ֹѧ��
//	int semester; //ѧ��
//	string code; //�γ̴���
//	string course; //�γ�����
//	string property; //�γ�����
//	double credit; //ѧ��
//	double gpa; //����
//	string scores; //�ַ�����ʽ�ĳɼ�
//	int score; //������ʽ�ĳɼ�
//	int minor; //���ޱ��
//	string college; //����ѧԺ
//} jtahstu[N];
//int stringToint(string s) {
//	return (s[0] - '0') * 10 + (s[1] - '0');
//}
//int main() {
//	//freopen("My Scores.txt", "r", stdin);
//	//freopen("My Scores Result.txt", "w", stdout);
//	int n;
//	cout << "������γ̵�����Ŀ��";
//	cin >> n;
////	cout << "���������������Ϣ����1����ʼѧ�� 2����ֹѧ�� 3��ѧ�� 4���γ̴��� 5���γ����� 6���γ�����  8��ѧ�� 9������ "
////			"10���ɼ� 11�����ޱ�� 12������ѧԺ ��˳��" << endl;
//	for (int i = 0; i < n; i++)
//		cin >> jtahstu[i].syear >> jtahstu[i].eyear >> jtahstu[i].semester
//				>> jtahstu[i].code >> jtahstu[i].course >> jtahstu[i].property
//				>> jtahstu[i].credit >> jtahstu[i].gpa >> jtahstu[i].scores
//				>> jtahstu[i].college;
////	cout << jtahstu[0].syear << jtahstu[0].eyear << jtahstu[0].semester
////			<< jtahstu[0].code << jtahstu[0].course << jtahstu[0].property
////			<< jtahstu[0].credit << jtahstu[0].gpa << jtahstu[0].scores
////			<< jtahstu[0].minor << jtahstu[0].college << endl;
//	for (int i = 0; i < n; i++) { //����һ�³ɼ�
//		if (jtahstu[i].scores == "����")
//			jtahstu[i].score = 95;
//		else if (jtahstu[i].scores == "����")
//			jtahstu[i].score = 85;
//		else if (jtahstu[i].scores == "�е�")
//			jtahstu[i].score = 75;
//		else
//			jtahstu[i].score = stringToint(jtahstu[i].scores);
//	}
//	double sumscore = 0; //��Ȩѧ���ܺ�
//	double sumgpa = 0; //�����ܺ�
//	double sumcredit = 0; //ѧ���ܺ�
//	for (int i = 0; i < n; i++) {
//		sumscore += jtahstu[i].score * jtahstu[i].gpa;
//		sumgpa += jtahstu[i].gpa * jtahstu[i].credit;
//		sumcredit += jtahstu[i].credit;
//	}
//	double averagescore = sumscore / sumcredit; //ƽ���ɼ�
//	double averagegpa = sumgpa / sumcredit; //ƽ��ѧ�ּ���
//	cout << "ok" << endl;
//	cout << "�����ѧ��Ϊ��" << sumcredit << endl;
//	cout << "����ܼ���Ϊ��" << sumgpa << endl;
//	cout << "��ļ�Ȩƽ����Ϊ��" << averagescore << endl;
//	cout << sumscore << " " << sumcredit << endl;
//	cout << "���ƽ��ѧ�ּ���Ϊ��" << averagegpa << endl;
//	cout << "Congratulations" << endl;
//	return 0;
//}
