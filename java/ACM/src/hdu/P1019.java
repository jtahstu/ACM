package hdu;//int会溢出,用long

import java.util.Scanner;

public class P1019 {

	public static Scanner count = new Scanner(System.in);

	static long gcd(long tt, long jt) {
		return jt == 0 ? tt : gcd(jt, tt % jt);
	}

	static long tsy(long tt, long jt) {
		return tt * jt / gcd(tt, jt);//这里相乘会产生溢出，聪明的做法就是先除，那样int就没问题了
	}

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
			long m = count.nextLong();
			while (m-- > 0) {
				long n = count.nextLong(), tt = 1, jt;
				while (n-- > 0) {
					jt = count.nextInt();
					tt = tsy(tt, jt);
				}
				System.out.println(tt);
			}
		}

	}
