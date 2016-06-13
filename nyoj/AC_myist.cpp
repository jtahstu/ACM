1

2

4

8

11

13


22

23

24


25

26


28

29

31


32

33

34

36

39

40

41

44

45

46

48

50

51

53

54

56

57

60


62

64

65

66

67

68

69

70

71

72

73

74

75

76

77

84

85

86  88  91  94  95  96  97  98  100  101  102  103  105  106  108  111  112  113  114  121  122
     124  125  127  139
   144  148  150  153  154  155  157  168  169  171  181  187  189  198  199  204  205  206  212

216
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int a,count=0;
        cin>>a;
        for(int i=1; (i+1)*(i+1)<=(a+1); i++)

            if((a+1)%(i+1)==0)
                count++;

        cout<<count<<endl;
    }
    return 0;
}


217
#include "stdio.h"
int main(int argc, char const *argv[]) {
    int n;
    //freopen("input.txt","r",stdin);
    scanf("%d",&n);
    while(n--) {
        char a;
        int b,c,d;
        char ch=getchar();
        scanf("%c%d",&a,&b);
        c=a;
        if(a>='A'&&a<='Z')
            d=c-64;
        if(a>='a'&&a<='z')
            d=96-c;
        printf("%d\n",b+d);
    }
    return 0;
}


218

#include "iostream"
#include "string.h"
using namespace std;
main(int argc, char const *argv[]) {
    int n,i;
    char a[1001][20];
    while(cin>>n) {
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<n; i++) {
            if(strcmp(a[i],"fork")==0) cout<<"fork ";
            if(strcmp(a[i],"chopsticks")==0) cout<<"chopsticks ";
            if(strcmp(a[i],"bowl")==0) cout<<"bowl ";
            if(strcmp(a[i],"knife")==0) cout<<"knife ";
        }
        cout<<endl;
    }
    return 0;
}

223

#include<stdio.h>
int main( ) {
    char number[] = "22233344455566677778889999", telep[12];
    int k;
    scanf("%d", &k );
    while( k-- ) {
        scanf("%s", telep );
        for( int i = 0 ; i < 11 ; i++ )
            printf("%c", number[telep[i]-'a'] );
        printf("\n");
    }
    return 0;
}

224

#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
int a[1000000+5];
int main() {
    memset(a,0,sizeof(a));
    int count=0,n,t,m;
    char s[10];
    scanf("%d%d",&n,&t);
    for(int i=0; i<t; i++) {
        scanf("%s",s);
        if(s[0]=='C') {
            scanf("%d",&m);
            if(a[m]==0) {
                a[m]++;
                count++;
            } else {
                a[m]--;
                count--;
            }
        } else
            printf("%d\n",count);

    }
    return 0;
}




225

#include<stdio.h>
int fact(int n) {
    int i;
    for(i=2; i*i<=n; i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main() {
    int i, t , n;
    scanf("%d",&t);
    while(t--) {
        int sum=1;
        scanf("%d",&n);
        for(i=2; i<=n; i++)
            if(fact(i)==1)
                sum=sum*i%1000000;
        printf("%d\n",sum);
    }
    return 0;
}



233


#include<iostream>
using namespace std;
int main() {
    int n;
    int A[10000];
    while(cin>>n) {
        int i=0;
        int count=0;
        while(n--) {
            cin>>A[i];
            i++;
        }
        for(int j=0; j<i; j++) {
            for(int l=1; l<i-j; l++) {
                if(A[l]<A[l-1]) {
                    int temp=A[l];
                    A[l]=A[l-1];
                    A[l-1]=temp;
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}


238

#include "iostream"
#include "algorithm"
using namespace std;
int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    while(n--) {
        int m,a[101],i;
        cin>>m;
        for(i=0; i<m; i++)
            cin>>a[i];
        sort(a,a+m);
        cout<<a[m-1]-a[0]<<endl;
    }
    return 0;
}



240

#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
struct stu {
    int ban;//班级号
    int xue;//学号
    int chen;//成绩
} a[100000+100];

bool cmp(const stu& a,const stu& b) {
    if(a.chen==b.chen&&a.bawww.iplaysoft.comn==b.ban)
        return a.xue<b.xue;
    if(a.chen==b.chen&&a.ban!=b.ban)
        return a.ban<b.ban;
    return a.chen>b.chen;
}

int main() {
    int t,m,n,p=1,q,xun;
    cin>>t>>m;
    for(int i=1; i<=t; i++) {
        scanf("%d",&n);
        for(int j=p; j<p+n; j++) {
            scanf("%d",&q);
            a[j].chen=q;
            a[j].ban=i;
            a[j].xue=j-p+1;
        }
        p+=n;
    }
    sort(a+1,a+p,cmp);
    int b[100000+100]= {0},c=1;
    for(int i=1; i<p; i++) {
        if(a[i].chen!=a[i+1].chen)
            b[c++]=a[i].chen;
    }
    for(int i=1; i<=m; i++) {
        scanf("%d",&xun);//询问名次
        for(int j=1; j<p; j++) {
            if(a[j].chen==b[xun])
                printf("%d %d\n",a[j].ban,a[j].xue);
        }
    }
    return 0;
}


241

#include <stdio.h>
#include "string.h"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int n,i,len;
    char a[1011];
    cin>>n;
    getchar();
    while(n--) {
        char b[1011]= {0};
        int fla=0,max=0;
        cin>>a;
        len=strlen(a);
        for(i=0; i<len; i++) {

            b[a[i]-'a']++;
        }
        max=b[0];
        for(i=0; i<26; i++) {
            if(b[i]>max) { //||(b[i]==max&&a[i]-'a'<a[fla]-'a')
                max=b[i];
                fla=i;
            }
        }
        cout<<(char)(fla+'a')<<endl;
    }
    return 0;
}


242

#include<stdio.h>
int main() {
    double n,pi=3.1415926;
    while(scanf("%lf",&n)==1) {
        printf("%.0lf\n",4*pi*n*n*n/3);
    }
    return 0;
}


243

#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;
int data[110];
int main() {
    int n;
    while(cin>>n && n) {
        for(int i=0; i!=n; i++) cin>>data[i];
        iter_swap(data,min_element(data,data+n));
        copy(data,data+n,ostream_iterator<int>(cout," "));
        cout<<endl;
    }
}



244

#include"stdio.h"
int main() {
    int n, a, b;
    while(scanf("%d",&n)!=EOF) {
        while(n--) {
            scanf("%x %x",&a, &b);
            printf("%o\n",a+b);
        }
    }
    return 0;
}


252

#include <iostream>
using namespace std;

int main() {
    int a[41];
    a[2]=3,a[3]=5;
    for(int i=4; i<41; i++)
        a[i]=a[i-1]+a[i-2];
    int n,tt;
    cin>>n;
    while(n--) {
        cin>>tt;
        cout<<a[tt]<<endl;
    }
    return 0;
}


255

#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    while(n--) {
        int m,i,a[110],count;
        count=0;
        cin>>m;
        for(i=0; i<m; i++)
            cin>>a[i];
        sort(a,a+m);
        for(i=0; i<m; i++) {
            if(a[i]!=a[i+1]) count++;
            else if(a[i]==a[i+1]) a[i]=-1;
        }
        cout<<count<<endl;
        for(i=0; i<m; i++) {
            if(a[i]!=-1) cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


256

#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int a[20]= {0,2,4,11,31,83,227,616,1674,4550,12367,33617,
            91380,248397,675214,1835421,4989191
           };//先打表求出结果
int main() {

    int n,m;
    cin>>n;
    while(n--) {
        cin>>m;
        cout<<a[m]<<endl;
    }
    return 0;
}


259


#include<stdio.h>
#include<string.h>
int main() {
    int n;
    char a[20];
    scanf("%d",&n);
    while(n--) {
        scanf("%s",a);
        printf("%s\n",a);
    }
    return 0;
}

260


#include <stdio.h>
int main() {
    int n,t;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        printf("%d\n",n*(n+1)*(n+2)/6);
    }
}


261

#include<stdio.h>
int main() {
    int n,a[3][3]= {0},i,j;
    scanf("%d",&n);
    while(n--) {
        for(i=0; i<3; i++)
            for(j=0; j<3; j++)
                scanf("%d",&a[i][j]);
        for(i=0; i<3; i++) {
            for(j=0; j<3; j++)
                printf("%d ",a[j][i]);
            printf("\n");
        }
    }
    return 0;
}


263

#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    while(n--) {
        int m,a,b,c,a1,b1,c1;
        scanf("%d",&m);
        scanf("%d%d%d",&a,&b,&c);
        for(int i=1; i<m; i++) {
            scanf("%d%d%d",&a1,&b1,&c1);
            if(a1>a||(a1==a&&b1<b)||(a1==a&&b1==b&&c1>c))
                a=a1,b=b1,c=c1;
        }
        printf("%d\n",c);
    }
    return 0;
}

264

#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main() {
    int temp,k,i;
    char s[100];
    scanf("%d",&temp);
    getchar();
    while(temp--) {
        gets(s);
        k=strlen(s);
        while(k) {
            for(i=0; i<k; ++i)
                if(s[i]!=s[k-1-i]||k==1||k%2) {
                    cout<<k<<endl;
                    k=0;
                }
            k=k/2;
        }
    }
}



266

#include <stdio.h>
#include <string.h>
int main(void) {
    int n,k,i;
    char a[100];
    //freopen("input.txt", "r", stdin);
    scanf("%d",&n);
    getchar();
    while(n--) {
        gets(a);
        k=strlen(a);
        for(i=k-1; i>=0; i--)
            if(a[i]>='a'&&a[i]<='z')
                printf("%c",a[i]);
        printf("\n");
    }
    return 0;
}


268

#include "iostream"
#include "cstdio"
#include "cstring"
using namespace std;
int main(int argc, char const *argv[]) {
    int n,i;
    char a[1001];
    cin>>n;
    getchar();
    while(n--) {
        int x=0,y=0,z=0,m=0;
        //把getchar();放这里了，我去
        gets(a);
        m=strlen(a);
        for(i=0; i<m; i++) {
            if(a[i]=='R')x++;
            if(a[i]=='W')y++;
            if(a[i]=='B')z++;
        }
        for (i=0; i<x; i++)
            cout<<'R';
        for(i=0; i<y; i++)
            cout<<'W';
        for(i=0; i<z; i++)
            cout<<'B';
        cout<<endl;
    }
    return 0;
}


270

#include<stdio.h>
int main() {
    int n,i,k,t,s;
    while(scanf("%d",&n)!=EOF) {
        for(i=1;; i++) {
            k=i;
            s=1;
            while(k) {
                t=k%10;
                s=s*t;
                k=k/10;
            }
            if(s==n) { //计算i各位之积是否等于n
                printf("%d\n",i);
                break;
            }
            if(i>3555) { //这里就不懂了，为什么大于3555就是-1了
                printf("-1\n");
                break;
            }
        }
    }
}


273

#include "stdio.h"
#include "string.h"
int main(int argc, char const *argv[]) {
    int n;
    char a;
    //freopen("input.txt","r",stdin);
    scanf("%d",&n);
    getchar();
    while(n--) {
        int number=0;
        while(scanf("%c",&a),a!='\n') {
            if (a>='a'&&a<='z')
                number++;
        }
        if (number%26==0)
            printf("z\n");
        else
            printf("%c\n",'a'+number%26-1);
    }
    return 0;
}

274


#include<stdio.h>
int main() {
    int n;
    double m,pi=3.1415926;
    scanf("%d",&n);
    while(n--) {
        scanf("%lf",&m);
        printf("%.2lf\n",pi*m*m/3);
    }
    return 0;
}

275

#include "iostream"//十进制转换成二进制
using namespace std;
void dec_bin(const int x) {
    if (x/2>0) {
        dec_bin(x/2);
        cout<<x%2;
    } else cout<<x;
}
int main(int argc, char const *argv[]) {
    int data=0;
    while(cin>>data) {
        dec_bin(data);
        cout<<endl;
    }
    return 0;
}


276

#include<stdio.h>
int main() {
    int i;
    char a, b;
    scanf("%d", &i);
    while(i--) {
        getchar();
        scanf("%c %c", &a, &b);
        if(a>b)
            printf("%c<%c\n", a,b);
        else if(a==b)
            printf("%c=%c\n", a,b);
        else if(a<b)
            printf("%c>%c\n", a,b);
    }
    return 0;
}


277

#include "iostream"
#include "string.h"
#include "cstdio"
using namespace std;
int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    while(n--) {
        int m,i;
        char a[6]="zzzzz",str[6];
        cin>>m;
        getchar();
        for(i=0; i<m; i++) {
            scanf("%s",str);
            if(strcmp(a,str)>0)
                strcpy(a,str);
        }
        printf("%s\n",a);
    }
    return 0;
}


278

#include <stdio.h>
int main() {
    int n,i,ind,m,k;
    scanf("%d",&m);
    while(m--) {
        scanf("%d%d",&n,&k);
        ind=1;
        for(i=2; i<=n; i++) {
            ind=(ind+k)%i;
            if(ind==0)ind=i;
        }
        printf("%d\n",ind);
    }
    return 0;
}


283

#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(string a, string b) {
    return a.size() < b.size();
}
int main() {
    int n;
    int count=0;
    string a[10001];
    while(cin>>n) {
        if(n==0)break;

        for(int i=0; i<n; i++) {
            cin>>a[i];
        }
        sort(a,a+n,cmp);//sort
        cout<<"SET "<<++count<<endl;
        for(int i=0; i<n; i+=2)
            cout<<a[i]<<endl;
        if(n%2==0) {
            for(int i=n-1; i>0; i-=2)
                cout<<a[i]<<endl;
        } else for(int i=n-2; i>0; i-=2)
                cout<<a[i]<<endl;
    }

    return 0;
}


286

/**
 * Project Name: nyoj
 * File Name: 286.cpp
 * Created on: 2015年4月23日 下午9:02:01
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<map>
using namespace std;
int main() {
    int n;
    string m;
    cin >> n;
    map<string, int> count;
    for (int i = 0; i < n; i++) {
        cin >> m;
        count[m]++;
    }
    map<string, int>::iterator it = count.begin(), bt;
    int max = -1;
    for (it = count.begin(); it != count.end(); it++) {
        if (it->second > max) {
            max = it->second;
            bt = it;
        }
    }
    cout << bt->first << " " << bt->second << endl;
    return 0;
}



289

#include<iostream>//01背包
#include<cstring>
using namespace std;
int main() {
    int n,v,a[1005],b,c;
    while(cin>>n>>v) {
        memset(a,0,sizeof(a));
        if(n==0&&v==0)break;
        for(int i=0; i<n; i++) {
            cin>>b>>c; //重量和价值
            for(int j=v; j>=b; j--)//从后向前枚举，
                if( a[j-b]+c> a[j])//a[j]取a[j-b]+c、a[j]价值较大者
                    a[j] = a[j-b]+c;
        }
        cout<<a[v]<<endl;
    }
    return 0;
}


291

#include<iostream>//欧拉商数
using namespace std;
int oula(int n) {
    int ret = 1, i;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {  //剔除所有因子
            n /= i;
            ret *= i - 1;
            while (n % i == 0) {
                n /= i;
                ret *= i;//为了保持公式的n*(1-1/p)..中的n
            }
        }
    }
    if (n > 1) //本身是质数的情况
        ret *= n - 1;
    return ret;
}
int main() {
    int n;
    while (cin >> n&&n) {
        cout << oula(n) << endl;
    }
}


303

/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?cid=281&cpid=8
 * by jtahstu on 2015/3/17 20;00
 */
#include<iostream>
#include<string.h>
#include<cctype>
#include<cstdio>
using namespace std;
int
main () {
    int n;
    cin >> n;
    while (n--) {
        char s[15];
        int len, i, sum;
        cin >> s;
        if (s[0] >= 'A' && s[0] <= 'Z') {
            len = strlen (s);
            for (i = sum = 0; i != len; ++i)
                sum = sum * 26 + (s[i] - 'A' + 1);
            printf ("%d\n", sum);
        } else {
            sscanf (s, "%d", &sum);
            for (i = 0; sum; ++i) {
                s[i] = (sum - 1) % 26 + 'A';
                sum = (sum - 1) / 26; //关键
            }
            for (--i; i >= 0; --i)
                putchar (s[i]);
            putchar ('\n');
        }
    }
    return 0;
}


308

/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?cid=281&cpid=13
 * by jtahstu on 2015/3/18 10:00
 */
#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    int ncase, i, j, maxlen;
    scanf("%d", &ncase);
    while(ncase--) {
        string str, tmp, res; //str原始数据，tmp倒置str，res相同子串
        cin>>str;
        tmp = str;
        reverse(tmp.begin(), tmp.end()); //倒置
        maxlen = 0;
        for(i = 0; i < str.size(); ++i) {
            for(j = 1; j <= str.size() - i; ++j) { //j代表截取的长度
                if(tmp.find(str.substr(i, j)) != string::npos) { //如果截取匹配
                    if(j > maxlen) {
                        maxlen = j; //长度更新
                        res = str.substr(i, j); //最长子串
                    }
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}




312

#include <stdio.h>

int isLeapYear(int n) {
    return n % 400 == 0 || (n % 4 == 0 && n % 100 != 0) ? 1 : 0;
}

int main(void) {
    int t, year, month, day, n, i;

    scanf("%d", &t);
    while (t--) {
        scanf("%d-%d-%d", &year, &month, &day);
        /* 如果出生于润年2月29日，20年后不是润年，则没有20岁生日 */
        if (month == 2 && day == 29 && !isLeapYear(year + 20)) {
            printf("-1\n");
            continue;
        }
        n = 365 * 20;
        for (i = year + 1; i < year + 20; i++)
            if (isLeapYear(i))
                n++;
        if (((month == 1 || (month == 2 && day <= 28)) && isLeapYear(year)) ||
                (month == 2 && day == 29 && isLeapYear(year + 20)) ||
                (month > 2 && isLeapYear(year + 20)))
            n++;
        printf("%d\n", n);
    }
    return 0;
}


314

/**
 * Project Name: nyoj
 * File Name: 314.cpp
 * Created on: 2015年4月24日 下午8:41:02
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//f(20)=2584*f(1)+4181*f(2)
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        int m;
        bool flag=false;
        cin >> m;
        for (int i = m / 4181; i > 0; i--) {
            int f1 = (m - 4181 * i) / 2584;
            if (f1 * 2584 + 4181 * i == m) {
                cout << f1 << " " << i << endl;
                flag=true;
                break;
            }
        }
        if(!flag)cout<<"No answer"<<endl;
    }
    return 0;
}


316

#include<stdio.h>
#include<math.h>
int main() {
    char name[1000];
    double number,price,total;
    total=0;
    while(scanf("%s%lf%lf",name,&number,&price)!=EOF) {
        total+=number*price;
    }
    printf("%.1lf\n",floor(total*10+0.5)/10);
    return 0;
}

324

#include "stdio.h"
int f(int m) {
    if(m==0) return 1;
    else return 2*(f(m-1)+1);
}
int main() {
    int n,m;
    //freopen("input.txt","r",stdin);
    scanf("%d",&n);
    while(n--) {
        scanf("%d",&m);
        printf("%d\n",f(m));
    }
    return 0;
}

#include<stdio.h>
int main() {
    int n,m;
    scanf("%d",&n);
    while(n--) {
        scanf("%d",&m);
        printf("%d\n",(3<<m)-2);
    }
    return 0;
}

325

import java.util.Scanner;

public class Main {
    static int total = 0;
    static int a[];
    static int m;
    static int n;
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {

        while (sc.hasNext()) {
            n = sc.nextInt();
            total = 0;
            m = 20001;
            a = new int[25];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                total += a[i];
            }
            dfs(0, 0);
            System.out.println(m);
        }
    }

    private static void dfs(int cur, int sum) {
        if (cur == n) {
            return;
        }
        int t;
        t = (Math.abs(total - 2 * sum));
        if (m > t) {
            m = t;
        }
        dfs(cur + 1, sum + a[cur]);
        dfs(cur + 1, sum);
    }

}

333

#include<iostream>//欧拉商数
using namespace std;
int oula(int n) {
    int ret = 1, i;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {  //剔除所有因子
            n /= i;
            ret *= i - 1;
            while (n % i == 0) {
                n /= i;
                ret *= i;//为了保持公式的n*(1-1/p)..中的n
            }
        }
    }
    if (n > 1) //本身是质数的情况
        ret *= n - 1;
    return ret;
}
int main() {
    int n;
    while (cin >> n) {
        cout << oula(n) << endl;
    }
}


352

#include "stdio.h"
int main(int argc, char const *argv[]) {
    int a[60]= {1,2,3},year,i;
    for (year= 3; year < 60; year++)
        a[year]=a[year-1]+a[year-3];
    //freopen("input.txt","r",stdin);
    while(scanf("%d",&year)!=EOF&&year) {
        printf("%d\n",a[year-1]);
    }
    return 0;
}

366

/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=366
 * by jtahstu on 2015/2/5 4:00
 * 知识点： 排列生成器 	按字典序的下一个排列 	next_permutation()
 *  					按字典序的前一个排列 	prev_permutation()
 */

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--) {
        int m;
        string s;
        cin>>m;
        for(int i=1; i<=m; i++)
            s+=i+'0';
        cout<<s<<endl;
        while(next_permutation(s.begin(),s.end())) {
            cout<<s<<endl;
        }
    }
    return 0;
}


374


#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
double mm[210][12];

int main() {
    int t,n,m,k,i,j;
    scanf("%d",&t);
    while(t--) {
        memset(mm,0,sizeof(mm));
        scanf("%d%d%d",&n,&m,&k);
        if(m==2)
            printf("1.000000\n");
        else {
            mm[1][k]=1;
            for(i=2; i<=2*n-1; i++) {
                if(i%2==0) {
                    mm[i][1]=mm[i-1][1]/2;//处理边界情况
                    mm[i][m]=mm[i-1][m-1]/2;
                    for(j=2; j<m; j++)
                        mm[i][j]=(mm[i-1][j-1]+mm[i-1][j])/2;
                } else {
                    mm[i][1]=mm[i-1][1]+mm[i-1][2]/2;
                    mm[i][m-1]=mm[i-1][m-1]/2+mm[i-1][m];
                    for(j=2; j<m-1; j++)
                        mm[i][j]=(mm[i-1][j]+mm[i-1][j+1])/2;
                }
            }
            printf("%.6lf",mm[i-1][1]);
            for(j=2; j<m; j++)
                printf(" %.6lf",mm[i-1][j]);
            printf("\n");
        }
    }
    return 0;
}


399

#include<stdio.h>
int main() {
    int n,b;
    while(scanf("%d%d",&n,&b)!=EOF) {
        int count;
        count=n/b;
        printf("%d\n",count);
    }
    return 0;
}

400

#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        string a,b;
        cin>>a>>b;
        int jt=0;
        for(int i=0; i<a.size(); i++)
            jt+=a[i]-'0';
        for(int j=0; j<b.size(); j++)
            jt+=b[j]-'0';
        cout<<jt<<endl;
    }
    return 0;
}


410

#include<iostream>
using namespace std;

int f(int n) {
    int count=1,s=1;
    while(s%n!=0) {
        count++;
        s=(s*10+1)%n;
    }
    return count;
}

int main() {

    int n;
    while(cin>>n)
        cout<<f(n)<<endl;
    return 0;
}


414


#include<iostream>
const char* msg[]= {"is a Sky Number.","is not a Sky Number."};
using namespace std;
int fun(int n,int d) {  //整数转化为d进制
    int sum=0,a;
    while(n>0) {
        a=n%d;
        sum+=a;
        n/=d;
    }
    return sum;
}

int main() {
    int b;
    while(cin>>b&&b) {
        int p=1;
        int x=fun(b,10),y=fun(b,12),z=fun(b,16);
        if(x==y&&y==z)
            p=0;
        cout<<b<<" "<<msg[p]<<endl;
    }

}


420

#include<stdio.h>
int erfen(int n,int p) {
    int a=n;
    int b=p;
    int result=1;
    while(b != 0) {
        if(b % 2 == 1) {
            result=(result * a)%10003;  //乘一个a,也就是i
        }
        a =(a*a)%10003; //平方
        b /= 2;  //把这个数截一半
    }
    return result;
}
int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        int n,p;
        int sum=0;
        scanf("%d %d",&n,&p);
        int i=1;
        for(i=1; i<=n; i++)
            sum=(sum+erfen(i,p))%10003;
        printf("%d\n",sum);
    }
    return 0;
}


427

#include <stdio.h>
#include <string.h>
int in[7][7];   //表示连续的数字为a、b时,a出现的位置
int main() {
    int a,b,n,f[53]= {0,1,1},circle,from;
    while(scanf("%d%d%d",&a,&b,&n),a) {
        a%=7 , b%=7;
        memset(in,0,sizeof(in));
        in[1][1]=1;
        for(int i=3; i<=51; i++) {
            f[i]=(a*f[i-1] + b*f[i-2])%7;
            if(in[ f[i-1] ][ f[i] ]) {
                circle = i-1 - in[ f[i-1] ][ f[i] ];    //循环节长度
                from   = in[ f[i-1] ][ f[i] ] ;         //循环开始的位置
                break;
            }
            in[ f[i-1] ][ f[i] ] = i-1;
        }
        printf("%d\n",f[ from + (n-from)%circle ]);
    }
    return 0;
}

429

#include<iostream>
using namespace std;
int main() {
    long long a[55]= {0,1,2};
    int n;
    for(int i=3; i<51; i++)
        a[i]=a[i-1]+a[i-2];
    while(cin>>n) {
        cout<<a[n]<<endl;
    }
    return 0;
}


436

#include "stdio.h"
#include "stdlib.h"
int main() {
    int n;
    //freopen("input.txt","r",stdin);
    while(scanf("%d",&n)!=EOF)
        printf("%d\n",(n+1)*(abs(n-1)+1)/2);
    return 0;
}

448

#include<stdio.h>
#include<string.h>
int main() {
    int n,b,k,l,i,j;
    char a[100],c[100],max;
    scanf("%d",&n);
    while(n--) {
        max=0;
        memset(a,0,sizeof(a));
        memset(c,0,sizeof(c));
        scanf("%s %d",a,&b);
        k=strlen(a);
        for(j=0,i=0; j<k-b; j++) {
            for(; i<=b+j; i++) {
                if(max<a[i]) {
                    max=a[i];
                    l=i;
                    c[j]=max;
                }
            }
            i=l+1;
            max=0;
        }
        for(i=0; i<k-b; i++)
            printf("%c",c[i]);
        printf("\n");
    }
    return 0;
}

451

#include<stdio.h>
int main() {
    long long int f[22],i,nx,mx,n,m ;//本题需用long long
    f[1]=0 ;
    f[2]=1 ;
    for(i=3 ; i<=20 ; i++) // 递推公式
        f[i]=(i-1)*(f[i-1]+f[i-2]) ;
    while(scanf("%lld%lld",&n,&m)!=EOF) {
        nx=1 ;
        mx=1 ;
        for(i=n-m+1 ; i<=n ; i++)
            nx*=i ;
        for(i=m ; i>=2 ; i--)
            mx*=i ;
        printf("%lld\n",nx/mx*f[m]) ;
    }
    return 0 ;
}


453

#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;

int main() {
    int ncase;
    scanf("%d", &ncase);
    while(ncase--) {
        int num;
        scanf("%d", &num);
        int ans = num * ((sqrt(5.0) + 1) / 2); //威佐夫博弈
        printf("%d %d\n", ans, ans + num);
    }
    return 0;
}

455

#include<stdio.h>
int main() {
    int k;
    scanf("%d",&k);
    while(k--) {
        int n;
        scanf("%d",&n);
        printf("%d\n",n);
    }
    return 0;
}

457


#include<stdio.h>
int main() {
    int a,b,c,n;
    char x;
    scanf("%d",&n);
    getchar();
    while(n--) {
        while(scanf("%c",&x)&&x!='\n') {
            if(x>=97&&x<=122) printf("%c",x-32);
            else if(x<=90&&x>=64) printf("%c",x+32);
        }
        printf("\n");
    }
}

458

#include "iostream"
using namespace std;
int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    while(n--) {
        long long m;
        cin>>m;
        cout<<(m-1)*1000+471<<endl;
    }
    return 0;
}
461

/**
 * Project Name: nyoj_2.0
 * File Name: 461.cpp
 * Created on: 2015年5月4日 下午7:58:13
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int f[23] = { 0, 1 };
double x = log((sqrt(5.0) + 1.0) / 2.0) / log(10.0);
double y = -0.5 * log(5.0) / log(10.0);
int main() {
    int n, i;
    for (i = 2; i < 21; ++i)
        f[i] = f[i - 1] + f[i - 2];
    while (scanf("%d", &n) != EOF) {
        if (n <= 20)
            printf("%d\n", f[n]);
        else {
            double t = n * x + y;
            t -= floor(t);
            t = pow(10.0, t);
            while (t < 1000)
                t *= 10;
            printf("%d\n", (int) t);
        }
    }
}

463

#include "iostream"
using namespace std;
int main(int argc, char const *argv[]) {
    int n,i,j,m;
    cin>>n;
    while(n--) {
        cin>>m;
        for(i=1; i<=m; i++) {
            for(j=i; j<=9; j++)
                cout<<i<<'*'<<j<<'='<<i*j<<' ';
            cout<<endl;
        }
    }
    return 0;
}

464

#include <stdio.h>
/* 题意：有若干袋饼干，每袋数量不同，要求拿走一袋，使总数量为偶数，求有多少种拿法？ */
int main(void) {
    int n, ai, odd, even, sum, i;

    while (scanf("%d", &n) != EOF) {
        sum = odd = even = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &ai);
            sum += ai;
            if (ai % 2 == 0)
                even++;
            else
                odd++;
        }
        printf("%d\n", sum % 2 == 0 ? even : odd);
    }
    return 0;
}
465

#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main() {
    int n,a[105]= {0};
    cin>>n;
    while(n--) {
        memset(a,0,sizeof(a));
        string s;
        cin>>s;
        for(int i=0; i<s.length(); i++)
            a[i]=s[i]-'0';
        sort(a,a+s.length());
        if(a[s.length()-1]==0)cout<<"0";  //注意字符串都是0的情况
        else {
            for(int i=s.length()-1; i>=0; i--)
                cout<<a[i];
        }
        cout<<" ";
        if(a[s.length()-1]==0)cout<<"0";
        else {
            for(int i=0; i<s.length(); i++)
                if(a[i]!=0)
                    cout<<a[i];
        }
        cout<<endl;
    }

    return 0;
}

469

#include<stdio.h>
int main() {
    int n,a[56]= {0,1,1,2,4,6,9,14,21,31,46,68,100,147,216,317,465,682,1000,1466,2149,
                  3150,4617,6767,9918,14536,21304,31223,45760,67065,98289,144050,211116,309406,453457,
                  664574,973981,1427439,2092014,3065996,4493436,6585451,9651448,14144885,20730337,
                  30381786,44526672,65257010,95638797,140165470,205422481,301061279,441226750,
                  646649232,947710512,1388937263
                 };
    while ((scanf("%d", &n)==1) && n) {
        printf("%d\n", a[n]);
    }
    return 0;
}
473

#include<iostream>
#include<cmath>
using  namespace std;
int main() {
    int a,b;
    while(cin>>a>>b) {
        int c=1;
        if(a == 0)
            cout << "0" << endl;
        else if(b == 0)
            cout << "1" << endl;
        else {
            a=a%10;
            b=b%4+4;
            for(int i=0; i<b; i++)
                c=c*a;
            cout<<c%10<<endl;
        }
    }
    return 0;
}
477

#include "iostream"
using namespace std;
int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    while(n--) {
        double a,b,c;
        cin>>a>>b>>c;
        if((a+b-c>-0.0001)&&(a+b-c<0.0001))
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
478

#include<stdio.h>
#include<math.h>
long sum[500005];
int main() {
    int t,n,i,ss,j;
    for(i=1; i<=500000; i++)
        for(j=1; j*i<=500000; j++)//是i的倍数的加i
            sum[i*j]+=i;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        printf("%ld\n",sum[n]-n);
    }
    return 0;
}

480

/**
 * Project Name: nyoj_2.0
 * File Name: 480.cpp
 * Created on: 2015年5月17日 下午9:56:14
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
bool prime(int n) {
    for(int i=2; i*i<=n; i++) {
        if(n%i==0)return false;
    }
    return true;
}
int main() {
    int f[35]= {0,3,7},n;
    for(int i=3; i<=30; i++)
        f[i]=f[i-1]+f[i-2];
    while(cin>>n) {
        if(prime(f[n]))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
484

#include<iostream>
#include<string>
using namespace std;
int main() {
    string a;
    int count=1;
    while(cin>>a) {
        if(a=="I") {
            cout<<"Case "<<count<<": 1"<<endl;
            count++;
        }
        if(a=="II") {
            cout<<"Case "<<count<<": 2"<<endl;
            count++;
        }
        if(a=="III") {
            cout<<"Case "<<count<<": 3"<<endl;
            count++;
        }
        if(a=="IV") {
            cout<<"Case "<<count<<": 4"<<endl;
            count++;
        }
        if(a=="V") {
            cout<<"Case "<<count<<": 5"<<endl;
            count++;
        }
        if(a=="VI") {
            cout<<"Case "<<count<<": 6"<<endl;
            count++;
        }
        if(a=="VII") {
            cout<<"Case "<<count<<": 7"<<endl;
            count++;
        }
        if(a=="VIII") {
            cout<<"Case "<<count<<": 8"<<endl;
            count++;
        }
        if(a=="IX") {
            cout<<"Case "<<count<<": 9"<<endl;
            count++;
        }
        if(a=="X") {
            cout<<"Case "<<count<<": 10"<<endl;
            count++;
        }
        if(a=="XI") {
            cout<<"Case "<<count<<": 11"<<endl;
            count++;
        }
        if(a=="XII") {
            cout<<"Case "<<count<<": 12"<<endl;
            count++;
        }
    }

    return 0;
}

486

#include "iostream"
using namespace std;
int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    while(n--) {
        int a,b,c;
        char x,y;
        cin>>a>>x>>b>>y>>c;
        if(x=='+'&&a+b==c)cout<<"Accept"<<endl;//四种情况
        else if(x=='+'&&a+b!=c)cout<<"Wrong Answer\n"<<a+b<<endl;

        if(x=='-'&&a-b==c)cout<<"Accept"<<endl;
        else if(x=='-'&&a-b!=c)cout<<"Wrong Answer\n"<<a-b<<endl;

        if(x=='*'&&a*b==c)cout<<"Accept"<<endl;
        else if(x=='*'&&a*b!=c)cout<<"Wrong Answer\n"<<a*b<<endl;

        if(x=='/'&&b==0) cout<<"Input Error"<<endl;
        else if(x=='/'&&a/b==c)cout<<"Accept"<<endl;
        else if(x=='/'&&a/b!=c)cout<<"Wrong Answer\n"<<a/b<<endl;

        if(x=='%'&&a%b==c)cout<<"Accept"<<endl;
        else if(x=='%'&&a%b!=c) cout<<"Wrong Answer\n"<<a%b<<endl;
    }
    return 0;
}

488

/***********************************************************************
输入正整数n,把整数1,2,3……,n组成一个环,使得相邻两个整数之和均为素数,输出时从整数1开始逆时针排序.同一个环应恰好输出一次.n<==16
样例输入：
6
样例输出:
1 4 3 2 5 66
1 6 5 2 3 4

分析:
1、每个环都从1开始，先将数组a[0]赋值1.
2、每选定前一个素数，后一个位置就少一个可选择项，由此可用一个数组bUsed[]来标记状态.
3、前一个后一个选定值总和前一个选定值关联，由此可用回溯法(深度优先遍历的方式遍历解答树)。
************************************************************************/

#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int n=0;//输入n<=16
int a[20];
bool bUsed[20];//对应数组a[20],判断对应节点在当前求得素数环中(解答树)是否有它

/*判断是素数*/
bool isp(int n) {
    if(n<3)
        return false ;
    int len=(int)sqrt(n+0.0);
    for (int i=2; i<=len; i++) {
        if(n%i==0)
            return false ;
    }
    return true;
}

/*递归输出所有素数环*/
void AA(int cur) {
    //在最后一层执行,输出当前求得解答串
    if(cur==n&&isp(a[0]+a[n-1])) {
        for (int i=0; i<n; i++)
            cout<<a[i]<<' ';
        cout<<endl;
        return ;
    }
    //前n-1层执行,递归选定每一层的整数,使其与前一层的整数之和为素数
    else for (int i=2; i<= n; i++) {
            if(!bUsed[i]&&isp(i+a[cur-1])) {	//当前值i没被使用,且与前一个选定值之和为素数
                a[cur]=i;//选i为当前项值
                bUsed[i]=true;//状态从没被使用改为被使用
                AA(cur+1);//进入下一层,若cur+1<n则求下一个有效值,否则执行输出语句
                //递归后面的语句在从n-1层到第1层回调时执行
                bUsed[i]=false;//状态还原,使重新求下一个有效串时不被干扰
            }
        }
}

int main() {
    int count=1;
    for (int i=0; i<20; i++)
        a[i]=i+1;//初始化一个数组1,2,3,4...
    memset(bUsed,0,sizeof(bUsed));//全部初始化为false表示均没被使用
    while (cin>>n,n) {
        if(n==1) cout<<"Case "<<count++<<":"<<endl<<"1"<<endl;
        else if(n%2==1)cout<<"Case "<<count++<<":"<<endl<<"No Answer"<<endl;
        else {
            cout<<"Case "<<count++<<":"<<endl;
            AA(1);//回溯法遍历解答树,输出所有素数环
        }
    }
}

497

/**
 * Project Name: nyoj
 * File Name: 497.cpp
 * Created on: 2015年4月22日 下午7:14:06
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    int m;
    cin >> m;
    while (m--) {
        int n,a[1005] = { 0 }, b[1005] = { 0 };
        cin >> n;
        cin >> a[0];
        b[0] = a[0];
        for (int i = 1; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            b[i] = b[i - 1] + a[i];
            sum += b[i];
        }
        cout << sum << endl;
    }
    return 0;
}

506

#include <stdio.h>
int judge(int n) {
    while (n) {
        if (n % 10 == 4)
            return 0;
        n /= 10;
    }
    return 1;
}

int main(void) {
    int n, i;
    int arr[50001] = {0};

    for (i = 1; i < 50001; i++)
        arr[i] = arr[i - 1] + judge(i);//预先用数组储存值，估计很费时
    while (scanf("%d", &n) != EOF)
        printf("%d\n", arr[n]);
    return 0;
}

509

#include<iostream>
#include<cstring>
using namespace std;
bool judge(int n) {
    for(int i=2; i*i<=n; i++)
        if(n%i==0)
            return false;
    return true;

}
int main() {
    int n,m,a[1300],x=2,b[1300],j;
    memset(a,0,sizeof(a));
    a[0]=2;
    a[1]=3;
    for(int i=4; i<=10000; i++)  //素数打表
        if(judge(i))
            a[x++]=i;
    cin>>n;
    while(n--) {
        int max=-1;
        memset(b,0,sizeof(b));
        cin>>m;
        for(int i=2; i<=m; i++) { //1~m依次判断
            j=0;
            int tmp=i; //临时存储
            while(tmp!=1) {
                while(tmp%a[j]==0) { //分解素数，然后保存到b数组中
                    b[j]++;
                    tmp/=a[j];
                    if(j>max)max=j;//一开始没判断最大存到哪个位置
                }//导致后面用i<j输出时，出现后面部分数组没有输出的情况
                j++;
            }
        }
        for(int i=0; i<=max; i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
    return 0;
}

513

/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=513
 * by jtahstu on 2015/3/31 19:00
 */

import java.math.BigDecimal;
import java.util.Scanner;

public class Main {
    public static Scanner cin = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO 自动生成的方法存根
        BigDecimal abigDecimal, bbigDecimal;
        while (cin.hasNext()) {
            abigDecimal = cin.nextBigDecimal();
            bbigDecimal = cin.nextBigDecimal();
            if (abigDecimal.add(bbigDecimal).compareTo(BigDecimal.ZERO) == 0)
                System.out.println("0");
            else
                System.out.println(abigDecimal.add(bbigDecimal)
                                   .stripTrailingZeros().toPlainString());

        }

    }

}

517

/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=517
 * by jtahstu on 2015/3/31 20:00
 */
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    static BigInteger jt(BigInteger a,BigInteger b) {
        return (b.compareTo(BigInteger.valueOf(0))==0)?a:jt(b, a.mod(b));
    }
    static BigInteger tt(BigInteger a,BigInteger b) {
        return a.multiply(b).divide(jt(a, b));
    }
    public static Scanner cin = new Scanner(System.in);
    public static void main(String[] args) {
        // TODO 自动生成的方法存根
        BigInteger res[]=new BigInteger[105];
        int n;
        res[1]=BigInteger.valueOf(1);
        for(int i=2; i<=100; i++) {
            res[i]=tt(BigInteger.valueOf(i), res[i-1]);
        }
        while(cin.hasNext()) {
            n=cin.nextInt();
            System.out.println(res[n]);
        }

    }

}

518

/**
 * Project Name: nyoj_2.0
 * File Name: 518.cpp
 * Created on: 2015年5月19日 下午4:49:09
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */

#include <iostream>
using namespace std;
int main() {
    int a[16]= {1,0,1,0,1,0,1,0,1,1,1,1,1,1,1},n,m; //认为15等于0，所以a[15]看成a[0]即可
    cin>>n;
    while(n--) {
        cin>>m;
        cout<<a[m%15]<<endl;
    }
    return 0;
}

519

/**
 * Project Name: nyoj_2.0
 * File Name: 519.cpp
 * Created on: 2015年5月16日 下午2:12:18
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int convert(int a) {
    if(a<10)return a;
    else {
        int tmp=a,sum=0;
        while(tmp) {
            sum+=tmp%10;
            tmp/=10;
        }
        return convert(sum);
    }
}
void solve(string s) {
    int a[7]= {0},ans[7]= {0};
    for(int i=0; i<7; i++)
        for(unsigned int j=i; j<s.length(); j+=6) {
            a[i]+=s[j]-'a'+97;
        }
    for(int i=0; i<6; i++) {
        ans[i]=convert(a[i]);
        cout<<ans[i];
    }
    cout<<endl;
}
int main() {
    int n;
    cin>>n;
    while(n--) {
        string s;
        cin>>s;
        solve(s);
    }
    return 0;
}
520

#include<cstdio>
#include<algorithm>
using namespace std;
int a[1000005];
int icount = 1;
int main() {
    for(int i = 2; i <= 1000000; i++) {
        if(!a[i]) {
            a[i] = icount++;
            for(int j = i * 2; j <= 1000000; j += i)
                a[j] = a[i];
        }
    }
    int num;
    while(scanf("%d", &num) == 1) {
        for(int i = num; i >= 1; i--) {
            if(num % i == 0 && a[i] != -1) {
                printf("%d\n", a[i]);
                break;
            }
        }
    }
}

524


/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=524
 * by jtahstu on 2015/3/31 20:00
 */
import java.math.BigDecimal;
import java.util.Scanner;

public class Main {
    public static Scanner cin = new Scanner(System.in);
    public static void main(String[] args) {
        // TODO 自动生成的方法存根
        BigDecimal a,b;
        while(cin.hasNext()) {
            a=cin.nextBigDecimal();
            b=cin.nextBigDecimal();
            //cin.nextLine();//这里留意下
            if(a.compareTo(b)==0)
                System.out.println("YES");
            else {
                System.out.println("NO");
            }
        }
    }

}

525

#include <stdio.h>
#include <stdlib.h>

int comp ( const void *a, const void *b ) {
    return * ( int * ) a - * ( int * ) b;
}

int main() {
    char s[5010];
    int a[2510];
    while (scanf("%s",s) != EOF) {
        int i = 0,temp;
        int j = 0;
        while (s[i] == '5' && s[i] != '\0') {
            i++;
        }
        if (s[i] == '\0') {
            printf("0\n");
        } else {
            while (s[i] != '\0') {
                temp = 0;
                while (s[i] != '5' && s[i] != '\0') {
                    temp = temp * 10 + s[i] - '0';
                    i++;
                }
                if (s[i] != '\0') {
                    while (s[i] == '5') {
                        i++;
                    }
                }
                a[j++] = temp;

            }
            qsort(a,j,sizeof(int), comp);
            for (i=0; i<j; i++) {
                printf("%d ",a[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
527

/**
 * Project Name: nyoj_2.0
 * File Name: 527.cpp
 * Created on: 2015年5月17日 下午9:09:50
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
const int N=1314520;
int separate(int n) { //分离n,得a*b的值
    int a=0,b=0,temp=n;
    while(temp) {
        temp%2==1?a++:b++;
        temp=temp>>1;
    }
    return a*b;
}
int main() {
    int fb[405]= {1,1},n;
    for(int i=2; i<400; i++) //打表
        fb[i]=(fb[i-1]%N+fb[i-2]%N)%N;
    while(cin>>n) {
        cout<<fb[separate(n)]<<endl;
    }
    return 0;
}
528

#include<iostream>
using namespace std;
int main() {
    int n;
    while(cin>>n) {
        int ans=0,m;
        for(int i=0; i<n; i++) {
            cin>>m;
            ans^=m;
        }
        cout<<ans<<endl;
    }
    return 0;
}

532

#include<iostream>
using namespace std;
int res;
int sum(int x,int y) {
    int i,k=1;
    for(i=0; i<y; i++)
        k*=9;
    return k*x;
}
bool flag(int y) {
    int x,z=0;
    while(y) {
        x=y%10;
        y=y/10;
        if(x==0)
            return false;
        res+=sum(x,z);
        z++;
    }
    return true;
}
int main() {
    int n;
    while(cin>>n) {
        res=0;
        if(n==0||!flag(n))
            cout<<"Unlucky"<<endl;
        else
            cout<<res<<endl;
    }
    return 0;
}
540

/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?cid=281&cpid=16
 * by jtahstu on 2015/3/17 21:00
 */
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int jt(int k) {
    int n=log10(k*1.0)+1,sum=0,a=0,j=k;
    for(int i=0; i<n; i++) {
        a=j%10;
        j/=10;
        sum=sum*10+a;
    }
    return sum;
}
int main() {
    int n,a[50+5]= {0},p,q;
    cin>>n;
    while(n--) {
        cin>>p>>q;
        for(int i=p,j=0; i<=q; i++,j++)
            a[j]=jt(i);
        sort(a,a+q-p+1);
        for(int i=0; i<=q-p; i++)
            for(int j=p; j<=q; j++)
                if(a[i]==jt(j))
                    cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}


541

import java.util.Scanner;
import java.math.BigInteger;

public class Main {

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        BigInteger a;
        int t, n;
        t = cin.nextInt();
        while (t-- > 0) {
            n = cin.nextInt();
            if (n < 5) {
                System.out.println(n);
                continue;
            }
            a = BigInteger.valueOf(3);
            a = a.pow(n / 3);
            if (n % 3 == 1)
                a = a.multiply(BigInteger.valueOf(4)).divide(
                        BigInteger.valueOf(3));
            else if (n % 3 == 2)
                a = a.multiply(BigInteger.valueOf(2));
            System.out.println(a);
        }
    }
}

545

/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?cid=281&cpid=21
 * by jtahstu on 2015/3/18 11:00
 */
#include<iostream>
using namespace std;
int main() {
    int a[31][31]= {0},n;
    cin>>n;
    while(n--) {
        int m;
        bool flag=true;
        cin>>m;
        for(int i=0; i<m; i++)
            for(int j=0; j<m; j++)
                cin>>a[i][j];
        //方法一
        for(int i=0; i<m; i++)
            if(a[i][i]!=0) {
                flag=false;
                cout<<"1"<<endl;
                break;

            }
        //方法二
        for(int i=0; i<m; i++)
            for(int j=0; j<m; j++)
                if(i!=j&&a[i][j]<=0&&flag) {
                    flag=false;
                    cout<<"2"<<endl;
                    break;

                }
        //方法三
        for(int i=0; i<m; i++) {
            for(int j=0; j<m; j++) {

                if( a[i][j] != a[j][i]&&flag) {
                    flag=false;
                    cout<<"3"<<endl;
                    break;

                }
                if(!flag)break;
            }
            if(!flag)break;
        }
        //方法四
        for(int i=0; i<m; i++)
            for(int j=0; j<m; j++)
                for(int k=0; k<m; k++)
                    if((i!=j&&j!=k&&i!=k)&&(a[i][j] + a[j][k] < a[i][k])&&flag) {
                        flag=false;
                        cout<<"4"<<endl;
                        break;

                    }
        if(flag)cout<<"0"<<endl;
    }
    return 0;
}

550

#include "iostream"
using namespace std;
int main(int argc, char const *argv[]) {
    int n;
    while(cin>>n) {
        cout<<(n%10)*100+(n/10%10)*10+(n/100)<<endl;
    }
    return 0;
}

551

#include "iostream"
using namespace std;
int main(int argc, char const *argv[]) {
    int n;
    while(cin>>n) {
        if (n>=90&&n<=100)cout<<"A"<<endl;
        if(n>=80&&n<90)cout<<"B"<<endl;
        if(n>=70&&n<80)cout<<"C"<<endl;
        if(n>=60&&n<70)cout<<"D"<<endl;
        if(n<60)cout<<"E"<<endl;
    }
    return 0;
}
552

#include "iostream"
using namespace std;
int main(int argc, char const *argv[]) {
    int n;
    while(cin>>n) {
        int i,s=1;
        for(i=1; i<=n; i++)
            s*=i;
        cout<<s<<endl;
    }
    return 0;
}
553

#include "iostream"
#include "cstring"
#include "cstdio"
using namespace std;
int main(int argc, char const *argv[]) {
    char a[10001];
    while(gets(a)!=NULL) {
        int len,i,count=0;
        len=strlen(a);
        for(i=0; i<len; i++) {
            if(a[i]=='a')count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
554

#include<stdio.h>
int main(void) {
    int a, b, i;
    while(scanf("%d%d", &a, &b) == 2) {
        for(i = a; i <= b; i ++)
            if(i % 3 == 0)
                printf("%d ", i);
        printf("\n");
    }
    return 0;
}
555

#include<stdio.h>
int main() {
    int a[10];
    while(scanf("%d%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9])==10) {
        printf("%d %d %d %d %d %d %d %d %d %d\n",a[9],a[8],a[7],a[6],a[5],a[4],a[3],a[2],a[1],a[0]);
    }
}
556

#include"stdio.h"

int gcd(int a,int b) {
    if(b==0) return a;
    return gcd(b,a%b);
}

int main() {
    int a,b;
    while(scanf("%d,%d",&a,&b)!=EOF)
        printf("%d\n",gcd(a,b));
    return 0;
}
557

#include "iostream"
#include "cstdio"
using namespace std;
int main(int argc, char const *argv[]) {
    int a,b,c,d,e,f,g,h,i,j;
    while(~scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j)) {
        int count=0;
        if(a%2==1)count++;
        if(b%2==1)count++;
        if(c%2==1)count++;
        if(d%2==1)count++;
        if(e%2==1)count++;
        if(f%2==1)count++;
        if(g%2==1)count++;
        if(h%2==1)count++;
        if(i%2==1)count++;
        if(j%2==1)count++;
        cout<<count<<endl;
    }
    return 0;
}
558

#include<stdio.h>
#include<string.h>
int main() {
    int n,i;
    scanf("%d",&n);
    while(n--) {
        char a[15]= {0};
        scanf("%s ",a);
        i=strlen(a);
        if(i==5)
            printf("3\n");
        else {
            if((a[0]=='t'&&a[1]=='w')||(a[0]=='t'&&a[2]=='o')||(a[1]=='w'&&a[2]=='o'))
                printf("2\n");
            else
                printf("1\n");
        }
    }
    return 0;
}
588

/**
 * Project Name: nyoj_2.0
 * File Name: 588,.cpp
 * Created on: 2015年5月4日 下午3:26:28
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int m,count=0;
        cin>>m;
        for(int i=0; i<=m*10; i++) {
            for(int j=0; j*2<=m*10; j++) {
                if(i+j*2<=m*10) {
                    int k=(10*m-i-j*2)/5;
                    if(i+j*2+k*5==m*10)
                        count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}



590

/**
 * Project Name: nyoj_2.0
 * File Name: 590.cpp
 * Created on: 2015年5月17日 下午7:26:04
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int main() {
    int n, m, a[1005] = { 0 };
    while (cin >> n >> m) {
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int sum, count = 0;
        for (int i = 0; i < n; i++) {
            sum=0;
            for (int j = i; j < n; j++) {
                sum += a[j];
                if (sum == m) {
                    count++;
                    break;
                }
                if(sum>m)break;
            }
        }
        cout << count << endl;
    }
    return 0;
}
593

#include "stdio.h"
int main() {
    int a[11],i,j,n;
    // freopen("input.txt","r",stdin);
    while(scanf("%d",&n)!=EOF) {
        for (i = 0; i < 10; ++i)
            scanf("%d",&a[i]);
        for (i = 0; i < 10 && n>0; ++i) {
            n=n+a[i];
        }
        printf("%d\n",i);
    }
    return 0;
}
594

/**
 * Project Name: nyoj_2.0
 * File Name: 594.cpp
 * Created on: 2015年5月17日 下午9:26:15
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<string>
using namespace std;
int getint(string &str);
int main() {
    string str;
    int a, b;
    while (cin >> str) {
        a = b = 0;
        a += getint(str);
        cin >> str;
        while (str[0] != '+') {
            a = a * 10 + getint(str);
            cin >> str;
        }
        cin >> str;
        while (str[0] != '=') {
            b = b * 10 + getint(str);
            cin >> str;
        }
        cout << a + b << endl;
    }
    return 0;
}
int getint(string &str) {
    if (str == "zero")
        return 0;
    else if (str == "one")
        return 1;
    else if (str == "two")
        return 2;
    else if (str == "three")
        return 3;
    else if (str == "four")
        return 4;
    else if (str == "five")
        return 5;
    else if (str == "six")
        return 6;
    else if (str == "seven")
        return 7;
    else if (str == "eight")
        return 8;
    else if (str == "nine")
        return 9;
    else
        return 0;
}

595

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct stu {
    int results;//成绩
    int ranking;//排名
} a[100+5];
bool compare(stu a,stu b) {
    return a.results>b.results;
}
int main() {
    int n,m,jtahstu,count;
    while(cin>>n>>m) {
        memset(a,0,sizeof(a));
        for(int i=0; i<n; i++)
            cin>>a[i].results;
        sort(a,a+n,compare);
        a[0].ranking=1;
        for(int i=1; i<n; i++) {
            if(a[i].results==a[i-1].results)
                a[i].ranking=a[i-1].ranking;
            else
                a[i].ranking=i+1;
        }
        while(m--) {
            count=0;
            cin>>jtahstu;
            for(int i=0; i<n; i++)
                if(a[i].ranking==jtahstu)
                    count++;
            cout<<count<<endl;
        }
    }
    return 0;
}

596

#include "stdio.h"
int main() {
    int n,max=0,a,b,i;
    // freopen("input.txt","r",stdin);
    while(scanf("%d",&n),n) {
        max=0;
        for(i=0; i<n; i++) {
            scanf("%d%d",&a,&b);
            if((a+b)>max)max=(a+b);
        }
        printf("%d\n",max);
    }
    return 0;
}
597

#include<iostream>
using namespace std;
int main() {
    int n;
    while(cin>>n) {
        if(n==-1)break;
        else if(n==6)cout<<"6=1+2+3"<<endl;
        else if(n==28)cout<<"28=1+2+4+7+14"<<endl;
        else if(n==496)cout<<"496=1+2+4+8+16+31+62+124+248"<<endl;
        else if(n==8128)cout<<"8128=1+2+4+8+16+32+64+127+254+508+1016+2032+4064"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}

599

#include<stdio.h>
int main(void) {
    int H,i,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++) {
        int day=1,h=0;
        scanf("%d",&H);
        while(h+10<H) {
            h+=5;
            day++;
        }
        printf("%d\n",day);
    }
    return 0;
}

604

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <iostream>
using namespace std;
int main(void) {
    char a[1001],len;
    int i,n;
    cin>>n;
    while(n--) {
        //gets(a);
        cin>>a;   //输入就有问题,scanf也不行
        len=strlen(a);
        for(i=0; i<len; i+=2) {
            //if(a[i]<='z'&&a[i]>='a') a[i]=a[i]-32;    也可
            if(islower(a[i]))
                a[i]=toupper(a[i]);

        }
        for(i=0; i<len; i++)
            cout<<a[i];
        cout<<endl;
    }
    return 0;
}

606

#include "stdio.h"
int main(int argc, char const *argv[]) {
    int n;
    scanf("%d",&n);
    while(n--) {
        puts("I Love Acm.");
    }
    return 0;
}
608

#include<stdio.h>
int father[1002];
int find(int x) { //寻找根节点
    if(father[x]!=x)
        father[x]=find(father[x]);
    return father[x];
}
void merge(int a,int b) { //合并a和b所在的集合
    int p=find(a);
    int q=find(b);
    father[p]=q;
}
int main() {
    int n,m,a,b,i;
    while(~scanf("%d",&n)&&n) {
        scanf("%d",&m);
        for(i=1; i<=n; i++)
            father[i]=i; //初始化为每个点为一个单独集合
        for(i=0; i<m; i++) {
            scanf("%d%d",&a,&b);
            merge(a,b); //合并a、b
        }
        int count=0;
        for(i=1; i<=n; i++)
            if(father[i]==i) //查找有几个集合
                count++;
        printf("%d\n",count-1);
    }
    return 0;
}
611

#include "stdio.h"
int main() {
    int n;
    while(scanf("%d",&n)!= EOF) {
        if(n%2==0) printf("%d\n",(n+2)*n/4 );
        else printf("%d\n",(n+1)*(n-1)/4 );
    }
    return 0;
}
612

#include "iostream"
#include "cstdio"
#include "algorithm"
using namespace std;
int main(int argc, char const *argv[]) {
    int n,a[11];
    cin>>n;
    while(n--) {
        for (int i = 0; i < 10; ++i) {
            cin>>a[i];
        }
        sort(a,a+10);
        cout<<a[7]<<endl;
    }
    return 0;
}

615

#include "stdio.h"
int main() {
    int n;
    //freopen("input.txt","r",stdin);
    while(~scanf("%d",&n)) {
        int a[1001],b[1001],temp,i,j;
        for (i = 0; i < n; ++i)
            scanf("%d",&a[i]);
        for(i=0; i<n-1; i++)//这里是i<n-1
            for(j=0; j<n-i-1; j++)//j<n-i-1
                if (a[j]>a[j+1]) {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
        for (i = 0; i < n-1; ++i) {
            b[i]=a[i+1]-a[i];
        }
        int min=b[0],m=0;
        for(i=0; i<n-1; i++) {
            if(b[i]<min) {
                min=b[i];
                m=i;
            }
        }
        if(min==b[0]) printf("%d %d\n",a[0],a[1] );
        else printf("%d %d\n",a[m],a[m+1] );

    }
}
622

/**
 * Project Name: nyoj_2.0
 * File Name: 622.cpp
 * Created on: 2015年5月17日 下午8:06:45
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int main() {
    int n;
    while(cin>>n&&n) {
        int sum=0,a[105]= {0};
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=0; i<=n/2; i++)
            sum+=1+(a[i]>>1);
        cout<<sum<<endl;
    }
    return 0;
}
623

/**
 * Project Name: nyoj_2.0
 * File Name: 623.cpp
 * Created on: 2015年5月17日 下午7:59:51
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
#include<stdio.h>
int main() {
    int m, n, p, i, j, k;
    int A[50][50], B[50][50], C[50][50];

    while (~scanf("%d%d%d", &m, &n, &p)) {
        if (m == 0 && n == 0 && p == 0) {
            break;
        }

        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                scanf("%d", &A[i][j]);
            }
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < p; j++) {
                scanf("%d", &B[i][j]);
            }
        }

        for (i = 0; i < m; i++) {
            for (j = 0; j < p; j++) {
                C[i][j] = 0;
                for (k = 0; k < n; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        for (i = 0; i < m; i++) {
            for (j = 0; j < p; j++)
                printf("%d ", C[i][j]);
            printf("\n");
        }
    }
    return 0;
}

624

/**
 * Project Name: nyoj_2.0
 * File Name: 624.cpp
 * Created on: 2015年5月17日 下午8:38:50
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int change624(string s) {

    if(s[0]=='N')return 1;
    if(s[0]=='E')return 2;
    if(s[0]=='S')return 3;
    if(s[0]=='W')return 4;
}
int main() {
    string s,ans624[5]= {"","North","East","South","West"};
    int n,m;
    while(cin>>s>>n) {
        int start=change624(s);
        for(int i=0; i<n; i++) {
            cin>>m;
            if(m==0) {
                if(start==1)start+=4;
                start-=1;
            }
            if(m==1) {
                if(start==4)start-=4;
                start+=1;
            }
        }
        cout<<ans624[start]<<endl;
    }
    return 0;
}
626

/**
 * Project Name: nyoj
 * File Name: 626.cpp
 * Created on: 2015年4月22日 下午7:37:22
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//8 8
//1 5 6 9 10 12 16 59
//5 6 9 8 15 17 65 98
//样例输出
//3
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
#include<string.h>
int a[100001];
int main() {
    int n, m;
    while (scanf("%d%d", &n, &m) == 2) {
        memset(a, 0, sizeof(a));
        int k = 0, b;
        for (int i = 0; i < n; i++) {
            scanf("%d", &b);
            a[b] = 1;
        }
        for (int i = 0; i < m; i++) {
            scanf("%d", &b);
            if (a[b])
                k++;
        }
        printf("%d\n", k);
    }
    return 0;
}

628

/**
 * Project Name: nyoj_2.0
 * File Name: 628.cpp
 * Created on: 2015年5月19日 下午9:41:50
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int a[10000005];
struct jt {
    int geshu; //个数
    int shuzi; //数字
} b[100000];
int main() {
    int n, m;
    cin >> n;
    while (n--) {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        int count = 0;
        cin >> m >> a[0];
        b[0].shuzi = a[0];
        b[0].geshu++;
        for (int i = 1; i < m; i++) {
            cin >> a[i];
            if (a[i] == a[i - 1])
                b[count].geshu++;
            else {
                count++;
                b[count].shuzi = a[i];
                b[count].geshu++;
            }
        }
        for (int i = 0; i <= count; i++)
            cout << b[i].geshu << " " << b[i].shuzi << " ";
        cout << endl;

    }
    return 0;
}
630

#include<stdio.h>
#include<string.h>
int f[8]= {1,2,4,8,16,32,64,128};
int main() {
    int i,sum,len,count,j;
    char str[35],ch[33];
    while(~scanf("%s",str)) {
        len=strlen(str);
        if(len==32) {
            sum=(str[0]-'0')*f[7];
            for(i=1; str[i]!='\0'; i++) {
                if(i%8==0) {
                    printf("%d.",sum);
                    sum=(str[i]-'0')*f[7];
                } else {
                    sum+=(str[i]-'0')*f[7-(i%8)];
                }
            }
            printf("%d\n",sum);
        } else {
            ch[32]='\0';
            j=0;
            for(i=0; str[i]!='\0'; i++) {
                if((str[i]>='0')&&(str[i]<='9')) {
                    sum=0;
                    while((str[i]>='0')&&(str[i]<='9')) {
                        sum=sum*10+(str[i]-'0');
                        i++;
                    }
                    count=j+7;
                    while(count>=j) {
                        ch[count]=((sum%2)+'0');
                        sum=sum/2;
                        count--;
                    }
                    j=j+8;
                }
                if(str[i]=='\0')
                    break;
            }
            printf("%s\n",ch);
        }
    }
    return 0;
}

636

#include<iostream>
using namespace std;
int main() {
    for(int m,n; cin>>n;) {
        while(n--)cin>>m;
        cout<<"YES"<<endl;
    }
}

637

#include <string>
#include <iostream>

using namespace std;

int main() {
    string str,model="我";
    int l = model.size();
    while(cin>>str,str!="0") {
        for(int i=0; i<str.size(); i++)
            if(str.substr(i,l)=="我")
                str.replace(i,l,"你");
            else if(str.substr(i,l)=="你")
                str.replace(i,l,"我");
        cout << str << endl;
    }
    return 0;
}

638

#include "stdio.h"
int main() {
    int a,b,i,x;
    // freopen("input.txt","r",stdin);
    while(~scanf("%d",&a)) {
        int sum=0,s1=0,s2=0;
        s1=a*10+5;
        for (i = 0; i < 4; ++i) {
            scanf("%d",&a);
            s1+=(a*10+5);
        }
        for (i = 0; i < 5; ++i) {
            scanf("%d",&b);
            s2+=b;
        }
        if(s2<=s1) printf("No !\n");
        else printf("Yes %d\n",s2-s1);
    }
    return 0;
}
639

/**
 * Project Name: codes
 * File Name: test.cpp
 * Created on: 2015年5月17日 下午8:06:45
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

int jtahstu(int a[]) {
    if(a[1]-a[0]==a[2]-a[1]&&a[2]-a[1]==a[3]-a[2]&&a[3]-a[2]==a[4]-a[3]) {
        cout<<a[4]+a[1]-a[0]<<" "<<a[4]+2*(a[1]-a[0])<<" "<<a[4]+3*(a[1]-a[0])
            <<" "<<a[4]+4*(a[1]-a[0])<<" "<<a[4]+5*(a[1]-a[0])<<endl;
        return 0;
    } else if((a[2]==a[1]+a[0])&&(a[3]==a[2]+a[1])&&(a[4]==a[3]+a[2])) {
        for (int i=5; i<10; i++) {
            a[i]=a[i-1]+a[i-2];
        }
        cout<<a[5]<<" "<<a[6]<<" "<<a[7]<<" "<<a[8]<<" "<<a[9]<<" "<<endl;
        return 0;
    } else if((double)a[1]/a[0]==(double)a[2]/a[1]&&(double)a[2]/a[1]==
              (double)a[3]/a[2]&&(double)a[3]/a[2]==(double)a[4]/a[3]
              &&a[1]!=0&&a[2]!=0&&a[3]!=0&&a[4]!=0&&a[0]!=0) {
        for(int i=5; i<10; i++) {
            a[i]=a[i-1]*(a[1]/a[0]);
        }
        cout<<a[5]<<" "<<a[6]<<" "<<a[7]<<" "<<a[8]<<" "<<a[9]<<" "<<endl;
        return 0;
    }

    else {
        cout<<"None"<<endl;
        return 0;
    }
}
int main() {
    int a[15]= {0};
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]) {
        jtahstu(a);
        memset(a,0,sizeof(a));
    }
    return 0;
}

643

#include <stdio.h>
#include <string.h>

const int sz[26] = {2,22,222,3,33,333,4,44,444,5,55,555,6,66,666,7,77
                    ,777,7777,8,88,888,9,99,999,9999
                   };
void WordToNumber(char s[]) {
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == ' ') {
            printf("0 ");
        } else {
            printf("%d ",sz[s[i] - 'A']);
        }

    }
    printf("\n");
}
void NumberToWord(char s[]) {
    for(int i = 0; s[i] != '\0'; ++i) {
        if(s[i] == '0') {
            printf(" ");
            continue;
        }
        int k = 0;
        while(s[i] != ' '&&s[i] != '\0') {
            k = k*10+s[i]-'0';
            ++i;
        }
        for(int j = 0; j < 26; j++) {
            if(k == sz[j])
                printf("%c",'A'+j);
        }
    }
    printf("\n");
}
int main(int argc, char const *argv[]) {
    char s[1010];
    while(gets(s) != NULL) {
        if('0'<=s[0]&&s[0]<='9')
            NumberToWord(s);
        else
            WordToNumber(s);
    }
    return 0;
}
648

#include<stdio.h>
int a[100001];
int main() {
    int i,t,n,sum=0;
    for(i=1; i<100001; ++i) {
        t=i;
        while(t) {
            if(t%10==1)
                sum++;
            t/=10;
        }
        a[i]=sum;
    }
    while(~scanf("%d",&n)) {
        printf("%d\n",a[n]);
    }
    return 0;

}
650

#include "stdio.h"
int main(int argc, char const *argv[]) {
    int n,a[101],i;
    // freopen("input.txt","r",stdin);
    while(scanf("%d",&n),n) {
        int sum=0;
        for(i=0; i<n; i++) {
            scanf("%d",&a[i]);
            sum+=a[i]*a[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}

655


import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static Scanner cin = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO 自动生成的方法存根
        int n = cin.nextInt();
        BigInteger a[] = new BigInteger[201];
        a[1] = BigInteger.valueOf(1);
        a[2] = BigInteger.valueOf(2);
        for (int i = 3; i <= 200; i++)
            a[i] = a[i - 1].add(a[i - 2]);//递推，只是这是大数
        while (n-- > 0) {
            String s;
            s = cin.next();
            int len = s.length();
            System.out.println(a[len]);

        }
    }

}
658

/**
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=658
 * by jtahstu on 2015/3/11 20:00
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n;
    while(cin>>s>>n) {
        int x=n%s.size();
        int y=s.size()-x;
        for(int i=y; i<s.size(); i++)
            cout<<s[i];
        for(int j=0; j<y; j++)
            cout<<s[j];
        cout<<endl;
    }
    return 0;
}


659

/**
 * Project Name: C++_codes
 * File Name: jtahstu.cpp
 * Created on: 2015年5月
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int jt(int a[]) {
    if(a[2]==a[0]) {
        cout<<"YE YE YE"<<endl;
        return 0;
    } else if((a[1]==a[0]||a[2]==a[1])&&a[0]+a[1]>a[2]) {
        cout<<"YE YE"<<endl;
        return 0;
    } else if(a[0]+a[1]>a[2]) {
        cout<<"YE"<<endl;
        return 0;
    } else if(a[0]+a[1]<=a[2]) {
        cout<<"NO"<<endl;
        return 0;
    }
}
int main() {
    int n,casea=1;
    cin>>n;
    while(n--) {
        int a[4]= {0};
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        cout<<"Case #"<<casea++<<":"<<endl;
        jt(a);
    }
    return 0;
}
663

/**
 * Project Name: C++_codes
 * File Name: jtahstu.cpp
 * Created on: 2015年5月
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
bool judge(int a,int b,char c[],char d) {
    int len=strlen(c),sum=0;
    for(int i=0; i<len; i++)
        sum=sum*10+c[i]-'0';
    if(a+b==sum&&d=='+')
        return true;
    else if(a-b==sum&&d=='-')
        return true;
    else
        return false;
}
int main(int argc, char const *argv[]) {
    int count=0,a,b;
    char c[10],d;
    while(~scanf("%d%c%d=%s",&a,&d,&b,c)) {
        if(judge(a,b,c,d)) {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
664

#include<string>
#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    int i,len,sum;
    string s;
    while(cin>>s) {
        if(s=="0"&&s.size()==1)break;
        for(i=0,sum=0; i<s.size(); i++) {
            sum=10*sum+s[i]-'0';
            sum%=17;
        }
        printf(sum?"0\n":"1\n");
    }
    return 0;
}

673

#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<cstdio>
using namespace std;
int main() {
    int t,a[105];
    scanf("%d",&t);
    while(t--) {
        memset(a,0,sizeof(a));
        int n,m,l;
        scanf("%d%d",&n,&m);
        for(int i=0; i<n; i++) {
            scanf("%d",&l);
            a[l]++;
        }
        for(int i=0; i<=m; i++)
            for(int j=0; j<a[i]; j++)
                printf("%d ",i);
        printf("\n");

    }

    return 0;
}

678

#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<cstring>
#include<cstdio>
using namespace std;
int main() {
//    vector<int> a;
//    set<int> a;
    int n,k,m,a[100005];
    while(scanf("%d%d",&n,&k)!=EOF) {
        memset(a,0,sizeof(a));
        for(int i=0; i<n; i++) {
            scanf("%d",&m);
            a[m]++;
        }
        int count=0,sum=0;
        for(int i=0; i<2001; i++)
            if(a[i]!=0) {
                if(count==k)break;
                else if(count+a[i]<=k) {
                    sum+=i*a[i];
                    count+=a[i];
                } else if(count+a[i]>k) {
                    sum+=i*(k-count);
                    break;
                }
            }
        printf("%d\n",sum);
    }
    return 0;
}

682

/**
 * Project Name: nyoj
 * File Name: 682.cpp
 * Created on: 2015年4月22日 下午8:07:23
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    int m;
    cin >> m;
    while (m--) {
        int n, l;
        string s, res;
        cin >> n >> s >> l;
        res=s.substr(l%n,n-l%n)+s.substr(0,l%n);
        cout<<res<<endl;
    }
    return 0;
}

686

#include<stdio.h>
long long eular(long long n) {
    long long ret=1,i;
    for(i=2; i*i<=n; i++)
        if(n%i==0) {
            n/=i,ret*=i-1;
            while(n%i==0)
                n/=i,ret*=i;
        }
    if(n>1)
        ret*=n-1;
    return ret;
}
int main() {
    long long i,j,k,n;
    scanf("%lld",&n);
    while(n--) {
        scanf("%lld",&i);
        printf("%lld\n",eular(i));
    }
    return 0;
}
709

/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?cid=281&cpid=24
 * by jtahstu on 2015/3/17 22:00
 */
#include <iostream>
using namespace std;
int
main () {
    int n;
    cin >> n;
    while (n--) {
        int a[1000 + 5] =
        { 0 }, l, b, max = -1, count = 0;
        cin >> l >> b;
        for (int i = 0; i < b; i++)
            cin >> a[i];
        for (int i = 0; i <= b - l; i++) {
            int sum = 0;
            for (int j = i; j < i + l; j++)
                sum += a[j];
            if (sum > max)
                max = sum, count = i;
        }
        if (max>0)
            cout << count + 1 << endl;
        else
            cout << count << endl;
    }
    return 0;
}

721

#include<iostream>
#include<string>
using namespace std;
inline int tonumber(char c);
int main() {

    int n, sum1, sum2;
    string s1, s2;
    char c;
    cin >> n;
    while (n--) {
        sum1 = sum2 = 0;
        cin >> c; //获取王牌花色
        cin >> s1 >> s2;
        if (s1[s1.length() - 1] == c)
            sum1 += 100;
        if (s2[s2.length() - 1] == c)
            sum2 += 100;
        if (s1.length() == 3)
            sum1 += 10;
        else
            sum1 += tonumber(s1[0]);
        if (s2.length() == 3)
            sum2 += 10;
        else
            sum2 += tonumber(s2[0]);
        if (sum1 > sum2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;

}
inline int tonumber(char c) {
    if (c >= '2' && c <= '9')
        return c - '0';
    else if (c == 'A')
        return 1;
    else if (c == 'J')
        return 11;
    else if (c == 'Q')
        return 12;
    else
        return 13;
}
733

#include<stdio.h>
#include<math.h>
int main() {
    int n;
    scanf("%d",&n);
    while(n--) {
        int ticket1, ticket2, i, j;
        int flag1, flag2, flag3;
        char x[6];
        scanf("%d %d",&ticket1, &ticket2);
        for (i = ticket1; i <= ticket2; i++) {
            flag1 = 1;
            flag2 = 1;
            flag3=1;
            x[0] = i / 100000 + '0';
            x[1] = i /10000 % 10 + '0';
            x[2] = i / 1000 % 10 + '0';
            x[3] = i / 100 % 10 + '0';
            x[4] = i / 10 % 10 + '0';
            x[5] = i % 10 + '0';
            for (j = 0; j < 6; j++)
                if (x[j] - '0' > 6) {
                    flag3 = 0;
                    break;
                }
            for (j = 0; j < 5; j++)
                if (fabs(x[j] - x[j+1]) >4) {
                    flag1 = 0;
                    break;
                }
            for (j = 0; j < 4; j++)
                if (x[j] - x[j+1] == 0 && x[j] - x[j+2] == 0) {
                    flag2 = 0;
                    break;
                }
            if (flag1 == 1 && flag2 == 1 && flag3 == 1) {
                for (j = 0; j < 6; j++)
                    printf("%c",x[j]);
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}

744

/**
 * 题解：
 找规律水题，任取两组数即可，如4,8。计算得这个区间异或最大值为7^8=15=(1111)2=2^4-1;
 再任意找一组数2,6，计算得这个区间异或最大值为2^5=7=(111)2=2^3-1;
 通过上述分析可得知最大值为2^n-1,而n正是右边界的数的二进制位数。
 */
#include <stdio.h>
int main() {
    long long min, max, XOR, result;
    while (~scanf("%lld%lld", &min, &max)) {
        XOR = min ^ max;
        for (result = 1; result <= XOR; result <<= 1);
        printf("%lld\n", result - 1);
    }
    return 0;
}

757

#include<iostream>
#include<algorithm>
using namespace std;
struct work {
    int final;
    int score;
} a[2001];
int main() {
    int n, i, j, sum;
    while (cin >> n) {
        int b[2001] =
        { 0 };
        sum = 0;
        for (i = 0; i < n; ++i)
            cin >> a[i].final >> a[i].score;
        sort(a, a + n);
        for (i = 0; i < n; ++i) {
            for (j = a[i].final; j > 0; j--) {
                if (b[j] == 0) {
                    b[j] = a[i].score;
                    break;
                }
            }
            if (j == 0)
                sum += a[i].score;
        }
        cout << sum << endl;
    }
    return 0;

}
bool operator<(const work &a, const work &b) {
    return a.score >= b.score;
}

758

#include<iostream>
using namespace std;
int f(int m, int n) {
    if (m == 1 || n == 1 || m == 0)
        return 1;;
    if (m < n)
        return f(m, m);
    return f(m, n - 1) + f(m - n, n);
}
int main() {
    int t, m, n;
    cin >> t;
    while (t--) {
        cin >> m >> n;
        cout << f(m, n) << endl;
    }
}
766

#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    cout<<"1 2 11 101 111\n";
    cout<<"1001 10001 10101 11011 100001\n";
    cout<<"101101 110011"<<endl;
    return 0;
}
767

/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=767
 * by jtahstu on 2015/2/16 1:00
 */

#include <iostream>
#include <cstdio>
using namespace std;
bool judge(int n) {
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int jt(int n) {
    int sum = 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) {
            if (i != n / i)
                sum += i + n / i;
            else
                sum += i;
        }
    return sum + 1 + n;
}
int main() {
    int n, t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);

        if (judge(n))
            printf("Yes\n");
        else
            printf("No %d\n", jt(n));
    }
    return 0;
}
768

#include <iostream>
#include <stdio.h>
#include "string.h"
using namespace std;
int main(int argc, char const *argv[]) {
    char a[10001];
    int k,i,len;
    while(scanf("%s %d",a,&k)!=EOF) {
        len=strlen(a);
        for(i=0; i<len; i++) {
            a[i]-=k;
            if(a[i]<'A')
                a[i]+=26;
            cout<<(char)a[i];
        }
        cout<<endl;
    }
    return 0;
}
770

#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    int k1,k2,m,n;
    while(cin>>s>>k1>>k2) {
        char a[100];
        for(int i=0; i<s.length(); i++)
            for(int j=0; j<26; j++) {
                if(s[i]-'A'==(k1*j+k2)%26) {
                    a[i]=j+'A';
                    break;
                }
            }
        a[s.length()]='\0';
        cout<<a<<endl;
    }
    return 0;
}

771

#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
using namespace std;
int main() {
    char n[10001];
    while(~scanf("%s",n)) {
        getchar();
        char a[10001],s[10001];
        int j=0;
        gets(s);
        int len=strlen(s);
        for(int i=0; i<len; i++) {
            if((s[i]+(n[j]-'0'))<=122)
                a[i]=(char)(s[i]+(n[j]-'0'));
            else
                a[i]=(char)((s[i]+(n[j]-'0'))%122+31);
            j++;
            if(j==strlen(n))
                j=0;
        }
        a[len]='\0';
        printf("%s\n",a);
    }
    return 0;
}

773

import java.util.Scanner;

public class Main {
    public static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        while (true) {
            int n = input.nextInt();
            double p = input.nextDouble();
            if (n == 0 && p == 0)
                break;
            System.out.println(String.format("%.0f", Math.pow(p, 1.0 / n)));
        }
    }

}

775

//扩展欧几里得定理
#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int x,y,q;
void extend_Euclid(int a,int b) {
    if(b==0) {
        x=1;
        y=0;
        q=a;
    } else {
        extend_Euclid(b,a%b);
        int temp=x;
        x=y;
        y=temp-a/b*y;
    }
}
int main() {
    int a,b;
    while(~scanf("%d%d",&a,&b)) {
        bool flag=false;
        if(a<b) {
            int t=a;
            a=b;
            b=t;
            flag=true;
        }
        extend_Euclid(a,b);
        if(!flag)printf("%d %d\n",x,y);
        else printf("%d %d\n",y,x);
    }
    return 0;

}

779

#include<stdio.h>
int main() {
    int n,k;
    while (scanf("%d%d",&n,&k)!=EOF) {
        if(n<k)
            printf("2\n");
        else {
            if(2*n%k==0)
                printf("%d\n",2*n/k);
            else
                printf("%d\n",2*n/k+1);
        }
    }
    return 0;
}
782

#include<iostream>
using namespace std;
int main() {
    int n,m,p;
    while(cin>>n>>m>>p) {
        int count=1;
        for(int i=0; i<p; i++) {
            count*=m;
            count%=7;
        }
        if((n+count)%7)
            cout<<(n+count)%7<<endl;
        else
            cout<<"7"<<endl;
    }
    return 0;
}


784

#include<iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int a[1005],b[1005];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int j=0; j<m; j++)
        cin>>b[j];
    int sum=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            sum+=a[i]*b[j];
    cout<<sum<<endl;
    return 0;
}

793

#include<iostream>
using namespace std;

int main() {
    int n;
    while(cin>>n) {
        int m;
        bool flag=false;
        for(int i=0; i<n; i++) {
            cin>>m;
            if(m==i)flag=true;
        }
        if(flag)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}

794

#include <stdio.h>
#include <math.h>
int main() {
    long long n,m,y,x;
    scanf("%lld %lld",&n,&m);
    for(x=sqrt(2*m); x>=1; x--) {
        if(2*m%x==0) {
            y=2*m/x;
            if((x+y-1)%2==0)
                printf("[%lld,%lld]\n",(y-x+1)/2,(x+y-1)/2);
        }
    }
    return 0;
}

800

#include "iostream"
#include "stdio.h"
using namespace std;
int main(int argc, char const *argv[]) {
    int i,j,t,a[1001],n,m;
    while(cin>>n) {
        for(i=1; i<=n; i++)
            cin>>a[i];
        for(i=1; i<n; i++)
            for (j=1; j <n+1-i; j++)
                if(a[j]>a[j+1]) {
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
        for(i=1; i<=n; i++)
            cout<<(char)(a[i]%26+65)<<" ";
        cout<<endl;
    }
    return 0;
}

803

/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=803
 * by jtahstu on 2015/3/31 20:00
 */

import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static Scanner cin = new Scanner(System.in);
    public static void main(String[] args) {
        // TODO 自动生成的方法存根
        String string;
        BigInteger a,b;
        while(cin.hasNext()) {
            a=cin.nextBigInteger();
            string=cin.next();
            b=cin.nextBigInteger();
            if(string.compareTo("/")==0)
                System.out.println(a.divide(b));
            else
                System.out.println(a.mod(b));

        }
    }

}

806

#include<iostream>
using namespace std;
int main() {
    int n;
    for(cin>>n; n; n--) {
        int p,q,r;
        string s="Saturday",b="Sunday",y;
        cin>>y;
        if(y==s||y==b) {
            cin>>p>>q>>r;
            cout<<p+q+r<<endl;
            continue;
        } else {
            cin>>p>>q;
            cout<<p+q<<endl;
            continue;
        }

    }
    return 0;
}

809

#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main() {
    int n;
    for(cin>>n; n; n--) {
        int a[8];
        for(int i=0; i<7; i++)
            cin>>a[i];
        sort(a,a+7);
        double jtahstu=(a[0]+a[6]+a[3])/3.0;
        printf("%.2lf\n",jtahstu);

    }
    return 0;
}

811

#include "iostream"
using namespace std;
int max1(int a,int b,int c) { //我去，这里用的max,尼玛
    int t;
    if(a>b) {
        t=a;
        a=b;
        b=t;
    }
    if(a>c) {
        t=a;
        a=c;
        c=t;
    }
    if(b>c) {
        t=b;
        b=c;
        c=t;
    }
    return c;
}
int min1(int x,int y,int z) {
    int m;
    if(x>y) {
        m=x;
        x=y;
        y=m;
    }
    if(x>z) {
        m=x;
        x=z;
        z=m;
    }
    if(y>z) {
        m=y;
        y=z;
        z=m;
    }
    return x;
}
int main(int argc, char const *argv[]) {
    int n,i,d[10001],e[4000];
    while(cin>>n) {
        int max=0;
        for(i=1; i<=n; i++) {
            cin>>d[i];
        }
        for(i=3; i<=n; i+=3) {
            if((i/3)%2==1) {
                e[i/3]=max1(d[i-2],d[i-1],d[i]);
            }
            if((i/3)%2==0) {
                e[i/3]=min1(d[i-2],d[i-1],d[i]);
            }
        }
        max=e[1];
        for(i=2; i<=n/3; i++)
            if(e[i]>max) max=e[i];
        cout<<max<<endl;
    }
    return 0;
}

813

#include "stdio.h"
int main(int argc, char const *argv[]) {
    int i,n,k;
    while(scanf("%d%d",&n,&k),n,k) {
        int jt=0;
        for(i=0; i<n; i++) {
            if(k==i*(n-i)) {
                printf("YES\n");
                jt=1;
                break;
            }
        }
        if(jt==0)
            printf("NO\n");
    }
    return 0;
}
815

#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        double q,w,a,s,z,x;
        cin>>q>>w>>a>>s>>z>>x;
        double e=sqrt((q-a)*(q-a)+(w-s)*(w-s));
        double d=sqrt((q-z)*(q-z)+(w-x)*(w-x));
        double c=sqrt((a-z)*(a-z)+(s-x)*(s-x));
        if(e+d<=c||d+c<=e||e+c<=d)
            cout<<"Can not form a triangle."<<endl;
        else {
            double p=(e+d+c)/2;
            double area=sqrt(p*(p-e)*(p-d)*(p-c));
            printf("%.3lf\n",area);
        }
    }
    return 0;
}

816

//正则表达式。。。
import java.io.BufferedInputStream;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner in = new Scanner(new BufferedInputStream(System.in));
        while (in.hasNext()) {
            System.out.println(in.next().matches("^[_a-zA-Z][_a-zA-Z\\d]*") ? "Yes" : "No");
        }
        in.close();
    }
}

817

#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main() {
    int n;
    string s,b;
    cin>>n;
    getchar();
    for(int i=0; i<n; i++) {
        getline(cin,s);
        b+=s[0];
    }
    cout<<b<<endl;
    return 0;
}

819

#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    while(cin>>s) {
        int count=0;
        for(int i=0; i<s.length(); i++)
            if(s[i]=='c')
                count++;
        if(count==0) {
            cout<<s.length()-1<<endl;
            continue;
        } else if(count&1) {
            cout<<"0"<<endl;
            continue;
        } else {
            int t=0,x=0,y=0;
            for(int i=0; i<s.length(); i++) {
                if(s[i]=='c')
                    t++;
                if(t==count/2&&x==0)x=i;
                if(t==(count/2+1)&&y==0)y=i;
                if(t>count/2+1)break;
            }
            cout<<y-x<<endl;
            continue;
        }

    }
    return 0;
}

822

#include "stdio.h"
int main(int argc, char const *argv[]) {
    int n,i,j;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

831

/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=831
 * by jtahstu on 2015/2/16 1:00
 */

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        int sum=0,a;
        for(int i=0; i<n; i++) {
            scanf("%d",&a);
            sum+=a;
        }
        printf("%d\n",sum+n+5*(n/5));
    }
    return 0;
}

833

#include <stdio.h>
int main(void) {
    int n;
    while(scanf("%d",&n)!=EOF) {
        if(n<3)
            printf("Hrdv\n");
        else
            printf("Yougth\n");
    }
}
836

/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=836
 * by jtahstu on 2015/2/16 1:00
 */

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n, m;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &m);
        for (int i = m; i > 0; i--) {
            for (int j = i; j > 0; j--)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}

844

#include <stdio.h>

/* 整数反转 */
long long rev(int a) {
    long long s = 0;

    while (a) {
        s = s * 10 + a % 10;
        a /= 10;
    }
    return s;
}

int main(void) {
    int m, n;
    long long M, N;

    while (1) {
        scanf("%d%d", &m, &n);
        if (m == 0 && n == 0) break;
        printf("%lld\n", rev(m) + rev(n));
    }
    return 0;
}
845

#include <stdio.h>

int main() {
    int m,n,i,j;
    int a[100]= {0};
    int c[100]= {0},k=0;
    while(scanf("%d %d",&m,&n)&&m&&n) {
        a[m]+=n;
        c[k++]=m;
    }
    for(i=0; i<k-1; i++) {
        for(j=i+1; j<k; j++) {
            if(c[i]==c[j])
                c[j]=0;
        }
    }
    for(i=0; i<k; i++) {
        if(c[i]!=0) {
            printf("%d %d\n",c[i],a[c[i]]);
            c[i]=0;
        }
    }
    return 0;
}

846

#include<iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int B, E, Key, num, i;
        cin >> B >> E >> Key;
        for (i = 1; ; i++) {
            num = (B + E) / 2;
            if (num == Key) break;
            else if (num > Key) {
                E = num;
            } else B = num + 1;
        }
        if (i % 2 == 1) cout << "Win" << endl;
        else cout << "Lose" << endl;
    }
}



847

#include <stdio.h>

int main() {
    int t, n, ans, x, y, max, temp, xx, val;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        ans = max = -10000000;
        xx = x = 1;
        y =  2;
        for(int i = 1; i <= n; ++i) {
            scanf("%d", &temp);
            if((val = max - temp) > ans) {
                ans = val;
                x = xx;
                y = i;
            }
            if(temp > max) {
                max = temp;
                xx = i;
            }
        }
        printf("%d %d %d\n", ans, x, y);
    }
    return 0;
}
872

/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=872
 * by jtahstu on 2015/2/21 21:00
 */

#include <iostream>
using namespace std;
long long jt(int n, int m) {
    long long sum1=1,sum2=1;
    for(int i=n; i>n-m; i--)
        sum1*=i;
    for(int i=1; i<=m; i++)
        sum2*=i;
    return sum1/sum2;
}

int main() {
    int n, m, a[11]= {0}, s;
    while (cin >> n >> s) {
        m = n;
        for (int i = 0; i < s; i++)
            cin >> a[i];
        cout<<jt(n,a[0])<<" ";
        for (int i = 1; i < s; i++) {
            m=m-a[i-1];
            cout << jt(m, a[i]) << " ";
        }
        cout<<endl;
    }
    return 0;
}

874

#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int m, n;
    while (scanf("%d%d", &m, &n) == 2) {
        printf("%d\n", m + n + ((n - 1) / 4) * 5);
    }
    return 0;
}

882

/**
 * Project Name: nyoj
 * File Name: 882.cpp
 * Created on: 2015年4月24日 下午9:50:26
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//2
//9 7
//13 3
//样例输出
//12
//111
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
void sb(long long a,int k) {
    int s[100]= {0},i=0;
    long long sa=a;
    while(sa) {
        s[i]=sa%k;
        sa/=k;
        i++;
    }
    for(int j=i-1; j>=0; j--)
        cout<<s[j];
    cout<<endl;
}
int main() {
    int n;
    cin>>n;
    while(n--) {
        long long a;
        int k;
        cin>>a>>k;
        sb(a,k);
    }
    return 0;
}



891

#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
struct f {
    int start;
    int end;
} a[100];
int cmp(f a, f b) {

    return a.end < b.end;
}
int main() {
    int s, sum;
    while (cin >> s) {
        sum = 0;
        for (int i = 0; i < s; i++)
            cin >> a[i].start >> a[i].end;
        sort(a, a + s, cmp);
        for (int i = 0, j = 0; i < s; i++) {
            if (a[i].start > a[j].end) {
                sum++;
                j = i;
            }
        }
        printf("%d\n", sum + 1);
    }
}
906

#include<stdio.h>
int a[31][31];
int main() {
    int i,j;
    for(i=1; i<=30; ++i) {
        a[i][1]=1;
        for(j=2; j<=i; ++j) {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    int n;
    while(~scanf("%d",&n)) {
        for(i=1; i<=n; ++i) {
            printf("%d",a[i][1]);
            for(j=2; j<=i; ++j)
                printf(" %d",a[i][j]);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

915

/**
 * Project Name: nyoj_2.0
 * File Name: 915.cpp
 * Created on: 2015年4月27日 下午7:55:24
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//样例输入
//++-+--+
//-++--++
//样例输出
//4
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int main() {
    string a,b;
    while(cin>>a>>b) {
        int count1=0,count2=0;
        for(unsigned int i=0; i<a.length(); i++) {
            if(a[i]=='+')count1++;
            if(b[i]=='+')count2++;
        }
        if(count1!=count2) {
            cout<<"-1"<<endl;
            continue;
        }
        int sum=0;
        for(unsigned int i=0; i<a.length(); i++) {
            if(a[i]!=b[i]) {
                for(unsigned int j=i+1; j<a.length(); j++) {
                    if(a[j]==b[i]) {
                        swap(a[i],a[j]);
                        sum+=j-i;
                        break;
                    }
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}



954

#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int taotao(int n) {
    int Ret=0;
    while(n) {
        n>>=1;
        Ret+=n;
    }
    return Ret;
}
int main() {
    int n;
    while(cin>>n)
        cout<<taotao(n)+1<<endl;
    return 0;
}
955

/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=955
 * by jtahstu on 2015/2/15 0:00
 */

#include <iostream>
#include <cstdio>
using namespace std;
typedef long long in;

int main() {
    in n,m;
    scanf("%lld",&m);
    while(m--) {
        in a,count,sum=0;
        scanf("%lld",&n);
        for(int i=0; i<n; i++) {
            scanf("%lld",&a);
            count=(i+1)*(n-i);
            sum+=a*count;
            //if(i!=0&&i!=(n-1))sum1+=a;
        }
        //printf("%lld\n",n*sum+(n-2)*sum1);开始想错了，以为是这样
        printf("%lld\n",sum);
    }
    return 0;
}

972

#include<iostream>
using namespace std;

int func(int m, int n) {
    if(m==0)return n;
    if(n==0)return m;
    int t,i = n, j = m;
    while ((m%n)!=0) {
        t = n;
        n = m % n;
        m = t;

    }
    return i*j/n;
}
int main() {
    int a,b,c;
    while(cin>>a>>b>>c) {
        int num=0;
        if(a>0)num++;
        if(b>0)num++;
        if(c>0)num++;
        cout<<num*func(a,func(b,c))<<endl;
    }
    return 0;
}

975

#include <iostream>
#include <string.h>
using namespace std;
int array[2][1000010];
int main() {
    int a, b, c;
    int cnt = 0, cntp = 0;
    memset(array, 0, sizeof(array));
    for (int i = 1; i <= 1000000; i++) {
        a = b = c = 0;
        if ((i/100000)%10 == 1 || (i/10000)%10 == 1
                || (i/1000)%10 == 1 || (i/100)%10 == 1 || (i/10)%10 == 1 || i%10 == 1)
            a = 1;
        if ((i/100000)%10 == 2 || (i/10000)%10 == 2
                || (i/1000)%10 == 2 || (i/100)%10 == 2 || (i/10)%10 == 2 || i%10 == 2)
            b = 1;
        if ((i/100000)%10 == 5 || (i/10000)%10 == 5
                || (i/1000)%10 == 5 || (i/100)%10 == 5 || (i/10)%10 == 5 || i%10 == 5)
            c = 1;
        if (a && b && c)
            ++cnt;
        if ((i/1000)%1000 == 521 || (i/100)%1000 == 521
                || (i/10)%1000 == 521 || (i%1000) == 521)
            ++cntp;
        array[0][i] += cnt;
        array[1][i] += cntp;
    }
    int x, y, ca = 0;
    while (cin >> x >> y) {
        cout << "Case " << ++ca << ":";
        cout << array[0][y] - array[0][x-1] << " "
             << array[1][y] - array[1][x-1] << endl;
    }
    return 0;
}
977

#include<stdio.h>
int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        if(n<3) {
            printf("%d\n",n);
            continue;
        }
        if(n%2) {
            printf("%lld\n",(long long)(n-1)*(n-2)*(n));
        } else {
            if(n%3==0) {
                printf("%lld\n",(long long)(n-1)*(n-2)*(n-3));//不用long long转变类型会哇
            } else
                printf("%lld\n",(long long)(n)*(n-1)*(n-3));
        }
    }
}
1000

#include<iostream>
using namespace std;
const int MOD=1000000007;
const int MX=MOD-1;
void mult(long long A[2][2],long long B[2][2],long long C[2][2]) {
    C[0][0]=(A[0][0]*B[0][0]%MX+A[0][1]*B[1][0]%MX)%MX;
    C[0][1]=(A[0][0]*B[0][1]%MX+A[0][1]*B[1][1]%MX)%MX;
    C[1][0]=(A[1][0]*B[0][0]%MX+A[1][1]*B[1][0]%MX)%MX;
    C[1][1]=(A[1][0]*B[0][1]%MX+A[1][1]*B[1][1]%MX)%MX;
}
void sq(long long A[2][2],long long B[2][2]) {
    mult(A,A,B);
}
void pow2(long long A[2][2],int n,long long B[2][2]) {
    long long E[2][2],F[2][2];

    if(n==0) {
        B[0][0]=B[1][1]=1;
        B[0][1]=B[1][0]=0;
        return;
    }
    if(n%2==0) {
        sq(A,E);
        pow2(E,n/2,B);
        return ;
    }
    sq(A,E);
    pow2(E,n/2,F);
    mult(F,A,B);
}

long long mpw(long long a,long long n) {
    a%=MOD;
    if(n==1||a==0)
        return a%MOD;
    if(n==0)
        return 1;
    if(n%2==0)
        return mpw(a*a%MOD,n/2);
    return mpw(a*a%MOD,n/2)*a%MOD;
}
void solve(int a,int b, int n) {
    if(n==0)cout<<a%MOD<<endl;
    else if(n==1)cout<<b%MOD<<endl;
    else {
        long long B[2][2];
        long long A[2][2]= {{1,1},{1,0}};
        pow2(A,n-2,B);
        long long xn=B[0][0];
        pow2(A,n-1,B);
        long long yn=B[0][0];
        cout<<1LL*mpw(a,xn)*mpw(b,yn)%MOD<<endl;
    }
}
void print(long long A[2][2]) {
    cout<<A[0][0]<<" "<<A[0][1]<<endl;
    cout<<A[1][0]<<" "<<A[1][1]<<endl;
}
int main() {

    for(int a,b,n; cin>>a>>b>>n;) {
        solve(a,b,n);
    }
    return 0;
}


1003

#include<iostream>
using namespace std;
int main() {
    int n,i;
    while(cin>>n) {
        if(n==0) {
            cout<<1<<'\n';
            continue;
        }
        cout<<(2*n-1)*(2*n-1)+1<<'\n';
    }
    return 0;
}

1009

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    double a,b,c;
    double p,s,r;
    while(cin>>a>>b>>c) {
        p=(a+b+c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        r=a*b*c/(4*s);
        cout<<setiosflags(ios::fixed)<<setprecision(2)<<r<<endl;
    }
}

1016

#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        double x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        double p1p2x = x2-x1;
        double p1p2y = y2-y1;
        double p1p3x = x3-x1;
        double p1p3y = y3-y1;
        double p1p4x = x4-x1;
        double p1p4y = y4-y1;
        double p3p4x = x4-x3;
        double p3p4y = y4-y3;
        double p3p2x = x2-x3;
        double p3p2y = y2-y3;
        double p3p1x = x1-x3;
        double p3p1y = y1-y3;
        double a = p1p2x*p1p3y-p1p2y*p1p3x;
        double b = p1p2x*p1p4y-p1p2y*p1p4x;
        double c = p3p4x*p3p2y-p3p2x*p3p4y;
        double d = p3p4x*p3p1y-p3p1x*p3p4y;
        if(a*b>0 || c*d>0)
            cout<<"Not Interseetion"<<endl;
        else
            cout<<"Interseetion"<<endl;
    }
    return 0;
}
1049

#include<iostream>
#include<stdio.h>
using namespace std;
int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    while(n--) {
        int m,x,i;
        char a[4];
        cin>>m;
        x=0;
        for(i=0; i<m; i++) {
            getchar();
            scanf("%s",a);
            if(a[0]=='X'&&a[2]=='+')x++;
            if(a[0]=='+'&&a[2]=='X')++x;
            if(a[0]=='X'&&a[2]=='-')x--;
            if(a[0]=='-'&&a[2]=='X')--x;
        }
        cout<<x<<endl;
    }
    return 0;
}
1050

#include "iostream"
using namespace std;
int main(int argc, char const *argv[]) {

    int n;
    cin>>n;
    while(n--) {
        double a,b,c,d;
        cin>>a>>b>>c>>d;
        a/b>=c/d?cout<<"iphone 5S"<<endl:cout<<"iphone 5C"<<endl;
    }
    return 0;
}
1058

/**
 * Project Name: nyoj_2.0
 * File Name: 1058.cpp
 * Created on: 2015年5月18日 下午8:12:24
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include <cstdio>
#include <cstring>
using namespace std;
int a[30],n,k,sum;
bool visit[30],flag;
void dfs(int pos) {
    if(flag==true)
        return ;
    if(sum>=k) {
        if(sum==k) {
            flag=true;
            printf("YES\n");
            for(int i=0; i<n; i++)
                if(visit[i])//标记
                    printf("%d ",a[i]);
        }
        return;//这里就是递归结束的条件，在这里加一个结束条件，时间花销就减少了不少
    }
    for(int i=pos; i<n; i++) { //搜索的过程
        sum+=a[i];
        visit[i]=1;
        dfs(i+1);
        sum-=a[i];
        visit[i]=0;
    }
}
int main() {
    int i;
    while(scanf("%d%d",&n,&k)!=EOF) {
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        memset(visit,0,sizeof(visit));
        flag=false;
        dfs(0);
        if(!flag)
            printf("NO\n");
    }
    return 0;
}
1071

/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=1071
 * by jtahstu on 2015/2/11 15:00
 * copy csdn 听自己心跳的声音
 * http://blog.csdn.net/u013634213/article/details/40055329
 */
#include<cstdio>
#include<cstring>
int main() {
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF) {
        if (!(a * b)) {
            puts("Signs can't be sure");
            continue;
        }
        if ((a >> 31) ^ (b >> 31))
            puts("Signs are opposite");
        else
            puts("Signs are not opposot");
    }
    return 0;
}

1080

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int a[152]= {0};
int main() {
    memset(a,0,sizeof(int));
    int n;
    scanf("%d",&n);
    while(n--) {
        int i;
        scanf("%d",&i);
        a[i]++;
    }
    for(int i=0; i<=150; i++) {
        for(int j=0; j<a[i]; j++) {
            printf("%d ",i);
        }
    }
    return 0;
}

1082

#include "iostream"
using namespace std;
int main(int argc, char const *argv[]) {
    int n,a,b;
    cin>>n;
    while(n--) {
        cin>>a>>b;
        if(a%b==0) cout<<a/b<<endl;
        else cout<<a/b+1<<endl;
    }
    return 0;
}
1086




import java.util.Scanner;

/*能被2的N次方的数整除的数的特征
 如果一个数末N位能被2的N次方的数整除，那么这个数就能被2的N次方的这个数整除。
 如能被8（2的3次方）整除的数的特征：这个数字的末三位能被8整除。

 能被11整除的数的特征&nbsp;&nbsp;

 把一个数由右边向左边数,将奇位上的数字与偶位上的数字分别加起来,再求它们的差,如果这个差是11的倍数(包括0),那么,原来这个数就一定能被11除.&nbsp;&nbsp;
 例如:判断491678能不能被11整除.&nbsp;&nbsp;
 —→奇位数字的和9+6+8=23&nbsp;&nbsp;&nbsp;

 —→偶位数位的和4+1+7=12&nbsp;
 23-12=11&nbsp;&nbsp;因此,491678能被11整除.&nbsp;&nbsp;这种方法叫"奇偶位差法".
 */
public class Main {

    private static int array[] = new int[] { 1, 2, 4, 8, 16, 32, 64, 128, 256,
            512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144,
                                           };

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        while (cin.hasNext()) {
            int n = cin.nextInt();
            String number = cin.next();
            int result = array[n];
            int odd = 0;
            int even = 0;
            int size = number.length();
            Long temp;
            if (size <= n) {
                temp = Long.parseLong(number);
            } else {

                temp = Long.parseLong(number.substring(size - n));
            }

            for (int i = 0; i < number.length(); i++) {
                if (i % 2 == 0) {
                    even += number.charAt(i) - '0';
                } else {
                    odd += number.charAt(i) - '0';
                }

            }

            if (Math.abs(even - odd) % 11 == 0 && temp % result == 0) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }

        }

    }

}

1088

/**
 * Project Name: nyoj
 * File Name: 1088.cpp
 * Created on: 2015年4月22日 下午9:21:33
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//2
//3
//2 5
//3 7
//4 7
//5
//1 3
//2 7
//4 1
//3 9
//4 3
//样例输出
//2 5
//3 7
//
//4 1
//4 3
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct node {
    int x, y;
} p[210];
int cmp(node a, node b) {
    if (a.x == b.x)
        return a.y < b.y;
    return a.x < b.x;
}
double kk(node a, node b) {
    return (a.y * 1.0 - b.y) / (a.x * 1.0 - b.x);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d%d", &p[i].x, &p[i].y);
            //cin>>p[i].x>>p[i].y;
        }
        sort(p, p + n, cmp);
        if (p[0].x == p[1].x) {//横坐标相同，为一条竖线，最大
            if (p[0].y < p[1].y)
                printf("%d %d\n%d %d\n", p[0].x, p[0].y, p[1].x, p[1].y);
            //cout<<p[0].x<<" "<<p[0].y<<" "<<p[1].x<<" "<<p[1].y<<endl;
            else
                printf("%d %d\n%d %d\n", p[1].x, p[1].y, p[0].x, p[0].y);
            //cout<<p[1].x<<" "<<p[1].y<<" "<<p[0].x<<" "<<p[0].y<<endl;
            puts("");
            continue;
        }
        double max = kk(p[0], p[1]);
        double max1;
        int flag = 0, flag1 = 0;

        for (int i = 1; i < n - 1; i++) {
            if (p[i].x == p[i + 1].x) {
                if (p[i].y < p[i + 1].y) {
                    printf("%d %d\n%d %d\n", p[i].x, p[i].y, p[i + 1].x,
                           p[i + 1].y);
                    //cout<<p[i].x<<" "<<p[i].y<<endl<<p[i+1].x<<" "<<p[i+1].y<<endl;
                } else {
                    printf("%d %d\n%d %d\n", p[i + 1].x, p[i + 1].y, p[i].x,
                           p[i].y);
                    //cout<<p[i+1].x<<" "<<p[i+1].y<<endl<<p[i].x<<" "<<p[i].y<<endl;
                }
                puts("");
                flag1 = 1;
                break;
            }
            max1 = kk(p[i], p[i + 1]);
            if (max1 > max) {
                max = max1;
                flag = i;
            }
        }
        if (flag1 == 0) {
            printf("%d %d\n%d %d\n", p[flag].x, p[flag].y, p[flag + 1].x,
                   p[flag + 1].y);
            puts("");
        }
    }
}

1092

#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[110],t[110],r[110];
    while(cin>>s) {
        memset(r,'\0',sizeof(r));
        memset(t,'\0',sizeof(t));
        int i,l,poi=0,dis,car,k=0,f=1,j=0;
        l=strlen(s);
        for(i=s[0]=='-'?1:0; i<l; i++) { //处理原字符串
            if(s[i]!='0'&&f) {
                if(s[i]=='.')
                    t[j++]='0';
                f=0;
            }
            if(s[i]=='0'&&f) continue;
            else t[j++]=s[i];
        }
        if(!j) {
            t[j++]='0';
            f=0;//判断当原字符串为0时的情况
        }
        for(i=0; i<j; i++) {
            if(t[i]=='.') {
                poi=i;//找出小数点的位置
                f=1;//如果有小数点，则f置1
                break;
            }
        }
        if(f) { //当字符串有小数点时
            dis=j-1-poi;//计算小数点到字符串末尾的距离
            if(dis==2) for(i=j-1; i>=0; i--)r[k++]=t[i];//如果只有两位小数，原样输出
            else if(dis==1) { //如果有一位小数，则最后一位补0
                r[k++]='0';
                for(i=j-1; i>=0; i--) r[k++]=t[i];
            } else { //如果距离大于2
                if(t[poi+3]<'5') for(i=poi+2; i>=0; i--)r[k++]=t[i];//如果第三位小数小于5
                else { //如果第三位小数大于5
                    car=1;
                    for(i=poi+2; i>=0; i--) {
                        if(t[i]=='.') {
                            r[k++]=t[i];
                            continue;
                        }
                        if(car) t[i]+=1;
                        if(t[i]>'9') {
                            t[i]='0';
                            car=1;
                        } else car=0;
                        r[k++]=t[i];
                    }
                    if(t[0]=='0')
                        r[k++]='1';
                }
            }
        } else for(i=j-1; i>=0; i--)r[k++]=t[i]; //没有小数点，原样输出
        if(s[0]=='-') { //如果是负数
            if(!f) {
                cout<<'(';//负数需要在字符串前后加上括号
                for(i=k-1; i>=0; i--) {
                    cout<<r[i];
                    if(i%3==0&&i) cout<<',';//控制','的位置
                }
                cout<<".00"<<')'<<endl;//没有小数点，补上小数点和两位零
            } else {
                cout<<'(';
                for(i=k-1; i>=0; i--) {
                    cout<<r[i];
                    if(i%3==0&&i>3) cout<<',';
                }
                cout<<')'<<endl;
            }
        } else {
            if(!f) {
                for(i=k-1; i>=0; i--) {
                    cout<<r[i];
                    if(i%3==0&&i) cout<<',';
                }
                cout<<".00"<<endl;
            } else {
                for(i=k-1; i>=0; i--) {
                    cout<<r[i];
                    if(i%3==0&&i>3) cout<<',';
                }
                cout<<endl;
            }
        }
    }
}
1096

#include<stdio.h>
main() {
    int i,j,n;
    while(scanf("%d",&n)==1) {
        for(i=1; i<=n; i++) { //先打印上半部分，如果奇数输入的是5，那么上面就会显示3行，以此类推

            for(j=1; j<=n-i; j++) { //打印空格
                printf(" ");
            }
            for(j=1; j<=2*i-1; j++) { //打印星星
                printf("*");
            }
            printf("\n");
        }
        for(i=n-1; i>=1; i--) { //n已经明确了，打印下半部分，如果n为5，那么下半部分显示两行，以此类推
            for(j=1; j<=n-i; j++) { //打印空格
                printf(" ");
            }
            for(j=1; j<=2*i-1; j++) { //打印星星
                printf("*");
            }
            printf("\n");

        }
    }
    return 0;
}
1097

#include<stdio.h>
main() {
    int n,a;
    while(scanf("%d",&n)==1) {
        double sum=0;
        while(n--) {
            scanf("%d",&a);
            sum+=a;
        }
        printf("%.0f\n",sum);
    }
    return 0;
}
1101

#include<stdio.h>
int main() {
    double a[55];
    double b[55];
    a[0]=1;
    for(int i=1; i<=22; i++)
        a[i]=a[i-1]*i;
    b[1]=0;
    b[2]=1;
    b[3]=2;
    for(int i=4; i<=22; i++)
        b[i]=(i-1)*(b[i-1]+b[i-2]);
    int n,d=1;
    while(~scanf("%d",&n),n) {
        printf("Case [%d]: ",d++);
        if(n==1)
            printf("100.00%%.\n");
        else {
            printf("%.2lf%%.\n",100*b[n]/a[n]);
        }
    }
}
1102

/**
 * Project Name: nyoj_2.0
 * File Name: 1102.cpp
 * Created on: 2015年5月16日 下午7:56:12
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int main() {
    int n;
    while(cin>>n) {
        if((n+2)%4==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}



1104

#include "iostream"
#include "cstdio"
using namespace std;
int main(int argc, char const *argv[]) {
    double a,b;
    while(scanf("%lf%lf",&a,&b)==2) {
        cout<<-a+1<<endl;
    }
    return 0;
}

1106

#include<stdio.h>
int main() {
    int a,c,e;
    char b,d;
    while(scanf("%d %c %d %c %d",&a,&b,&c,&d,&e)==5) {
        if((b=='+')&&e==a+c)printf("AC\n");
        else if((b=='-')&&e==a-c)printf("AC\n");
        else if((b=='*')&&e==a*c)printf("AC\n");
        else if((b=='/')&&e==a/c)printf("AC\n");
        else  printf("NEXT_AC\n");
    }
    return 0;
}

1112

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<stdlib.h>
#include<map>
using namespace std;

int main() {
    int t;
    cin>>t;
    string str;
    while(t--) {
        int n;
        cin>>n;
        cin>>str;
        string s;
        int len=str.size();
        map<string,int>tmp;
        int ans=0;
        for(int i=0; i<len-n+1; i++) {
            s=str.substr(i,n);
            if(tmp[s]==1)
                ans++;
            else
                tmp[s]=1;
        }
        cout<<ans<<endl;
    }
}

1114

#include "stdio.h"

int main() {
    long long n;
    while(~scanf("%lld",&n)) {
        int result;
        result=n%8;
        if(result==0) {
            printf("2\n");
        } else if(result<6) {
            printf("%d\n",result);
        } else {
            printf("%d\n",10-result);
        }
    }

    return 0;
}
1123

#include "iostream"
using namespace std;
int main() {
    cout<<"1993"<<endl;
}

1124

#include "iostream"
#include "cstdio"
#include "cstring"
using namespace std;
int main(int argc, char const *argv[]) {
    char a[1001];
    int n,len;
    while(cin>>a) {
        len=strlen(a);
        if(len%2==0) {
            for(int i=len/2-1; i>=0; i--)cout<<a[i];
            for (int i=len-1; i >=len/2; i--)cout<<a[i];
            cout<<endl;
        } else {
            for(int i=len/2; i>=0; i--)cout<<a[i];
            for(int i=len-1; i>=len/2+1; i--)cout<<a[i];
            cout<<endl;
        }
    }
    return 0;
}

1126

#include<stdio.h>
#include<math.h>
#define s(a) sqrt(a)
int main() {
    long long int a,b,c,d;
    while(~scanf("%lld%lld",&a,&b)) {
        if(a>b)
            printf("0\n");
        else {
            c=s(a-1),d=s(b);
            printf("%lld\n",d-c);
        }
    }
}
1133

#include "stdio.h"
#define MAXN 1000000000+10

int main() {
    long long m,result;
    int n,min,num=1;
    while(~scanf("%d",&n)) {

        min=100;
        result=MAXN;	//初始化

        for(int i=0; i<n; i++) {
            scanf("%lld",&m);
            int total=0;
            long long temp=m;
            while(temp>0) {
                if(temp%2==1) total++;
                temp/=2;
            }

            if(total<min) {
                result=m;
                min=total;
            } else if(total==min && m<result) {
                result=m;
                min=total;
            }
        }
        printf("Case %d: %lld\n",num++,result);
    }

    return 0;
}
1134

#include<stdio.h>
#include<stdlib.h>
struct data {
    int start;
    int end;
};
int cmp(const void *a,const void *b) {
    return ((struct data *)a)->end-((struct data *)b)->end;
}
int main() {
    struct data test[103];
    int a;
    int num;
    int ren_end;
    while(scanf("%d",&a)!=EOF) {
        if(a==0)
            break;
        num=1;
        for(int i=0; i<a; i++) {
            scanf("%d%d",&test[i].start,&test[i].end);
        }
        qsort(test,a,sizeof(struct data),cmp);
        ren_end=test[0].end;
        for(int i=1; i<a; i++) {
            if(test[i].start>=ren_end) {
                num++;
                ren_end= test[i].end;
            }
        }
        printf("%d\n",num);
    }
    return 0;
}

1156

#include<stdio.h>

int main() {
    int n;
    while(scanf("%d",&n)==1) {
        if(n<7)
            printf("No triple\n");
        else
            printf("3 5 7\n");
    }
    return 0;
}

1159

#include<iostream>
#include<cstring>
using namespace std;
int main() {
    int t;
    char a[81];
    cin>>t;
    while(t--) {
        cin>>a;
        int count=0,sum=0;
        for(int i=0; i<strlen(a)-1; i++) {
            if(a[i]=='O') {
                count++;
                cout<<count<<"+";
                sum+=count;
            }
            if(a[i]=='X') {
                count=0;
                cout<<count<<"+";
                sum+=count;
            }
        }
        if(a[strlen(a)-1]=='O') {
            count++;
            cout<<count;
            sum+=count;
        }
        if(a[strlen(a)-1]=='X') {
            count=0;
            cout<<count;
            sum+=count;
        }
        cout<<"="<<sum<<endl;
    }
    return 0;
}

1161

#include<iostream>

using namespace std;

int main() {
    int n;
    while(cin>>n) {
        int count=0;
        while(n!=1) {
            if(n%2==1)n=3*n+1;
            else if(n%2==0)n/=2;
            count++;
        }
        cout<<count%3<<endl;
    }
    return 0;
}

1167

/**
 * Project Name: nyoj_2.0
 * File Name: 1167.cpp
 * Created on: 2015年5月16日 下午3:14:26
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */

/**
 * Project Name: C++
 * File Name: nyoj1167.cpp
 * Created on: 2015年4月7日 下午9:14:33
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int a[100005], ans[100005];
int main() {
    memset(a, 0, sizeof(a));
    memset(ans, 0, sizeof(ans));
    int c, b, count = 0, sum = 0;
    for (int i = 2; i < 100001; i++) { //筛法确实是可以大大缩短时间，但还是超时
        if (a[i] == 0)
            for (int j = i + i; j < 100001; j += i)
                a[j] = 1;
    }
    for (int i = 0; i <= 100000; i++) { //筛法后还要打表以节约时间
        if (!a[i]) {
            sum++;
        }
        ans[i] = sum;
    }
    while (scanf("%d%d", &c, &b)!=EOF) {
        count++;
        printf("Case %%");
        printf("%d:%d\n", count, ans[b] - ans[c - 1]); //减去a的前一个数
    }
    return 0;
}
1169


#include<iostream>
using namespace std;

int main() {
    int sum,x;
    sum=0;
    while( cin >> x ) { //遇ctrl+z结束
        sum+=x;
        if ( cin.get()=='\n' ) { //回车输出计算结果，并初始化sum=0
            cout << sum <<endl;
            sum=0;
        }
    }
    return 0;
}

1172

/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=1172
 * by jtahstu on 2015/2/10 10:00
 */

#include<stdio.h>
long long n,m,sum;
void dfs(long long x) {
    if(x>n) return ;
    if(x>=m&&x<=n) sum++;
    dfs(x*10+7);
    dfs(x*10+1);
}
int main() {
    while(~scanf("%lld %lld",&m,&n)) {
        sum=0;
        dfs(1);
        dfs(7);
        printf("%lld\n",sum);
    }
}

1174

#include<iostream>
using namespace std;
int taotao(int n) {
    int a=1,b=1;
    while(a%n!=0) {
        b++;
        a=(a*10+1)%n;
    }
    return b;
}
int main() {
    int n;
    while(cin>>n)
        cout<<taotao(n)<<endl;
    return 0;
}

