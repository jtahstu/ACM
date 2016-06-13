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
        else{
            double p=(e+d+c)/2;
            double area=sqrt(p*(p-e)*(p-d)*(p-c));
            printf("%.3lf\n",area);
        }
    }
    return 0;
}
