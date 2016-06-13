package akoj;

import java.util.Scanner;

public class P1124 {

	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		while (count.hasNext()) {
			double a = count.nextDouble();
			double b = Math.pow(a, 3.0);
			System.out.println((long)b);
		}

	}

}
