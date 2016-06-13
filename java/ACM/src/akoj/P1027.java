/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1027
 * by jtahstu on 2015/3/3
 */
package akoj;

import java.util.Scanner;

public class P1027 {
	
	public static Scanner cin = new Scanner(System.in);

	public static void main(String[] args) {
		 int n=cin.nextInt(),sum=0,a=0;
		    int m=n;
		    while(n>0)
		    {
		        a=n%10;
		         sum+=a;
		        n=n/10;
		    }
		    if(m%sum==0)
		       System.out.println("Lucky Word");
		    else
		       System.out.println("No Answer");
	}

}
