/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1127
 * by jtahstu on 2015/2/1
 */
package akoj;

import java.util.Scanner;

public class P1127 {

	private static Scanner tt = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		while (tt.hasNext()) {
			int a = tt.nextInt(), b = 1, sum = 0;
			for (int i = 1; i <= a; i++) {
				b *= i;
				sum += b;
			}
			System.out.println(sum);
		}
	}
}