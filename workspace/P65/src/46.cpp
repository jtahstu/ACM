/**
 * Project Name: P65 
 * File Name: 46.cpp
 * Created on: 2015��4��5�� ����2:18:49
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//46  ��8�������γ����ص�������
//�������8������������8�������ֱ����һ��������İ˸������ϣ�Ҫ��ÿ�����ϵ��ĸ���֮����ȡ�
//
//*���н��
//Please enter [1] number:20
//Please enter [2] number:45
//Please enter [3] number:39
//Please enter [4] number:25
//Please enter [5] number:29
//Please enter [6] number:7
//Please enter [7] number:3
//Please enter [8] number:2
//Sorry they can't be constructed required cube!

#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main46()
{
	int a[9],ii=0,i,a1,a2,a3,a4,b1,b2,b3,b4,flag;
	for(i=1;i<=8;i++){
	scanf("%d",&a[i]);
	ii+=a[i];
	}
	if(ii%2){ /*��Ϊ�����������8����������*/
	printf("Sorry they can't be constructed required cube! ");
	}
	for(flag=0,a1=1;a1<=8;a1++) /*flag:��ɱ��.flag=1;��ʾ���*/
	for(a2=1;a2<=8;a2++) /*���ð���ѭ�������˸�������ȫ����*/
		if(a2!=a1) /*ǰ������������ͬ*/
	for(a3=1;a3<=8;a3++)
		if(a3!=a2&&a3!=a1) /*ǰ������������ͬ*/
	for(a4=1;a4<=8;a4++)
		if(a4!=a3&&a4!=a2&&a4!=a1) /*ǰ�ĸ���������ͬ*/
	for(b1=1;b1<=8;b1++)
		if(b1!=a4&&b1!=a3&&b1!=a2&&b1!=a1) /*������ͬ*/
	for(b2=1;b2<=8;b2++)
		if(b2!=b1&&b2!=a4&&b2!=a3&&b2!=a2&&b2!=a1)
	for(b3=1;b3<=8;b3++)
		if(b3!=b2&&b3!=b1&&b3!=a4&&b3!=a3&&b3!=a2&&b3!=a1)/*����ȡ��ͬ����*/
	for(b4=1;b4<=8;b4++)
		if(b4!=b2&&b4!=b1&&b4!=b3&&b4!=a4&&b4!=a3&&b4!=a2&&b4!=a1)
			if(a[b1]+a[b2]+a[b3]+a[b4]==ii/2&&a[a1]+a[a2]+a[b1]+a[b2]==ii/2&&a[a1]+a[a4]+a[b1]+a[b4]==ii/2){
				flag=1;goto out; /*����������flag��1���˳�*/
			}
		out:{
			if(flag){
				printf("They can be constructed required cube as follow: ");
			}
			else printf("Sorry they can��t be constructed required cube! ");
		}
	return 0;
}



