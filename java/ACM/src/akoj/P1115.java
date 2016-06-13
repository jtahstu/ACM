package akoj;

import java.util.Scanner;

public class P1115 {

	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		while (count.hasNext()) {
			int a = count.nextInt(), b = count.nextInt(), c = count.nextInt();
			boolean flag = false;
			for (int i = 10; i < 101; i++) {
				if (i % 3 == a && i % 5 == b && i % 7 == c) {
					System.out.println(i);
					flag = true;
					break;
				}
			}
			if (!flag)
				System.out.println("No answer");
		}
	}

}
