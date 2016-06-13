/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1033
 * by jtahstu on 2015/3/6 10:00
 */
package akoj;

import java.util.Scanner;

public class P1033 {
	public static Scanner cin = new Scanner(System.in);
	public static void main(String[] args) {
		int m,n,N,c,r=0;
	    N=cin.nextInt();
	    while(N-->0)
	    {
	       m=cin.nextInt();n=cin.nextInt();
	        for(c=0; c<=m; c++)
	        {
	            r=m-c;
	            if(2*c+4*r==n)break;
	        }
	        if(c<=m)
	           System.out.println(c+" "+r);
	        else
	         System.out.println("No answer");
	    }

	}

}
