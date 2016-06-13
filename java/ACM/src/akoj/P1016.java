/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1016
 * by jtahstu on 2015/3/2 14:00
 */
package akoj;

import java.util.Scanner;

public class P1016 {
	
	public static Scanner cin = new Scanner(System.in);

	public static void main(String[] args) {
		 int n,m;
		    while(cin.hasNext()){
		    	n=cin.nextInt();m=cin.nextInt();
		          int p,q,a[]=new int[201],count=1;
		        if(n==0&&m==0)break;
		        if(m==0&&n!=0){System.out.println(n-1);continue;}
		        p=cin.nextInt();q=cin.nextInt();
		        a[p]=a[q]=count;
		        for(int i=1; i<m; i++){
		        	p=cin.nextInt();q=cin.nextInt();
		            if(a[p]!=0)a[q]=count;
		            else if(a[q]!=0)a[p]=count;
		            else {
		                count++;
		                a[p]=count;
		                a[q]=a[p];
		            }
		        }
		        for(int i=1; i<=n; i++)if(a[i]==0)count++;
		        System.out.println(count-1);
		    }
		
	}

}
