package akoj;

import java.util.Scanner;

public class P1117 {

	public static Scanner count = new Scanner(System.in);
	
	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int[] a=new int[10001];
		while(count.hasNext()){
			int n=count.nextInt();
			for(int i=0;i<n;i++)
				a[i]=count.nextInt();
			int m=count.nextInt();
			int j=0;
			for(int i=0;i<n;i++)
				if(a[i]<m)
					j++;
			System.out.println(j);
		}
	}

}
