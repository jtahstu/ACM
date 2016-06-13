package akoj;

import java.util.Scanner;

public class P1113 {
	public static Scanner count = new Scanner(System.in);
	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		long n=count.nextLong(),i=0;
		while(n>0){
			i++;
			n/=10;
		}
		System.out.println(i);
	}

}
