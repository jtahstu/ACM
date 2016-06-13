#include<iostream>
using namespace std;
int main() {
    int a[8][8]= {0};
    int n;
    cin>>n;
    while(n--) {
        for(int i=0; i<7; i++)
            for(int j=0; j<7; j++)
                cin>>a[i][j];
        int count=0;
        for(int i=1; i<6; i++)
            for(int j=1; j<6; j++)
                if(a[i][j-1]==1&&a[i][j+1]==1&&a[i+1][j]==1&&a[i-1][j]==1&&a[i][j]==1)count++;
        cout<<count<<endl;
    }
    return 0;
}
