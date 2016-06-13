/**
 * Project Name: akoj
 * Package Name: nyoj
 * File Name: P181.java
 * Created on: 2015年4月8日 下午9:59:36
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
package nyoj;

import java.math.BigInteger;
import java.util.Scanner;

public class P181 {
	public static Scanner cinScanner=new Scanner(System.in);
	public static void main(String[] args) {
		int n=cinScanner.nextInt();
		BigInteger[] bigInteger=new BigInteger[25];
		bigInteger[1]=BigInteger.ONE;
		for(int i=2;i<=20;i++){
			bigInteger[i]=bigInteger[i-1].multiply(BigInteger.valueOf(i));
		}
		while(n-->0){
			int m=cinScanner.nextInt();
			BigInteger resBigInteger=BigInteger.valueOf(0);
			for(int i=2;i<=m;i++){
				if(i%2==0)resBigInteger=resBigInteger.add(bigInteger[i]);
				else resBigInteger=resBigInteger.subtract(bigInteger[i]);
			}
			System.out.println(resBigInteger.add(BigInteger.ONE));
		}
	}

}
