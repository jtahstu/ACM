package akoj;

import java.util.Scanner;

public class P1001 {

	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		while (count.hasNext()) {
			int a = count.nextInt(), b = count.nextInt();
			if (a == 0 && b == 0)
				break;
			long sum = (a + b) * (b - a + 1) / 2;
			System.out.println(sum);
		}

	}

}
