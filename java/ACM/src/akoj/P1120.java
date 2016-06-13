package akoj;

import java.util.Scanner;

public class P1120 {

	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		while (count.hasNext()) {
			double n = count.nextDouble();
			double m = count.nextDouble();
			double sum = 0;
			for (double i = n; i <= m; i++) {
				sum += 1.0 / (i * i);
			}
			System.out.printf("%.5f\n", sum);
		}
	}
}