package akoj;

import java.util.Scanner;

public class P1107 {
	
	public static Scanner count = new Scanner(System.in);
	
	static boolean tt(int n)
	{
		if((n%4==0&&n%100!=0)||n%400==0)
			return true;
		return false;
	}
	
	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int n=count.nextInt();
		if(tt(n))
			System.out.println("yes");
		else
			System.out.println("no");
	}

}
