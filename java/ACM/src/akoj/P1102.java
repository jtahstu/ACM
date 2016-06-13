package akoj;

import java.util.Scanner;

public class P1102 {

	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		double a = count.nextDouble(), b = count.nextDouble(), c = count
				.nextDouble(), d = count.nextDouble();
		double result = Math.sqrt((a - c) * (a - c) + (b - d) * (b - d));
		System.out.printf("%.3f",result);
	}

}
