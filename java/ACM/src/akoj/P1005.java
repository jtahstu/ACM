package akoj;

import java.util.Scanner;

public class P1005 {

	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int n = count.nextInt();
		while (n-- > 0) {
			int a = count.nextInt(), b = count.nextInt(), c = count.nextInt(), min = 0, max = 0;
			if (a > b) {
				max = a;
				min = b;
			} else if (a <= b) {
				min = a;
				max = b;
			}
			if (max + min == c)
				System.out.println(max + "+" + min + "=" + c);
			else if (max - min == c)
				System.out.println(max + "-" + min + "=" + c);
			else if (max * min == c)
				System.out.println(max + "*" + min + "=" + c);
			else if (max / min == c)
				System.out.println(max + "/" + min + "=" + c);
			else
				System.out.println("None");

		}

	}

}
