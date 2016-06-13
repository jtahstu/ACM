package akoj;

import java.util.Arrays;
import java.util.Scanner;

public class P1278 {
	
	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int[] a = new int[1001];
		int n=count.nextInt();
		for (int i = 0; i < n; i++)
			a[i] = count.nextInt();
		Arrays.sort(a,0,n);
		for (int i = 0; i < n; i++)
			System.out.print(a[i] + " ");
		System.out.println();
	}

}
