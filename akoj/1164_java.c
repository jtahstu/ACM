#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    double a, b, c;
    vector<double> v;
    while (cin >> a >> b >> c)
    {
        v.clear();
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(), v.end());
        if (pow(v[0], 2.0) + pow(v[1], 2.0) == pow(v[2], 2.0))
            cout << "ֱ��������" << endl;
        else if (pow(v[0], 2.0) + pow(v[1], 2.0) > pow(v[2], 2.0))
            cout << "���������" << endl;
        else
            cout << "�۽�������" << endl;
    }
    return 0;
}
