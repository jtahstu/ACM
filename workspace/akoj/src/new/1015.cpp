/**
 * Project Name: akoj
 * File Name: 1015.cpp
 * Created on: 2016年5月19日 下午9:57:09
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
int main() {
	char s[110];
	gets(s);
	for (int i = 0; i < strlen(s); i++) {
		if (isupper(s[i]))
			printf("%c", s[i] + 32);
		else
			printf("%c", s[i]);
	}
	return 0;
}
