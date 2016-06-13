package akoj;

import java.util.Arrays;
import java.util.Scanner;

public class P1128 {

	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int[] a = new int[10];
		for (int i = 0; i < 10; i++)
			a[i] = count.nextInt();
		Arrays.sort(a);
		for (int i = 0; i < 10; i++)
			System.out.print(a[i] + " ");
		System.out.println();
	}

}
