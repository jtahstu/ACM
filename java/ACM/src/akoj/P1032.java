package akoj;

import java.util.Scanner;

public class P1032 {

	public static Scanner count = new Scanner(System.in);

	static boolean tt(int n) {
		if (n == 153 || n == 370 || n == 371 || n == 407)
			return true;
		return false;
	}

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		while (count.hasNext()) {
			int n = count.nextInt();
			if (n == 0)
				break;
			if (tt(n))
				System.out.println("Yes");
			else
				System.out.println("No");
		}
	}

}
