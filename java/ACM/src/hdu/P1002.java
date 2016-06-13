/**
 * Project Name: ACM
 * Package Name: hdu
 * File Name: P1002.java
 * Created on: 2016年5月14日 下午9:42:12
 * Author: jtahstu  Email:root@jtahstu.com
 * Copyright (c) 2016, www.jtahstu.com , All Rights Reserved.
 */
package hdu;

import java.math.BigInteger;
import java.util.Scanner;

public class P1002 {
	static Scanner cin = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		BigInteger[] bigIntegers = new BigInteger[205];
		bigIntegers[1] = BigInteger.valueOf(1);
		bigIntegers[2] = BigInteger.valueOf(2);
		for (int i = 3; i <= 200; i++)
			bigIntegers[i] = bigIntegers[i - 1].add(bigIntegers[i - 2]);
		while (cin.hasNext()) {
			int n = cin.nextInt();
			System.out.println(bigIntegers[n]);
		}
	}
}
