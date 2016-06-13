package akoj;

import java.util.Scanner;

public class P1095 {
	
	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		while(count.hasNext()){
			int a=count.nextInt();
			System.out.println(a%10*100+a/10%10*10+a/100);
			
		}
	}

}
