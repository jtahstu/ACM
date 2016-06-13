/**
 * Project Name: ACM
 * Package Name: akoj
 * File Name: P1313.java
 * Created on: 2016年2月25日 下午9:05:51
 * Author: jtahstu  Email:root@jtahstu.com
 * Copyright (c) 2016, www.jtahstu.com , All Rights Reserved.
 */
package akoj;

import java.util.Scanner;

public class P1313 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner cinScanner = new Scanner(System.in);
		while (cinScanner.hasNext()) {
			int n = cinScanner.nextInt();
			int b = 0;
			if (n % 1000 >= 500)
				b = 1;
			System.out.printf("%d %d %d\n", n / 1000, b, 67 - n / 1000 - b);
		}
	}

}
