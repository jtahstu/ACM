/**
 * Project Name: akoj
 * Package Name: nyoj
 * File Name: P1102.java
 * Created on: 2015��5��16�� ����7:25:07
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

// Fibonacci����
// ʱ�����ƣ�1000 ms | �ڴ����ƣ�65535 KB
// �Ѷȣ�0
// ����
// Fibonacii���е���һ����ʽΪ��
//
// F[0]=7,F[1]=11,F[n]=F[n-1]+F[n-2](n>=2)
//
// ����
// ����������飬ÿ��һ����n��n<=1000000����
// ���
// ��Ӧ�����n�������еĵ�n���ܱ�3�����������Yes������No
// ��������
// 0
// 1
// 2
// 3
// 4
// �������
// No
// No
// Yes
// No
// No