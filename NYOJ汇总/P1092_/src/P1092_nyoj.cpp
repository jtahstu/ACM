/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=1092
 * by jtahstu on 2015/2/11 19:00
 */


#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	while (cin >> input) {
		bool neg = false;
		if (input[0] == '-') {
			input = input.substr(1);
			neg = true;
		}
		int index = input.find('.');
		if (index == string::npos) {
			input += ".00";
		}
		else if (input.size() - index <= 3) {
			while (input.size() - index <= 3) {
				input += '0';
			}
		}
		else {
			index += 2;
			int bit = 0;
			if (input[index + 1] >= '5') {
				bit = 1;
			}
			while (bit && index >= 0) {
				if (input[index] == '.') {
					index--;
					continue;
				}
				else if (input[index] == '9') {
					input[index] = '0';
					index--;
					continue;
				}
				else {
					input[index]++;
					bit = 0;
					break;
				}
			}
			input = input.substr(0, input.find('.') + 3);
			if (bit) {
				input = '1' + input;
			}
		}
		index = 0;
		while (input[index] == '0') index++;
		if (input[index] == '.') index--;
		if (index != 0) {
			input = input.substr(index);
		}
		index = input.find('.');
		if (neg) {
			cout << "(";
		}
		int rest = index % 3;
		if (rest) {
			for (int i = 0; i < rest; i++) {
				cout << input[i];
			}
			if (input[rest] != '.') {
				cout << ",";
			}
		}
		index = rest;
		while (input[index] != '.') {
			for (int i = 0; i < 3; i++) {
				cout << input[index++];
			}
			if (input[index] != '.') {
				cout << ",";
			}
		}
		cout << ".";
		index++;
		for (int i = 0; i < 2; i++) {
			cout << input[index++];
		}
		if (neg) {
			cout << ")";
		}
		cout << endl;
	}
}
/*
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
#include<iomanip>
#include<limits.h>
#include<stdlib.h>
#include<fstream>
#include<sstream>
//BASIC
#include<ctype.h>
#include<time.h>
#include<assert.h>
#include<bitset>
#include<cassert>
#include<complex>
//OTHER
#include<algorithm>
#include<deque>
#include<functional>
#include<iterator>
#include<vector>
#include<list>
#include<map>
#include<memory>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<utility>
//DEFINE1
#define REP_2(i, j, n, m) REP(i, n) REP(j, m)
#define REP_2_1(i, j, n, m) REP_1(i, n) REP_1(j, m)
#define REP_3(i, j, k, n, m, l) REP(i, n) REP(j, m) REP(k, l)
#define REP_3_1(i, j, k, n, m, l) REP_1(i, n) REP_1(j, m) REP_1(k, l)
#define REP_4(i, j, k, ii, n, m, l, nn) REP(i, n) REP(j, m) REP(k, l) REP(ii, nn)
#define REP_4_1(i, j, k, ii, n, m, l, nn) REP_1(i, n) REP_1(j, m) REP_1(k, l) REP_1(ii, nn)
//DEFINE2
#define CPY(A, B) memcpy(A, B, sizeof(A))
#define INS(A, P, B) A.insert(A.begin() + P, B)
#define ERS(A, P) A.erase(A.begin() + P)
#define LBD(A, x) (lower_bound(ALL(A), x) - A.begin())
#define UBD(A, x) (lower_bound(ALL(A), x) - A.begin())
#define CTN(T, x) (T.find(x) != T.end())
#define SZ(A) int((A).size())
#define PB push_back
//DEFINE3
typedef long long LL;
typedef double DB;
//TYPEDEF
const int MOD = int(1e9) + 7;
const int INF = 0x3f3f3f3f;
const LL INFF = 0x3f3f3f3f3f3f3f3fLL;
const DB EPS = 1e-9;
const DB OO = 1e20;
const DB PI = acos(-1.0);
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};
//CONST
using namespace std;

int main()
{
    char a[1000];
    while(scanf("%s",a)!=EOF)
    {
        int k=strlen(a),f=1,ff=0;
        int i;
        int asd;
        for(i=0; i<k; i++)
            if(a[i]=='.') {f=0;break;}int jin=0;
            if(f)     {  a[k]='.';a[k+1]='0';a[k+2]='0';a[k+3]='\0'; }
            if(!f&&i+3>k)
            {
                if(i+1==k) {a[k]='0';a[k+1]='0';a[k+2]='\0';}
                if(i+2==k) {a[k]='0';a[k+1]='\0';}
            }
            else if(!f&&i+3<=k)
            {
                if(a[i+3]>'4'){jin=1;
                for(int ji=i+2;ji>=0;ji--)
                {
                    if(a[ji]>'9'||a[ji]<'0') continue;
                    a[ji]+=jin;
                    jin=0;
                    if(a[ji]>'9') {a[ji]='0'; jin=1;}
                }}
            }
         if(a[0]=='-') {ff=1;a[0]='!';}
        for(i=0;!jin&&i<strlen(a); i++)
        {
            if(a[i]=='0'||a[i]=='!') a[i]='!';
            else break;
        }
//        printf("%s\n",a);
            for(i=0;i<strlen(a);i++) if(a[i]=='.') asd=i;
            char b[1001];int j=0;int fx=1,x=0;///  xiao shu dian
//            printf("~%s~",a);
            for(i=asd+2;i>=0;i--)
            {
                if(a[i]!='!')b[j++]=a[i];
                else break;
                if(!fx) x++; if(a[i]=='.') fx=0;
                if(x==3&&!fx&&i!=0&&a[i-1]!='!') {x=0;b[j++]=',';}

            }
            b[j]='\0';if(ff) printf("(");
            if(a[asd-1]=='!') printf("0");
            if(jin&&(strlen(b)+1)%3==1) printf("1,");
            else if(jin) printf("1");
            for(--j;j>=0;j--)
            {
                printf("%c",b[j]);
            }
            if(ff)printf(")");
            puts("");
            memset(a,'\0',sizeof(a));
    }
    return 0;
}*/
