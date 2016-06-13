package akoj;

import java.util.Scanner;

public class P1110 {

	public static Scanner count = new Scanner(System.in);

	static long tt(long n) {
		long number = 0;
		while (n != 1) {
			if (n % 2 == 0)
				n /= 2;
			else
				n = 3 * n + 1;
			number++;
		}
		return number;
	}

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
	long n=count.nextLong();
		System.out.println(tt(n));
	}

}
