package akoj;

import java.util.Scanner;

public class P1104 {
	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int n=count.nextInt();
		if(n<=3)
			System.out.printf("%.2f", n*95.00);
		else if(n>3)
			System.out.printf("%.2f",n*95*0.85);

	}

}
