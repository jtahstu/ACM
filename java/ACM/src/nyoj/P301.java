/**
 * Project Name: akoj
 * Package Name: nyoj
 * File Name: P301.java
 * Created on: 2015年4月24日 下午7:48:59
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//TimeLimitExceeded 结果正确，超时
//矩阵快速幂
//可惜我不会啊	
package nyoj;

import java.math.BigInteger;
import java.util.Scanner;

public class P301 {
	public static Scanner cinScanner=new Scanner(System.in);
	public static void main(String[] args) {
		int n=cinScanner.nextInt();
		while(n-->0){
			BigInteger f1=cinScanner.nextBigInteger(),f2=cinScanner.nextBigInteger(),f3 = null;
			int a=cinScanner.nextInt(),b=cinScanner.nextInt(),c=cinScanner.nextInt(),m=cinScanner.nextInt();
			for(int i=3;i<=m;i++){
				f3=f1.multiply(BigInteger.valueOf(a)).add(BigInteger.valueOf(b).multiply(f2)).add(BigInteger.valueOf(c));
				f1=f2;
				f2=f3;
			}
				System.out.println(f3.mod(BigInteger.valueOf(1000007)));
		}
	}

}
