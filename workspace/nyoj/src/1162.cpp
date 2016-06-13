/**
 * Project Name: nyoj
 * File Name: 1162.cpp
 * Created on: 2015年7月24日 下午8:03:59
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//using namespace std;
//int main() {
//	int test, i, j, len, k, ans, t, c, a[1000], b[1000];
//	char s[1000];
//	scanf("%d", &test);
//	while (test--) {
//		memset(a, 0, sizeof(a));
//		memset(b, 0, sizeof(b));
//		scanf("%s", s);
//		len = strlen(s);
//		for (i = 0; i < len; i++)
//			b[i] = s[i] - '0';
//		for (i = 0, t = 10, j = 0; i < len;) {
//			k = 1;
//			ans = 0;
//			c = i;
//			while (b[c] != 0) { //处理这个数组，把每个数存入数组
//				ans = b[c] + ans * t;
//				k++; //标记这个ans改变了，不再是0了，表示目前这个数是k位
//				c++;
//			}
//			if (k != 1) {
//				a[j] = ans; //如果这个ans不为0，则存入a数组中
//				j++;
//			}
//			i += k; //表示处理k位了，i加上k，继续处理后面的
//		}
//		sort(a, a + j + 1);
//		if (a[j] == 0) //如果最后一位为0
//			printf("0\n");
//		else {
//			for (i = 1; i < j; i++) {
//				printf("%d ", a[i]);
//			}
//			printf("%d\n", a[j]);
//		}
//	}
//	return 0;
//}
