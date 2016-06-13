/**
 * Project Name: akoj
 * File Name: 1051.cpp
 * Created on: 2016年5月20日 上午2:32:20
 * Author: jtahstu
 * Email: root@jtahstu.com
 * Copyright (c) 2016, www.jtahstu.com , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<algorithm>
#include<string>
#include<cstring>
#include<vector>
#include<map>
#include<set>
using namespace std;
int a[10005];
int fun(int m, int k, int i) {
    if (i == 1)
        return (m + k - 1) % m;
    else
        return (fun(m - 1, k, i - 1) + k) % m;
}
int main() {
    int n, m;
    while (cin >> n >> m) {
        int x = fun(n, m, n);
        cout<<x+1;
    }
    return 0;
}

