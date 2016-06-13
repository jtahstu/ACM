/**
 * Project Name: ACM
 * Package Name: nyoj
 * File Name: T.java
 * Created on: 2016年1月17日 下午5:24:57
 * Author: jtahstu  Email:root@jtahstu.com
 * Copyright (c) 2016, www.jtahstu.com , All Rights Reserved.
 */
package nyoj;

class T1 {
	private double height;

	public double getheight() {
		return this.height;
	}

	public void setheight(double value) {
		this.height = value;
	}

	public double fantan(double h, int c) {
		double temp = h;
		for (int i = 0; i < c; i++) {
			temp /= 2;
		}
		return temp;
	}

	public double jinguo(double h, int c) {
		double sum = 0;
		for (int i = 0; i < c; i++) {
			sum += h;
			h /= 2;
		}
		return sum;
	}

}

public class T {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		T1 tt = new T1();
		tt.setheight(100);
		double h1 = tt.fantan(100, 10);
		double h2 = tt.jinguo(100, 10);
		System.out.println(h1);
		System.out.println(h2);
	}
}
