#include<iostream>
using namespace std;
int main() {
    int n;
    while(cin>>n) {
        int fb[5]= {0};
        for(int i=0; i<n; i++) {
            int sc;
            cin>>sc;
            if(90<=sc&&sc<=100)fb[0]++;
            if(80<=sc&&sc<90)fb[1]++;
            if(70<=sc&&sc<80)fb[2]++;
            if(60<=sc&&sc<70)fb[3]++;
            if(sc<60)fb[4]++;
        }
        for(int i=0; i<4; i++)
            cout<<fb[i]<<" ";
        cout<<fb[4]<<endl;
    }

    return 0;
}
