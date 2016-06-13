package akoj;

import java.util.Scanner;

public class P1009 {

	public static int gcd(int a, int b) {
		return b == 0 ? a : gcd(b, a % b);
	}

	public static Scanner count = new Scanner(System.in);

	public static void main(String[] arges) {
		int n = count.nextInt();
		while ((n--) > 0) {
			int a = count.nextInt(), b = count.nextInt();
			System.out.println(gcd(a, b) + " " + a * b / gcd(a, b));
		}
		count.close();
	}
}
