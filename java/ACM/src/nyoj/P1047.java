/**
 * Project Name: oj
 * Package Name: nyoj
 * File Name: P1047.java
 * Created on: 2015年7月17日 下午9:12:59
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
package nyoj;

import java.math.BigInteger;
import java.util.Scanner;

public class P1047 {
	static Scanner cinScanner = new Scanner(System.in);

	public static void main(String[] args) {
		int n = cinScanner.nextInt();
		while (n-- > 0) {
			BigInteger bigInteger = cinScanner.nextBigInteger();
			if (bigInteger.equals(BigInteger.ONE))
				System.out.println("1");
			else
				System.out.println(bigInteger.subtract(BigInteger.ONE));

		}
	}

}
