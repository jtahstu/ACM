/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1011
 * by jtahstu on 2015/2/28 17:00
 */
package akoj;

import java.util.Scanner;

public class P1011 {
	
	public static Scanner cin = new Scanner(System.in);

	public static void main(String[] args) {
		int n=cin.nextInt();
	    int a[]= new int[1001],x,y,count=1;
	    while(cin.hasNext()) {
	    	x=cin.nextInt();
	    	y=cin.nextInt();
	        if(x==0&&y==0)break;
	        for(int i=0; i<y; i++)
	            a[count++]=x;
	    }
	    for(int i=1; i<=n*n; i++) {
	        System.out.print(a[i]+" ");
	        if(i%n==0)
	           System.out.println();
	    }
	}

}
