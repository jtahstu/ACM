/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1034
 * by jtahstu on 2015/3/6 10:00
 */
package akoj;

import java.util.Scanner;

public class P1034 {
	public static Scanner cin = new Scanner(System.in);
	public static void main(String[] args) {
		double a = cin.nextDouble(), b = cin.nextDouble(), c = cin.nextDouble();
		System.out.printf("%.2f\n", (a + b) * c / 2);
		System.out.printf("%.2f\n",
		a + b + 2 * Math.sqrt(c * c + (b - a) * (b - a) / 4));
	}

}
