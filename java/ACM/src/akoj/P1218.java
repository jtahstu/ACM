package akoj;//�������

import java.math.BigInteger;
import java.util.Scanner;

public class P1218 {
	public static Scanner cin = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO �Զ����ɵķ������
		int n = cin.nextInt();
		while (n-- > 0) {
			BigInteger a, sum = BigInteger.ZERO;
			while (cin.hasNext()) {
				a = cin.nextBigInteger();
				if (a.intValue() == 0)
					break;
				sum = sum.add(a);
			}
			System.out.println(sum);
		}
		
	}
}
