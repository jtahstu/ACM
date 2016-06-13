#include<iostream>
#include<cmath>
using namespace std;
struct point{
    double x,y;
};
int main(){
    point a,b;
    while(cin>>a.x>>a.y>>b.x>>b.y){
        double l=sqrt((b.y-a.y)*(b.y-a.y)+(b.x-a.x)*(b.x-a.x));
       printf("%.2lf\n",l);
    }
    return 0;
}
