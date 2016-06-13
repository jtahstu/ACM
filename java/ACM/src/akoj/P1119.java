package akoj;

import java.util.Scanner;

public class P1119 {

	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		while (count.hasNext()) {
			int n = count.nextInt();
			double pi = 0;
			int tt = 1;
			for (int i = 1; i <= n; i += 2) {
				pi += 1.0 * tt / i;
				tt *= -1;
			}
			System.out.printf("%.6f\n", pi * 4);
		}

	}

}
