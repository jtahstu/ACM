/*
 * 35.cpp
 * Created on: 2015��4��4��
 * Author: jtahstu
 */
//35ί������
//ĳ���ӽӵ�һ���������Ҫ����A��B��C��D��E��F������Ա�о����ܶ���������ˣ�������������������
//1)A��B����������ȥһ�ˣ�
//2)A��D����һ��ȥ��
//3)A��E��F������Ҫ������ȥ��
//4)B��C��ȥ�򶼲�ȥ��
//5)C��D������ȥһ����
//6)��D��ȥ����EҲ��ȥ��
//��Ӧ�����ļ�����ȥ��
//
//*���н��
//A will be assigned. (ȥ)
//B will be assigned. (ȥ)
//C will be assigned. (ȥ)
//D will not be assigned. (��ȥ)
//E will not be assigned. (��ȥ)
//F will be assigned. (ȥ)

#include<iostream>
#include<cstdio>
using namespace std;
int main35()
{
	for(int a=0;a<=1;a++)
		for(int b=0;b<=1;b++)
			for(int c=0;c<=1;c++)
				for(int d=0;d<=1;d++)
					for(int e=0;e<=1;e++)
						for(int f=0;f<=1;f++)
							if((a+b>=1)&&a+d<2&&a+e+f==2&&b==c&&c+d==1&&((d==0&&e==0)||d==1))//����ж�����Ҫ���壬��ϸ���
									cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<endl;//0��ʾ��ȥ��1��ʾȥ
	return 0;
}



