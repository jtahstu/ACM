/*
 * 29.cpp
 * Created on: 2015��4��3��
 * Author: jtahstu
 */
//29�����Ƚ�
//�Ƚ����������Ĵ�С��
//
//*���н��
//���룺 4/5��6/7 ����� 4/5<6/7
//���룺 8/4��16/32 ����� 8/4>16/32
//���룺16/32��4/8 ����� 16/32=4/8

#include<iostream>
#include<cstdio>
using namespace std;
int gcd29(int a,int b){//���Լ��
	return b==0?a:gcd29(b,a%b);
}
int lcm29(int a,int b){//��С������
	return a/gcd29(a,b)*b;
}

int main29()
{
	int x1,y1,x2,y2;
	while(~scanf("%d/%d %d/%d",&x1,&y1,&x2,&y2)){
		if(x1*(lcm29(y2,y1)/y1)>x2*(lcm29(y1,y2))/y2)
			cout<<">"<<endl;
		else if(x1*(lcm29(y2,y1)/y1)<x2*(lcm29(y1,y2))/y2)
			cout<<"<"<<endl;
		else
			cout<<"="<<endl;
	}
	return 0;
}



