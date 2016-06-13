package akoj;

import java.util.Scanner;

public class P1101 {
	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		double a=count.nextDouble();
		double sin=Math.sin(a*Math.PI/180);
		double cos=Math.cos(a*Math.PI/180);
		System.out.printf("%.3f %.3f",sin,cos);
	}

}
