//by jtahstu on 2015/9/19 19:22
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;
bool cmp(string a,string b) { //排序规则
    for(int i=0; i<max(a.length(),b.length()); i++) {
        if(a[i%a.length()]<b[i%b.length()])
            return false;
        else if(a[i%a.length()]>b[i%b.length()])
            return true;
    }
    return false;
}
void bigsub(string nmax,string nmin) { //大数减法
    string a,b;
    for(int i=nmax.length()-1; i>=0; i--)
        a+=nmax[i];
    for(int i=nmin.length()-1; i>=0; i--)
        b+=nmin[i];
    int count[100000+1000],k=0;
    for(int i=0; i<b.length(); i++) {
        if(a[i]>=b[i])
            count[k++]=(a[i]-'0')-(b[i]-'0');
        else {
            count[k++]=(a[i]-'0')+10-(b[i]-'0');
            a[i+1]--;
        }
    }
    for(int i=a.length()-1; i>=0; i--)
        //cout<<count[i];
        printf("%d",count[i]);
    //cout<<endl;
    printf("\n");
}
int main() {
    int t;
    //cin>>t;
    scanf("%d",&t);
    while(t--) {
        int n;
        //cin>>n;
        scanf("%d",&n);
        string s[1000+10];
        for(int i=0; i<n; i++)
            cin>>s[i];
        sort(s,s+n,cmp);
        string nmax,nmin;
        for(int i=0; i<n; i++)
            nmax+=s[i];
        for(int i=n-1; i>=0; i--)
            nmin+=s[i];
        bigsub(nmax,nmin);
    }
    return 0;
}
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

struct str
{
    char s[20];
}sub[1005];

bool cmp(str a,str b)
{
    int i;
    int len1=strlen(a.s);
    int len2=strlen(b.s);
    int x=max(len1,len2);
    for(i=0;i<x;i++)
    {
        if(a.s[i%len1]<b.s[i%len2])
            return 1;
        else if(a.s[i%len1]>b.s[i%len2])
            return 0;
    }
    return 1;
}

int main()
{
    int t,len,i,j,n;
    char s[20050];
    int a1[20050],a2[20050];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%s",sub[i].s);
        sort(sub,sub+n,cmp);
        /*for(i=0;i<n;i++)
            printf("%s ",sub[i].s);
        printf("\n");*/
        memset(s,0,sizeof(s));
        for(i=0;i<n;i++)
            strcat(s,sub[i].s);
        len=strlen(s);
        for(j=0,i=0;i<len;i++)
            a1[j++]=s[i]-'0';
        memset(s,0,sizeof(s));
        for(i=n-1;i>=0;i--)
            strcat(s,sub[i].s);
        for(j=0,i=0;i<len;i++)
            a2[j++]=s[i]-'0';
        for(i=len-1;i>=0;i--)
        {
            a2[i]=a2[i]-a1[i];
            if(a2[i]<0)
            {
                a2[i]+=10;
                a2[i-1]-=1;
            }
        }
        for(i=0;i<len;i++)
            if(a2[i])break;
            if(i==len)
                printf("0");
        for(;i<len;i++)
            printf("%d",a2[i]);
        printf("\n");
    }
    return 0;
}
