/**
 * Project Name: akoj
 * Package Name: nyoj
 * File Name: P1102.java
 * Created on: 2015年5月16日 下午7:25:07
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
package nyoj;

import java.math.BigInteger;
import java.util.Scanner;

public class P1102 {
	static Scanner cinScanner = new Scanner(System.in);
	static BigInteger[] a = new BigInteger[100005];

	public static void main(String[] args) {
		a[0] = BigInteger.valueOf(7);
		a[1] = BigInteger.valueOf(11);
		for (int i = 2; i <= 100000; i++) {
			a[i] = a[i - 1].add(a[i - 2]);
		}
		while (cinScanner.hasNext()) {
			int n = cinScanner.nextInt();
			if (a[n].mod(BigInteger.valueOf(3)) == BigInteger.ZERO) {
				System.out.println("Yes");
			} else
				System.out.println("No");
		}
	}
}

// Fibonacci数列
// 时间限制：1000 ms | 内存限制：65535 KB
// 难度：0
// 描述
// Fibonacii数列的另一种形式为：
//
// F[0]=7,F[1]=11,F[n]=F[n-1]+F[n-2](n>=2)
//
// 输入
// 输入包括多组，每行一个数n（n<=1000000）。
// 输出
// 对应输入的n，若数列的第n项能被3整除，则输出Yes，否则No
// 样例输入
// 0
// 1
// 2
// 3
// 4
// 样例输出
// No
// No
// Yes
// No
// No