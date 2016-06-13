package akoj;

import java.util.Scanner;

public class P1007 {

	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int n = count.nextInt();
		int[] a = new int[21];
		a[1] = 1;
		a[2] = 1;
		for (int i = 3; i < 21; i++)
			a[i] = a[i - 1] + a[i - 2];
		while (n-- > 0) {
			int x = count.nextInt();
			System.out.println(a[x]);
		}
	}

}
