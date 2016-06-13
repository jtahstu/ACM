package akoj;

import java.util.Arrays;
import java.util.Scanner;

public class P1030 {
	
	public static Scanner cin = new Scanner(System.in);

	public static void main(String[] args) {
		int n=cin.nextInt();
		while((n--)>0)
		{
			char a[]=new char[3];
			String s=new String();
			s=cin.next();
			a[0]=s.charAt(0);
			a[1]=s.charAt(1);
			a[2]=s.charAt(2);
			Arrays.sort(a);
			System.out.println(a[0]+" "+a[1]+" "+a[2]);
		}

	}

}
