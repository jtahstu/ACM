/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1132
 * by jtahstu on 2015/2/8 10:00
 */
package akoj;

import java.util.Scanner;

public class P1132 {

	static Scanner cin = new Scanner(System.in);
	
	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		double a=cin.nextDouble(),b=cin.nextDouble(),c=cin.nextDouble();
		double p=(a+b+c)/2;
		double s=Math.sqrt(p*(p-a)*(p-b)*(p-c));
		if((a+b<=c)||(a+c<=b)||(b+c<=a))
			System.out.println("Input error!");
		else 
			System.out.printf("%.2f\n",s);
	}

}


