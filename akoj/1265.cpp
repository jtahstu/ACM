#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int judge ( string a , string b , string c , string d , string e  )
{
    if ( e == a )return 1;
    else if ( e == b )return 2;
    else if ( e == c )return 3;
    else return 4;
}
string taotao(int count, string a , string b , string c , string d)
{
    if(count==1)return a;
    else if(count==2)return b;
    else if(count==3)return c;
    else return d;
}
int main ()
{
    string a , b , c , d;
    cin >> a >> b >> c >> d;
    int n;
    cin >> n;
    int m[5] = { 0 },s[5]= {0}; //积分和进球数
    while ( n-- )
    {
        string e , f;
        int x , y;
        int count1 , count2;
        cin >> e >> f >> x >> y;
        count1 = judge ( a , b , c , d , e );
        count2 = judge ( a , b , c , d , f );
        if ( x == y )
        {
            m[count1]++;
            m[count2]++;
            s[count1]+=x;
            s[count2]+=y;
        }
        else if ( x > y )
        {
            m[count1] += 3;
            s[count1]+=x;
        }
        else
        {
            m[count2] += 3;
            s[count2]+=y;
        }
    }
    int q[5]= {0};
    for(int i=0; i<4; i++)
        q[i]=m[i];
    sort(q,q+4);

    return 0;
}
//相同的积分，按照净胜球个数比，
//相同的净胜球按照进球数来排序，为了简化我们假定每组都没有并列且分出了比赛结果
//这个没有考虑
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct team
{
    char name[100];
    int balls;
    int netballs;
    int scores;

};
typedef struct team TEAM;
TEAM T[4];

void init()
{
    T[0].balls=T[1].balls=T[2].balls=T[3].balls=0;
    T[0].netballs=T[1].netballs=T[2].netballs=T[3].netballs=0;
    T[0].scores=T[1].scores=T[2].scores=T[3].scores=0;
}
int find(char *name)
{
    int i;
    for(i=0; i<4; i++)
        if(strcmp(T[i].name,name)==0)
            return i;
    return -1;

}
int dec(const void*a,const void*b)
{
    TEAM* ta=(TEAM*)a;
    TEAM* tb=(TEAM*)b;
    if(ta->scores!=tb->scores)
        return tb->scores-ta->scores;
    if( tb->netballs-ta->netballs)
        return tb->netballs-ta->netballs;
    return tb->balls-ta->balls;
}
int main()
{
    int n,i,ba,bb,ia,ib;
    char na[100],nb[100];
    init();
    for(i=0; i<4; i++)
        scanf("%s",T[i].name);
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s%s%d%d",na,nb,&ba,&bb);
        ia=find(na);
        ib=find(nb);
        T[ia].balls+=ba;
        T[ib].balls+=bb;
        T[ia].netballs+=ba-bb;
        T[ib].netballs+=bb-ba;
        if(ba>bb)
            T[ia].scores+=3;
        else if(ba<bb)
            T[ib].scores+=3;
        else
            T[ia].scores++,T[ib].scores++;

    }
    qsort(T,4,sizeof(TEAM),dec);
    printf("%s %s\n",T[0].name,T[1].name);
    return 0;
}
