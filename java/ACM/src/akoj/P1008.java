/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1008
 * by jtahstu on 2015/2/25 1:00
 */
package akoj;

import java.util.Scanner;

public class P1008 {
	
	public static Scanner cin = new Scanner(System.in);

	public static void main(String[] args) {
		
		 String a=new String();
		    int i,n;
		    n=cin.nextInt();
		    while(n-->0)
		    {
		        a=cin.next();
		        int len=a.length();
		        for(i=0; i<len; i++)
		        {
		        	char c=a.charAt(i);
		            if(c<='z'&&c>='a') System.out.printf("%c",c-32);
		            else  System.out.printf("%c",c+32);
		        }
		       System.out.println();
		    }
	}

}
