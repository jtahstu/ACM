package akoj;

import java.util.Scanner;

public class P1066 {

	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		while (count.hasNext()) {
			int n = count.nextInt();
			if (n == 0)
				break;
			int a, sum = 0;
			while (n-- > 0) {
				a = count.nextInt();
				sum += a;
			}
			System.out.println(sum);
		}
	}

}