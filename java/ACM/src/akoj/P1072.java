package akoj;

import java.util.Scanner;

public class P1072 {

	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO �Զ����ɵķ������
		while (count.hasNext()) {
			int n = count.nextInt();
			System.out.println(n * (n + 1) / 2);
		}
	}

}
