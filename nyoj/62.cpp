#include<iostream>
#include<string>
using namespace std;
int prime_number(int n)
{
    if(n==1||n==0)return 0;
    if(n==2)return 1;
    else
        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0)return 0;
        }
    return 1;
}

int maxn_minn(string a)
{
    int b[101]= {0};
    for(int i=0; i<a.size(); i++)//判断单词每个字母出现的次数 ， important ！
        for(int j=0; j<a.size(); j++)
        {
            if(a[i]==a[j])
                b[i]++;
        }
    int maxn=b[0];
    int minn=b[0];
    for(int i=0; i<a.size(); i++)
    {
        if(b[i]>maxn)maxn=b[i];
        if(b[i]<minn)minn=b[i];
    }
    return maxn-minn;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a;
        cin>>a;
        prime_number(maxn_minn(a))==1?cout<<"Lucky Word\n"<<maxn_minn(a)<<endl:cout<<"No Answer\n"<<"0"<<endl;
        //oh shit , because also cout maxn_minn(a) cause wrong twice
    }
    return 0;
}

#include<iostream>
#include<string>
#include<algorithm>
#include<numeric>
using namespace std;

bool isPrime(int n)
{
    if(n==0) return false;
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0) return false;
    }
    return true;

}
int min_e(int *p,int *q)
{
    int m=1000;
    for(int* i=p; i!=q; i++)
    {
        if(*i<m && *i!=0) m=*i;
    }
    return m;
}
int main()
{
    int n;
    string str;
    cin>>n;
    while(n--)
    {
        int count[26]= {0};
        cin>>str;
        for(int i=0; i!=str.size(); ++i)
        {
            ++count[str[i]-'a'];
        }
        int nn=*max_element(count,count+26)-min_e(count,count+26);
        if(isPrime(nn)) cout<<"Lucky Word"<<endl<<nn<<endl;
        else cout<<"No Answer"<<endl<<0<<endl;

    }
}
