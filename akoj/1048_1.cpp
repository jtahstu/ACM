/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1048
 * by jtahstu on 2015/2/7 7:00
 * 知识点： 排列生成器     按字典序的下一个排列     next_permutation()
 *                         按字典序的前一个排列     prev_permutation()
 */
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    int m;
    string s,a;
    cin>>m;
    for(int i=0; i<m; i++) {
        cin>>a;
        s+=a;
    }
    cout<<s<<endl;
    while(next_permutation(s.begin(),s.end()))
        cout<<s<<endl;
    return 0;
}
