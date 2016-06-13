package akoj;

import java.util.Scanner;

public class P1118 {

	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		while (count.hasNext()) {
			int n = count.nextInt();
			double sum = 0;
			for (int i = 1; i <= n; i++)
				sum += 1.0 / i;
			System.out.printf("%.3f\n", sum);
		}
	}

}
