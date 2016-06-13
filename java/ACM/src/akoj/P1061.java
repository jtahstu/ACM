package akoj;//我们学校OJ int能过，hdu就非得用long,果然测试数据不强

import java.util.Scanner;

public class P1061 {

	public static Scanner count = new Scanner(System.in);

	static int gcd(int tt, int jt) {
		return jt == 0 ? tt : gcd(jt, tt % jt);
	}

	static int tsy(int tt, int jt) {
		return tt * jt / gcd(tt, jt);//这里相乘会产生溢出，聪明的做法就是先除，那样int就没问题了
	}

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		while (count.hasNext()) {
			int n = count.nextInt(), tt = 1, jt;

			while (n-- > 0) {
				jt = count.nextInt();
				tt = tsy(tt, jt);
			}
			System.out.println(tt);

		}

	}

}
