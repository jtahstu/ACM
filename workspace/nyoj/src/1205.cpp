/**
 * Project Name: nyoj_2.0
 * File Name: 1205.cpp
 * Created on: 2015��5��18�� ����7:54:03 the end 2015/7/15 2:00
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstring>
//#include<cstdio>
//using namespace std;
//int a[1005][1005];
//void search(int sb, int n, int m) {
//	int i = 1, j = m;
//	bool f = false;
//	while (i <= n && j > 0) {
//		if (a[i][j] == sb) {
//			f = true;
//			cout << i << " " << j << endl;
//			break;
//		} else if (a[i][j] < sb)
//			i++;
//		else
//			j--;
//	}
//	if (!f)
//		cout << "NO" << endl;
//}
//void solve() {
//	int n, m, t, sb;
//	while (~scanf("%d%d", &n, &m)) {
//		memset(a, 0, sizeof(a));
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= m; j++)
//				scanf("%d", &a[i][j]);
//		scanf("%d", &t);
//		while (t--) {
//			scanf("%d", &sb);
//			search(sb, n, m);
//		}
//	}
//}
//int main() {
//	solve();
//	return 0;
//}
/**
 * Project Name: nyoj_2.0
 * File Name: 1205.cpp
 * Created on: 2015��5��18�� ����7:54:03 the end 2015/7/15 2:00
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<cstring>
//#include<map>
//using namespace std;
//void solve() {
//	int n, m, x, t, sb;
//	while (~scanf("%d%d", &n, &m)) {
//		map<int, int> a;
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= m; j++) {
//				scanf("%d", &x);
//				if (a[x] == 0 || (a[x] != 0 && a[x] % 10000 < j))
//					a[x] = i * 10000 + j;
//			}
//		scanf("%d", &t);
//		while (t--) {
//			scanf("%d", &sb);
//			a[sb] == 0 ?
//					printf("NO\n") :
//					printf("%d %d\n", a[sb] / 10000, a[sb] % 10000);
//		}
//	}
//}
//int main() {
//	solve();
//	return 0;
//}
//������
//ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
//�Ѷȣ�2
//����
//����һ��n*m�ľ������е�Ԫ��ÿһ�д����Ұ�����˳������ÿһ�д��ϵ��°�����˳������Ȼ�����һЩ��x������Щ���ڲ�����������У�
//���ڣ�������к�����Ԫ�����ꡣ
//����
//�����������������������n��m��0<n,m<=1000��
//Ȼ��n��m�е�һ���������е�Ԫ�ر�֤��32λ���ͷ�Χ
//Ȼ��һ����cnt����ʾѯ�����ĸ�����0<cnt<=100��
//Ȼ����cnt��Ҫѯ�ʵ�Ԫ��
//���
//������ڣ�������к�����Ԫ������
//���������NO��
//��������
//4 4
//1 2 8 9
//2 4 9 12
//4 7 10 13
//6 8 11 15
//3
//7 8 14
//�������
//3 2
//1 3
//NO
