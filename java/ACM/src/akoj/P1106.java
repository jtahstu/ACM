package akoj;

import java.util.Arrays;
import java.util.Scanner;

public class P1106 {
	public static Scanner count = new Scanner(System.in);
	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int[] a=new int[3];
		for(int i=0;i<3;i++)
			a[i]=count.nextInt();
		Arrays.sort(a);
		if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])
			System.out.println("yes");
		else if(a[0]+a[1]<=a[2]||a[2]-a[1]>=a[0])
			System.out.println("not a triangle");
		else
			System.out.println("no");

	}

}
