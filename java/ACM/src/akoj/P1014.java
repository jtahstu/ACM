/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1014
 * by jtahstu on 2015/3/2 13:00
 */
package akoj;

import java.util.Scanner;

public class P1014 {
	
	public static boolean judge(int n)
	{
	    for(int i=2; i*i<=n; i++)
	        if(n%i==0)return false;
	    return true;
	}
	
	public static Scanner cin = new Scanner(System.in);

	public static void main(String[] args) {
		    int n;
		    while(cin.hasNext())
		    {
		    	n=cin.nextInt();
		        int x=0,y=0;
		        boolean flag=false;
		        for(int i=n/2; i>2; i--)
		        {
		            if(judge(i)&&judge(n-i))
		                {
		                    x=i;y=n-i;flag=true;break;
		                }
		        }
		        if(flag)System.out.println(x+" "+y);
		    }
		   
		}

}
