#include<iostream>
#include<algorithm>
using namespace std;
struct tsy {
    int a,b,c;
} tt[1001];
bool jt(tsy x,tsy y) {
    if(x.a<y.a)return true;
    if(x.a==y.a&&x.b<y.b)return true;
    if(x.a==y.a&&x.b==y.b&&x.c<y.c)return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    while(n--) {
        int m,temp;
        cin>>m;
        for(int i=0; i<m; i++) {
            cin>>tt[i].a>>tt[i].b>>tt[i].c;
            if(tt[i].b<tt[i].c) {
                temp=tt[i].b;
                tt[i].b=tt[i].c;
                tt[i].c=temp;
            }
        }
        sort(tt,tt+m,jt);
        for(int i=0; i<m; i++) {
            if(!(tt[i].a==tt[i+1].a&&tt[i].b==tt[i+1].b&&tt[i].c==tt[i+1].c))
                cout<<tt[i].a<<" "<<tt[i].b<<" "<<tt[i].c<<endl;
        }
    }
    return 0;
}

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<algorithm>
//using namespace std;
//struct node
//{
//    int number;
//    int l;
//    int w;
//};
//struct node tra[1010];
//
//int cmp(node a,node b)
//{
//    if(a.number==b.number&&a.l!=b.l)
//        return a.l<b.l;
//    else if(a.number==b.number&&a.l==b.l&&a.w!=b.w)
//        return a.w<b.w;
//    else if(a.number==b.number&&a.l==b.l&&a.w==b.w)
//        return 0;
//    else
//        return a.number<b.number;
//}
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    while(n--)
//    {
//        int m;
//        scanf("%d",&m);
//        int i,j,k,a,b;
//        for(i=0; i<m; i++)
//        {
//            scanf("%d%d%d",&tra[i].number,&a,&b);
//            tra[i].l=a>b?a:b;
//            tra[i].w=a<b?a:b;
//        }
//        sort(tra,tra+m,cmp);
//        for(i=0; i<m; i++)
//        {
//
//            if((tra[i].number==tra[i+1].number&&tra[i].l==tra[i+1].l&&tra[i].w==tra[i+1].w))
//                i++ ;
//            printf("%d %d %d\n",tra[i].number,tra[i].l,tra[i].w);
//        }
//    }
//    return 0;
//}
