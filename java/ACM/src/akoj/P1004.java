/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1004
 * by jtahstu on 2015/2/25 1:00
 */
package akoj;

import java.util.Scanner;

public class P1004 {
	
	public static Scanner cin = new Scanner(System.in);

	public static void main(String[] args) {
		int n=cin.nextInt();
		while(n-->0)
		{
			int a[]=new int[101];
			int k,l,temp,s=1,i;
			int m=cin.nextInt();
			for(i=0;i<m;i++)
				a[i]=cin.nextInt();
			for(k=0; k<m; k++)
	         {
	            for(l=0; l<m-k-1; l++)
	                if(a[l]>a[l+1])
	                {
	                    temp=a[l];
	                    a[l]=a[l+1];
	                    a[l+1]=temp;
	                }
	         }
	        for(i=2;i<m;i++)
	        {
	        	if(a[i]-a[i-1]!=a[1]-a[0])
	        		{s=0;break;}
	        }
	        if(s==0) System.out.println("no");
	        else if(s==1) System.out.println("yes");
		}
	
	}

}
