/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1130
 * by jtahstu on 2015/2/1
 */
package akoj;

import java.util.Scanner;

public class P1130 {

	static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int[][] a = new int[4][3];
		int max = -1, maxi = 0, maxj = 0;
		for (int p = 0; p < 4; p++)
			for (int q = 0; q < 3; q++)
				a[p][q] = count.nextInt();
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 3; j++)
				if (a[i][j] > max) {
					max = a[i][j];
					maxi = i;
					maxj = j;
				}
		System.out.println(max + " " + maxi + " " + maxj);

	}

}
