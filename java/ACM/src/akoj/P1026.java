/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1026
 * by jtahstu on 2015/3/3 15£º00
 */
package akoj;

import java.util.Scanner;

public class P1026 {
	
	public static Scanner cin = new Scanner(System.in);

	public static void main(String[] args) {
		int m=cin.nextInt(),n=cin.nextInt(),count=0;
		for(int i=m;i<=n;i++)
			if(i%15==0)
				count++;
		System.out.println(count);
	}

}
