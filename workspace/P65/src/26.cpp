/*
 * 26.cpp
 * Created on: 2015��4��3��
 * Author: jtahstu
 */
//26��ɫ������
//��һ���ڴ��з���12����������3����ġ�3���׵ĺ�6���\�ģ��ʴ�����ȡ8�����ж����ֲ�ͬ����ɫ���䣿
//
//*���н��
//R W B
//1: 0 2 6
// 2: 0 3 5
// 3: 1 1 6
// 4: 1 2 5
// 5: 1 3 4
// 6: 2 0 6
// 7: 2 1 5
// 8: 2 2 4
// 9: 2 3 3
//10: 3 0 5
//11: 3 1 4
//12: 3 2 3
//13: 3 3 2

#include<iostream>
#include<cstdio>
using namespace std;
int main26()
{
	int count=0;
	cout<<"   R W B"<<endl;
	for(int i=0;i<=3;i++){
		for(int j=0;j<=3;j++){
			for(int k=0;k<=6;k++){
				if(i+j+k==8)
				{
					count++;
					cout<<count<<": "<<i<<" "<<j<<" "<<k<<endl;
				}
			}
		}
	}
	return 0;
}



