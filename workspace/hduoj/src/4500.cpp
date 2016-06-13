/**
 * Project Name: hduoj
 * File Name: 4500.cpp
 * Created on: 2015年4月13日 下午7:22:54
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//小Q系列故事——屌丝的逆袭
//
//　　刚到腾讯大厦上班的那几天，小Q眼中的一切都是那么新鲜，连每天见到的前台MM在他眼中都胖的那么可爱。小Q就这样在紧张与兴奋的情绪中度过了一天又一天，每天即勤奋认真又小心翼翼，很希望能给主管留下个好印象，以免失去这来之不易的工作机会。
//　　一段时间以后，随着对工作环境以及同事的熟悉，小Q逐渐放松下来，在工作间隙，他细细观察了自己的工作环境，发现整个工作室是一个N行M列的矩形布局，或者是因为屌丝的本性逐步暴露，他还暗自给每个同事在心里进行了魅力值评分（为区别男女，男生一律用负整数表示，女生一律用正整数表示）。
//　　现在，小Q把所有人的数据记录下来，并且这样定义一个位置的价值：
//　　1、一个位置的价值只和其上下左右四个邻居的魅力值有关（对于靠边的位置，只考虑其存在的邻居）；
//　　2、如果某位置的邻居和该位置主人性别不同，则总分加上邻居魅力值的绝对值，否则减去；
//　　3、对周围所有邻居的数据处理后，最终的得分即为这个位置的最终得分，得分越高，则该位置越好；
//
//　　现在你能帮助小Q计算一下哪里才是最佳位置吗？
//Input
//输入包含多组测试数据；
//每组测试数据的第一行包含2个整数N和M，表示工作室的布局是N行M列；
//接下来的N行，每行有M个整数，分别表示对应位置员工的魅力值数据Ki，正整数表示女生的魅力值，负整数表示男生的魅力值；
//N和M为0的时候表示输入数据结束。
//
//[Technical Specification]
//N<=20
//M<=20
//-100<=Ki<=100
//Output
//请计算并输出最佳位置的行列号以及对应的得分，如果得分最高的位置有多个，
//则请输出行号最小的那个，行号还相同的话，再比较列号，只输出列号最小的那个即可。
//Sample Input
//2 3
//5 -4 3
//-6 3 7
//0 0
//Sample Output
//1 2 11
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<cstring>
//#include<stdlib.h>
//using namespace std;
//
//int main4500() {
//	int n, m;
//	int a[25][25];
//	while (cin >> n >> m) {
//		memset(a, 0, sizeof(a));//memset写在里面，必须包含cstring头文件
//		if (m == 0 && n == 0)
//			break;
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= m; j++)
//				cin >> a[i][j];
//		int max = -200, temp, x, y;
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= m; j++) {
//				temp = 0;
//				if (a[i][j] * a[i + 1][j] < 0) //右
//					temp += abs(a[i + 1][j]);
//				else
//					temp -= abs(a[i + 1][j]);
//
//				if (a[i][j] * a[i - 1][j] < 0) //左
//					temp += abs(a[i - 1][j]);
//				else
//					temp -= abs(a[i - 1][j]);
//
//				if (a[i][j] * a[i][j - 1] < 0) //上
//					temp += abs(a[i][j - 1]);
//				else
//					temp -= abs(a[i][j - 1]);
//
//				if (a[i][j] * a[i][j + 1] < 0) //下
//					temp += abs(a[i][j + 1]);
//				else
//					temp -= abs(a[i][j + 1]);
//
//				if (temp > max) {
//					max = temp;
//					x = i;
//					y = j;
//				}
//			}
//		cout << x << " " << y << " " << max << endl;
//	}
//
//	return 0;
//}
