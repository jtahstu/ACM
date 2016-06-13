package akoj;

import java.util.Scanner;

public class P1114 {
	
	public static Scanner count = new Scanner(System.in);

	static boolean tt(int n)
	{
		if(n==153)return true;
		if(n==370)return true;
		if(n==371)return true;
		if(n==407)return true;
		return false;
	}
	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		// 153 370 371 407
		int a=count.nextInt();
		int b=count.nextInt();
		if(a<100)a=100;
		if(b>=1000)b=999;
		for(int i=a;i<=b;i++)
			if(tt(i))
		System.out.println(i);
	}

}
