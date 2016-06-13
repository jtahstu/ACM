/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1228
 * by jtahstu on 2015/2/8 6:00
 * hdu 1028
 */

#include <iostream>
using namespace std;
//int q(int n, int m) {
//    if ((n < 1) || (m < 1))return 0;
//    if ((n == 1) || (m == 1))return 1;
//    if (n < m)return q(n, n);
//    if (n == m)return q(n, m - 1) + 1;
//    return q(n, m - 1) + q(n - m, m);
//}
//int main() {
//    int s;
//    while(cin >> s)
//    cout << q(s, s) << endl;
//    return 0;
//}
int main() {
    int a[120+5]= {0},n,m;
    a[0]=1;
    for(int i=1; i<121; i++)
        for(int j=i; j<121; j++)
            a[j]+=a[j-i];
    cin>>m;
    while(m--) {
        cin>>n;
        cout<<a[n]<<endl;
    }
    return 0;
}
