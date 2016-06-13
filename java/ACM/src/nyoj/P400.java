/**
 * Project Name: akoj
 * Package Name: nyoj
 * File Name: P400.java
 * Created on: 2015年5月11日 下午10:21:11
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
package nyoj;

import java.math.BigInteger;
import java.util.Scanner;

public class P400 {
	public static Scanner cinScanner=new Scanner(System.in);
	public static void main(String[] args) {
		int n=cinScanner.nextInt();
		while(n-->0){
			BigInteger a=cinScanner.nextBigInteger();
			BigInteger b=cinScanner.nextBigInteger();
			BigInteger c=a.subtract(b);
			System.out.println(c);
		}
	}

}
