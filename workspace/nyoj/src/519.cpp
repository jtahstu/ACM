/**
 * Project Name: nyoj_2.0 
 * File Name: 519.cpp
 * Created on: 2015年5月16日 下午2:12:18
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
//int convert(int a)
//{
//	if(a<10)return a;
//	else{
//		int tmp=a,sum=0;
//		while(tmp){
//			sum+=tmp%10;
//			tmp/=10;
//		}
//		return convert(sum);
//	}
//}
//void solve(string s)
//{
//	int a[7]={0},ans[7]={0};
//	for(int i=0;i<7;i++)
//		for(unsigned int j=i;j<s.length();j+=6){
//			a[i]+=s[j]-'a'+97;
//		}
//	for(int i=0;i<6;i++){
//		ans[i]=convert(a[i]);
//		cout<<ans[i];
//	}
//	cout<<endl;
//}
//int main519()
//{
//	int n;
//	cin>>n;
//	while(n--){
//		string s;
//		cin>>s;
//		solve(s);
//	}
//	return 0;
//}

//密码发生器
//时间限制：1000 ms  |  内存限制：65535 KB
//难度：2
//描述
//在对银行账户等重要权限设置密码的时候，我们常常遇到这样的烦恼：如果为了好记用生日吧，容易被破解，不安全；如果设置不好记的密码，又担心自己也会忘记；如果写在纸上，担心纸张被别人发现或弄丢了...
//
//    这个程序的任务就是把一串拼音字母转换为6位数字（密码）。我们可以使用任何好记的拼音串(比如名字，王喜明，就写：wangximing)作为输入，程序输出6位数字。
//
//    变换的过程如下：
//
//    第一步. 把字符串6个一组折叠起来，比如wangximing则变为：
//    wangxi
//    ming
//
//    第二步. 把所有垂直在同一个位置的字符的ascii码值相加，得出6个数字，如上面的例子，则得出：
//    228 202 220 206 120 105
//
//    第三步. 再把每个数字“缩位”处理：就是把每个位的数字相加，得出的数字如果不是一位数字，就再缩位，直到变成一位数字为止。例如: 228 => 2+2+8=12 => 1+2=3
//
//    上面的数字缩位后变为：344836, 这就是程序最终的输出结果！
//
//    要求程序从标准输入接收数据，在标准输出上输出结果。
//
//输入
//第一行是一个整数n（<100），表示下边有多少输入行，接下来是n行字符串，就是等待变换的字符串(长度小于100)。
//输出
//变换后的6位密码
//样例输入
//5
//zhangfeng
//wangximing
//jiujingfazi
//woaibeijingtiananmen
//haohaoxuexi
//样例输出
//772243
//344836
//297332
//716652
//875843


