#include<iostream>
using namespace std;
int main() {
    int n;
    while(cin>>n) {
        int school,sc;
        int score[105+10]= {0};
        int maxsc=-1,maxschool;
        for(int i=0; i<n; i++) {
            cin>>school>>sc;
            score[school]+=sc;
            if(score[school]>maxsc){
                maxsc=score[school];
                maxschool=school;
            }
        }
        cout<<maxschool<<" "<<maxsc<<endl;
    }
    return 0;
}
