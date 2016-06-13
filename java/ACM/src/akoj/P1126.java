/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1126
 * by jtahstu on 2015/2/1
 */
package akoj;

import java.util.Scanner;

public class P1126 {
	
	 private static Scanner tt=new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int a=tt.nextInt(),b=tt.nextInt();
		int c=(a%10+b%10)%10+(a/10+b/10)%10*10;
		System.out.println(c);
	}

}
