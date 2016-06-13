/**
 * Project Name: 51NOD
 * File Name: 1001.cpp
 * Created on: 2016年5月15日 下午10:05:43
 * Author: jtahstu
 * Email: root@jtahstu.com
 * Copyright (c) 2016, www.jtahstu.com , All Rights Reserved.
 */
#include<stdio.h>
#include<set>
using namespace std;
int main() {
	set<int> s;
	int n, tmp, k, flg = 1;
	scanf("%d%d", &k, &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &tmp);
		s.insert(tmp);
	}
	for (set<int>::iterator its = s.begin(); its != s.end(); ++its) {
		tmp = k - *its;
		if (tmp <= *its)
			break;
		if (s.find(tmp) != s.end()) {
			printf("%d %d\n", *its, tmp);
			flg = 0;
		}
	}
	if (flg)
		puts("No Solution");
	return 0;
}
