/**
 * Created on: 2016��10��23�� 15:27:25
 * Author: jtahstu
 * Copyright (c) 2016, tool.usta.wiki , All Rights Reserved.
 * ��ŵ�����ݹ�
 */
#include<iostream>
#include<stdio.h>
using namespace std;
long long count; //ȫ�ֱ���, ��¼�ƶ��Ĵ���
void hanoi(int n,char a,char b,char c) { //a�Ƶ�b,��c����ʱ��
    if(n==1) {
        printf("��%lld�Σ�%c��-->%c��\n",++count,a,c);
    } else {
        hanoi(n-1,a,c,b); //�ݹ���ñ�����,�ƶ�a��c,��b����ʱ��
        printf("��%lld�Σ�%c��-->%c��\n",++count,a,c);
        hanoi(n-1,b,a,c); //�ݹ���ñ�����,��b�Ƶ�a,��c����ʱ��
    }
}
int main() {
    int h; //Բ������
    printf("�����뺺ŵ��Բ�̵�����:");
    scanf("%d",&h);
    count=0;
    hanoi(h,'A','B','C');
    printf("Ok�����򵽴˽�����");
    return 0;
}
