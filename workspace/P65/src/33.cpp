/*
 * 33.cpp
 * Created on: 2015��4��4��
 * Author: jtahstu
 */
//33��������ľ�ȷֵ
//ʹ�����龫ȷ����M/N(0<M<N<=100)��ֵ�����M/N������ѭ��С��������㲢������ĵ�һѭ���ڣ�ͬʱҪ����� ѭ���ڵ���ֹλ��(С��λ�����)��
//
//*���н��
//Please input a fraction(m/n)(<0<m<n<=100):1/3
//1/3 it's accuracy value is:0.3
//and it is a infinite cyclic fraction from 1
//digit to 1 digit after decimal point.
//���Ǻܶ�
#include <iostream>
using namespace std;

int main33()
{
    int a[100],b[100];//a�������ڴ��С������,b�������ڴ������
    int m,n,i=0,s=0;
    cin>>m>>n;//������Ӻͷ�ĸ
    if(m>n){//������Ӵ��ڷ�ĸ
        s=m/n; //�õ���������
        m=m%n;  //�õ�����Ϊ����
    }
    while(m!=0){
        m=m*10;
        a[i]=m/n;
        m=m%n;
        b[i]=m;
        for(int h=0;h<i;h++){
            if(b[h]==m){  //�����������ظ�ʱ��ʾ��ʼѭ��
                cout<<"��С����"<<h+1<<"λ��ʼѭ��,��"<<i<<"λ����"<<endl;
				m=0;
                break;
            }
        }
        i++;
    }
    cout<<s<<"."; //�����������
    for(int j=0;j<i;j++){
        cout<<a[j];
    }
	cout<<endl;
	return 0;
}


