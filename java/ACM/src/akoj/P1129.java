/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1129
 * by jtahstu on 2015/2/1
 */
package akoj;

import java.util.Scanner;

public class P1129 {

	private static Scanner tt = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		String s = tt.nextLine();
		int count = 0;
		for (int i = 0; i < s.length(); i++) {
			char c = s.charAt(i);
			if (c == '@') {
				count = i;
				break;
			}
		}
		for (int i = 0; i < count; i++)
			System.out.print(s.charAt(i));
		System.out.println();
	}
}