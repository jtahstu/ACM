/*
 * 33.cpp
 * Created on: 2015年4月4日
 * Author: jtahstu
 */
//33计算分数的精确值
//使用数组精确计算M/N(0<M<N<=100)的值。如果M/N是无限循环小数，则计算并输出它的第一循环节，同时要求输出 循环节的起止位置(小数位的序号)。
//
//*运行结果
//Please input a fraction(m/n)(<0<m<n<=100):1/3
//1/3 it's accuracy value is:0.3
//and it is a infinite cyclic fraction from 1
//digit to 1 digit after decimal point.
//不是很懂
#include <iostream>
using namespace std;

int main33()
{
    int a[100],b[100];//a数组用于存放小数部分,b数组用于存放余数
    int m,n,i=0,s=0;
    cin>>m>>n;//输入分子和分母
    if(m>n){//如果分子大于分母
        s=m/n; //得到整数部分
        m=m%n;  //得到余数为分子
    }
    while(m!=0){
        m=m*10;
        a[i]=m/n;
        m=m%n;
        b[i]=m;
        for(int h=0;h<i;h++){
            if(b[h]==m){  //当余数出现重复时表示开始循环
                cout<<"从小数点"<<h+1<<"位开始循环,到"<<i<<"位结束"<<endl;
				m=0;
                break;
            }
        }
        i++;
    }
    cout<<s<<"."; //输出整数部分
    for(int j=0;j<i;j++){
        cout<<a[j];
    }
	cout<<endl;
	return 0;
}


