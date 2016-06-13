package akoj;

import java.util.Scanner;

public class P1116 {

	public static Scanner count = new Scanner(System.in);
	
	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int n=count.nextInt();
		for(int i=0;i<n;i++)
		{
			for(int j=i;j>0;j--)
				System.out.print(" ");
			for(int j=2*(n-i)-1;j>0;j--)
				System.out.print("#");
			for(int j=i;j>0;j--)
				System.out.print(" ");
			System.out.println();
		}
		
	}

}