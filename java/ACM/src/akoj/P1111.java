package akoj;

import java.util.Scanner;

public class P1111 {

	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int n = count.nextInt();
		int sum = 0, i = 1, s = 1;
		while (i <= n) {
			s *= i;
			s %= 1000000;
			sum += s;
			sum%=1000000;
			i++;
		}
		System.out.println(sum%1000000);
	}

}
