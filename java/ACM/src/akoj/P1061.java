package akoj;//����ѧУOJ int�ܹ���hdu�ͷǵ���long,��Ȼ�������ݲ�ǿ

import java.util.Scanner;

public class P1061 {

	public static Scanner count = new Scanner(System.in);

	static int gcd(int tt, int jt) {
		return jt == 0 ? tt : gcd(jt, tt % jt);
	}

	static int tsy(int tt, int jt) {
		return tt * jt / gcd(tt, jt);//������˻������������������������ȳ�������int��û������
	}

	public static void main(String[] args) {
		// TODO �Զ����ɵķ������
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
