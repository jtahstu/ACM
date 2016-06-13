/*
 * 
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1135
 * by jtahstu on 2015/2/1
 */
package akoj;

import java.util.Scanner;

public class P1135 {
	
	static Scanner cin = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		String s=cin.nextLine();
		for(int i=s.length()-1;i>=0;i--)
		{
			System.out.print(s.charAt(i));
		}
		System.out.println();
	}

}
