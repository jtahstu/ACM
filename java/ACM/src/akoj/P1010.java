package akoj;

import java.util.Scanner;

public class P1010 {
	static long x, y;

	public static long exgcd(long a, long b) {
		if (b == 0) {
			x = 1;
			y = 0;
			return a;
		}
		long r = exgcd(b, a % b);
		long t = x;
		x = y;
		y = t - a / b * y;
		return r;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while (sc.hasNext()) {
			long x0 = sc.nextLong(), y0 = sc.nextLong(), m = sc.nextLong(), n = sc
					.nextLong(), l = sc.nextLong();
			long a = m - n, b = l, c = y0 - x0;
			long g = exgcd(a, b);
			if (c % g != 0) {
				System.out.println("Impossible");
			} else {
				x *= c / g;
				b /= g;
				if (b < 0)
					b = -b;
				x = (x % b + b) % b;
				System.out.println(x);
			}
		}
		sc.close();
	}
}// ¾ÍÊÇ