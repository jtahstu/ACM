#include<stdio.h>
#include<algorithm>
using namespace std;
struct st {
    int xh;
    int c,k;
} data[1010];
int cmp(st a,st b) { //排序关键！
    if(a.xh<b.xh)return 1;
    else if(a.xh==b.xh&&a.c<b.c)return 1;
    else if(a.xh==b.xh&&a.c==b.c&&a.k<b.k)return 1;
    return 0;
}
int main() {
    int test,i,n,t;
    scanf("%d",&test);
    while(test--) {
        scanf("%d",&n);
        for(i=0; i<n; i++) {
            scanf("%d%d%d",&data[i].xh,&data[i].c,&data[i].k);//注意比较长宽大小。
            if(data[i].c<data[i].k) {
                t=data[i].c;
                data[i].c=data[i].k;
                data[i].k=t;
            }
        }
        sort(data,data+n,cmp);
        for(i=0; i<n; i++) {
            if(!(data[i].xh==data[i+1].xh&&data[i].c==data[i+1].c&&data[i].k==data[i+1].k))
                printf("%d %d %d\n",data[i].xh,data[i].c,data[i].k);
        }
    }
    return 0;
}
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main() {
//    int n;
//    cin>>n;
//    while(n--) {
//        int m,a[1001]={0},x=0,y=0,z=0,i=0;
//        cin>>m;
//        for(int i=0;i<m;i++){
//            cin>>x>>y>>z;
//            if(z>y)a[i]=x*100+z*10+y;
//            else a[i]=x*100+y*10+z;
//        }
//        sort(a,a+m);
//        for(int i=0;i<m;i++){
//            if(a[i]!=a[i+1])
//                cout<<a[i]/100<<" "<<a[i]/10%10<<" "<<a[i]%10<<endl;
//        }
//    }
//    return 0;
//}
//
