package akoj;

import java.util.Scanner;

public class P1024 {

	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO �Զ����ɵķ������
		while (count.hasNext()) {
			int a = count.nextInt();
			int b = count.nextInt();
			if (a == 0 && b == 0)
				break;
			System.out.println(a + b);
		}
	}

}
