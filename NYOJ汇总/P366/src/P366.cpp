/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=366
 * by jtahstu on 2015/2/5 4:00
 * ֪ʶ�㣺 ���������� 	���ֵ������һ������ 	next_permutation()
 *  					���ֵ����ǰһ������ 	prev_permutation()
 */

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--)
	{
		int m;
		string s;
		cin>>m;
		for(int i=1;i<=m;i++)
			s+=i+'0';
		cout<<s<<endl;
		while(next_permutation(s.begin(),s.end()))
			cout<<s<<endl;
	}
	return 0;
}
