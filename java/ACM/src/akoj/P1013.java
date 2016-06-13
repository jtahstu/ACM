/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1013
 * by jtahstu on 2015/2/28 17:00
 */
package akoj;

import java.util.Scanner;

public class P1013 {
	
	public static int C(int m,int n)
	{
	    int mt,nt;
	    mt=m;nt=n;
	    int r=(m%n);
	    while(r!=0)
	    {
	       m=n;
	       n=r;
	       r=m%n;
	    }
	    return (mt*nt/n);
	}
	public static Scanner cin = new Scanner(System.in);
	public static void main(String[] args) {
		int a1,b1,a2,b2,s;
	    while(cin.hasNext())
	        {
	    	a1=cin.nextInt();b1=cin.nextInt();a2=cin.nextInt();b2=cin.nextInt();
	            s=C(a1,a2);
	            for(int i=1; i<=s; i++)
	            {
	                if(i%a1==b1&&i%a2==b2)
	                   System.out.println(i);
	            }
	        }
	}

}
