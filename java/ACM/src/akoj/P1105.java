package akoj;

import java.util.Scanner;

public class P1105 {
	
	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO �Զ����ɵķ������
		double n = count.nextDouble();
		if (n >= 0)
			System.out.printf("%.2f", n * 1.00);
		else {
			System.out.printf("%.2f", -n * 1.00);
		}
	}

}
