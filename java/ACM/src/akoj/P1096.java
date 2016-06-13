package akoj;

import java.util.Scanner;

public class P1096 {

	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int a = count.nextInt();
		int b = count.nextInt();
		int temp = a;
		a = b;
		b = temp;
		System.out.println(a + " " + b);
	}

}
