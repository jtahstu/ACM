//#include<iostream>
//using namespace std;
//int main() {
//    int n;
//    cin>>n;
//    while(n--) {
//        int m,a=0,b[1001]= {0};
//        cin>>m;
//        for(int i=0; i<m; i++) {
//            cin>>a;
//            b[a]++;
//        }
//        for(int i=0; i<1001; i++)
//            if(b[i]%2==1)
//                cout<<i<<endl;
//    }
//    return 0;
//}
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int m,a[10001]={0};
        cin>>m;
        for(int i=0;i<m;i++)
            cin>>a[i];
        sort(a,a+m);
        for(int i=0;i<m;i++)
            if(i%2==0&&a[i]!=a[i+1])
            cout<<a[i]<<endl;
    }
    return 0;
}
