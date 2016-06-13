package akoj;

import java.util.Scanner;

public class P1068 {

	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		int m = count.nextInt();
		while (m-- > 0) {
			int n = count.nextInt();
			int a, sum = 0;
			while (n-- > 0) {
				a = count.nextInt();
				sum += a;
			}
			System.out.println(sum);
		}
	}

}
