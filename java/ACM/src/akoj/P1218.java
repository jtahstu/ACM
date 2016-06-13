package akoj;//大数相加

import java.math.BigInteger;
import java.util.Scanner;

public class P1218 {
	public static Scanner cin = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int n = cin.nextInt();
		while (n-- > 0) {
			BigInteger a, sum = BigInteger.ZERO;
			while (cin.hasNext()) {
				a = cin.nextBigInteger();
				if (a.intValue() == 0)
					break;
				sum = sum.add(a);
			}
			System.out.println(sum);
		}
		
	}
}
