package akoj;

import java.util.Scanner;

public class P1006 {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int[] a=new int[6];
		Scanner count=new Scanner(System.in);
		for(int i=0;i<5;i++)
			a[i]=count.nextInt();
		int max=0,min=10001;
		for(int i=0;i<5;i++)
		{
			if(a[i]>max)max=a[i];
			if(a[i]<min)min=a[i];
		}
		System.out.println(min+" "+max);
		count.close();
	}

}
