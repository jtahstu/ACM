package akoj;

import java.util.Scanner;

public class P1112 {

	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		int sum=0,i=0,max=-1,min=100000,a;
		while(count.hasNext()){
			a=count.nextInt();
			i++;
			sum+=a;
			if(a>max)max=a;
			if(a<min)min=a;
		}
		double tt=1.000*sum/i;
		System.out.print(min+" "+max+" ");
		System.out.printf("%.3f\n",tt);
	}

}
