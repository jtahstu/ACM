/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1018
 * by jtahstu on 2015/3/3 14:00
 * Runtime Error
 */
package akoj;

import java.util.Scanner;

public class P1018 {

	public static Scanner cin = new Scanner(System.in);

	public static void main(String[] args) {
		int n, i;
		int a[] = new int[101];
		while (cin.hasNext()) {
			n = cin.nextInt();
			for (i = 0; i < n; i++)
				a[i] = cin.nextInt();
			int count = 1;
			for (i = 1; i < n; i++) {
				if (a[i] == a[i - count]) {
					count++;
				}
			}
			System.out.println(count);
		}

	}

}
