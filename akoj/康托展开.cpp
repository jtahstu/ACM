#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdlib>
using namespace std;
class cantor{
public:
	int n;//�ַ����ĳ���
	string s;
	int pos;//�ַ�����ȫ�����е��ֵ�λ�ã���0��ʼ
	vector<int>num;//���е��ַ�
	cantor(string s):s(s){n=s.size();}
	cantor(int n,int pos):n(n),pos(pos){
		int i;
		for(i=0;i<n;i++)
			num.push_back(i);
	}
	int fac(int);
	void encode();
	void decode();
};
int cantor::fac(int num){
	if(num==0) return 1;
		else return num*fac(num-1);
}
void cantor::encode(){
	int i,j,count;
	vector<int>vec(n);
	for(i=0;i<n;i++){
		count=0;
		for(j=i;j<n;j++)
			if(s[i]>s[j]) count++;
		vec[n-i-1]=count;
				}
	pos=0;
	for(i=0;i<s.size();i++)
		pos+=vec[i]*fac(i);
}
void cantor::decode(){
	int i;
	div_t divresult;
	for(i=n-1;i>=0;i--){
		divresult=div(pos,fac(i));//�����������
		s.push_back(num[divresult.quot]+'0');
		num.erase(num.begin()+divresult.quot);
		pos=divresult.rem;
			}
}
int main(){
	cantor test(10,1);
	test.decode();
	cout<<test.s<<endl;
}
