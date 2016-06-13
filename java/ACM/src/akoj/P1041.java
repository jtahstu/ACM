/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1041
 * by jtahstu on 2015/3/6 11:00
 */
package akoj;

import java.util.Scanner;

public class P1041 {
	public static Scanner cin = new Scanner(System.in);
	public static void main(String[] args) {
		int b[]={100,50,20,10,5,2,1};//开数组，储存币种
	    int n=cin.nextInt(),kk;
	    for(int i=0;i<7;i++)
	    {
	        kk=n/b[i];//除即可得kk张面值为啊a[i]的零钱
	        for(int j=0;j<kk;j++)
	            System.out.println(b[i]);
	        n%=b[i];
	    }

	}

}
