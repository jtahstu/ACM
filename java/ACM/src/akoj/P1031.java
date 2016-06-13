/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1031
 * by jtahstu on 2015/3/6 10:00
 */
package akoj;

import java.util.Scanner;

public class P1031 {
	public static Scanner cin = new Scanner(System.in);
	public static void main(String[] args) {
		 int i,j,k,a,n,m,sum=0;
		    a=cin.nextInt();
		    for(i=0; i<a; i++)
		    {
		        n=cin.nextInt();
		        for(j=0; j<n; j++)
		        {
		            m=cin.nextInt();
		            for(k=2; k<=Math.sqrt(m); k++)
		            {
		                if(m%k==0)break;
		            }
		            if(k>Math.sqrt(m)&&m!=1)
		                sum=sum+m;
		        }
		        System.out.println(sum);
		        sum=0;
		    }

	}

}
