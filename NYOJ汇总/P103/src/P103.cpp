///*
// * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=103
// * by jtahstu on 2015/2/12 20:00
// * hdu 1002
// */
//#include<iostream>
//#include<string>
//#include<stdio.h>
//using namespace std;
//int main() {
//    int n,count=0,m;
//    string a1,b1;
//    cin>>n;m=n;
//    while(n--) {
//        int a[1001]= {0},b[1001]= {0};
//        count++;
//        cin>>a1>>b1;
//        for(size_t i=0; i<a1.size(); i++)//大数相加算法
//            a[i]+=a1[a1.size()-i-1]-'0';
//        for(size_t i=0; i<b1.size(); i++)
//            b[i]+=b1[b1.size()-i-1]-'0';
//        for( int i = 0 ; i < 1001; i++ ) {
//            a[i] += b[i] ;
//            if( a[i] >= 10 ) {
//                a[i+1] += a[i]/10 ;
//                a[i]%=10;
//            }
//        }
//        int i;
//        for(i = 1000 ; i >= 0; i -- ) {
//            if( a[i] != 0 )break;
//        }
//        cout<<"Case "<<count<<":"<<endl;
//        cout<<a1<<" "<<"+"<<" "<<b1<<" "<<"="<<" ";
//        for(; i>=0; i--)
//            cout<<a[i];
//        cout<<endl;
////    if(count!=m)//最后一行不能多一个换行，bt
////        cout<<endl;
//    }
//    return 0;
//}
