#include<iostream>
using namespace std;
int main ()
{
    int m , n , j=0,a[101] = {0},b[101]= {0};
    while (cin >>m>>n&&m&&n )
    {
        a[m] += n;
        b[j++]=m;
    }
    for(int i=0; i<j-1; i++)
    {
        for(int k=i+1; k<j; k++)
        {
            if(b[i]==b[k])
                b[k]=0;
        }
    }
    for ( int i = 0; i < j; i++ )
    {
        if( b[i] != 0 )
        {
            cout <<b[i]<<" "<<a[b[i]]<< endl;
            b[i]=0;
        }
    }
    //system ( "PAUSE" );
    return 0;
}
//#include <stdio.h>
//
//int main()
//{
//    int m,n,i,j;
//    int a[100]= {0};
//    int c[100]= {0},k=0;
//    while(scanf("%d %d",&m,&n)&&m&&n)
//    {
//        a[m]+=n;
//        c[k++]=m;
//    }
//    for(i=0; i<k-1; i++)
//    {
//        for(j=i+1; j<k; j++)
//        {
//            if(c[i]==c[j])
//                c[j]=0;
//        }
//    }
//    for(i=0; i<k; i++)
//    {
//        if(c[i]!=0)
//        {
//            printf("%d %d\n",c[i],a[c[i]]);
//            c[i]=0;
//        }
//    }
//    return 0;
//}
