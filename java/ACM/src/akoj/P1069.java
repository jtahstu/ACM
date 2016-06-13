package akoj;

import java.util.Scanner;

public class P1069 {

	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		while (count.hasNext()) {
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
