/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1020
 * by jtahstu on 2015/2/9 14:00
 */

//#include <iostream>
//#include <string>
//using namespace std;
//
//void jt(string s) {
//	long long a[15], x = a[0] - '0';
//	int count = 1, z=1;
//	a[0] = x;
//	for (int j = 0; j < s.size(); j += z) {
//		z = 1;
//		for (int i = j; i < s.size(); i++) {
//			long long y = s[i] - '0';
//			if (y > x) {
//				a[count++] = y;
//				break;
//			} else {
//				y = y * 10 + (s[i] - '0');z++;
//				if(y>x)
//					a[count++]=y;
//				break;
//			}
//		}
//	}
//	for(int i=0;i<count;i++)
//		cout<<a[i]<<",";
//	cout<<endl;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	while (n--) {
//		string s;
//		cin >> s;
//		jt(s);
//	}
//	return 0;
//}
