/**
 * Project Name: ACM
 * Package Name: newakoj
 * File Name: P1039.java
 * Created on: 2016��5��20�� ����1:42:41
 * Author: jtahstu  Email:root@jtahstu.com
 * Copyright (c) 2016, www.jtahstu.com , All Rights Reserved.
 */
package newakoj;

import java.math.BigInteger;

public class P1039 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		BigInteger bigInteger;
		bigInteger = BigInteger.ONE;
		for (int i = 2; i <= 1977; i++)
			bigInteger = bigInteger.multiply(BigInteger.valueOf(i));
		System.out.println(bigInteger);
	}

}
