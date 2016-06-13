#include<iostream>
#include<algorithm>
using namespace std;
struct P
{
    string s;
    int jifen;
    int jinshengqiu;
    int qiushu;
} q[4];
int dec(const void*a,const void*b)
{
    P* ta=(P*)a;
    P* tb=(P*)b;
    if(ta->jifen!=tb->jifen)
        return tb->jifen-ta->jifen;
    if( tb->jinshengqiu-ta->jinshengqiu)
        return tb->jinshengqiu-ta->jinshengqiu;
    return tb->qiushu-ta->qiushu;
}
int main()
{
    for(int i=0; i<4; i++)
        cin>>q[i].s;
    int n;
    cin>>n;
    while(n--)//¶ÁÈë
    {
        string e,f;
        int a,b;
        cin>>e>>f>>a>>b;
        for(int i=0; i<4; i++)
        {
            if(e==q[i].s)
            {
                q[i].qiushu+=a;
                if(a>b)
                {
                    q[i].jinshengqiu+=a-b;
                    q[i].jifen+=3;
                }
                if(a==b)	q[i].jifen++;
            }
            if(f==q[i].s)
            {
                q[i].qiushu+=b;
                if(a<b)
                {
                    q[i].jinshengqiu+=b-a;
                    q[i].jifen+=3;
                }
                if(a==b)	q[i].jifen++;
            }
        }
    }
    qsort(q,4,sizeof(P),dec);				//ÅÅÐòÊä³ö
    cout<<q[0].s<<" "<<q[1].s<<endl;
    return 0;
}
