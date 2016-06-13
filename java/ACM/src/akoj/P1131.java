/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1131
 * by jtahstu on 2015/2/1
 */
package akoj;

import java.util.Scanner;

public class P1131 {

	static Scanner cin = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int n = cin.nextInt();
		double a = 1, sum = 0, b = 2, temp = 0;
		for (int i = 0; i < n; i++) {
			temp = a;
			sum += b / a;
			a = b;
			b += temp;
		}
		System.out.printf("%.3f\n", sum);
	}

}
