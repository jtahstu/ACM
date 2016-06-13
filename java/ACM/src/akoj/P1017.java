package akoj;

import java.util.Scanner;

public class P1017 {

	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		
		while (count.hasNext()) {
			int a, b;
			a = count.nextInt();
			if(a<0)a=-a;
			b = (int)Math.pow(a, 1.0 / 3);
			if (b * b * b == a)
				System.out.println("YES");
			else
				System.out.println("NO");
		}
	}

}
