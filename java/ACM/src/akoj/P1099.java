package akoj;

import java.util.*;

public class P1099 {
	public static Scanner count = new Scanner(System.in);
	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		double n = count.nextDouble();
		double m = 5 * (n - 32) / 9;
		System.out.printf("%.3f",m);
		/*
		 * double x=23.5455; NumberFormat ddf1=NumberFormat.getNumberInstance();
		 * ddf1.setMaximumFractionDigits(2); String s= ddf1.format(x) ;
		 * System.out.print(s);
		 */
		/*
		 * System.out.println(String.format("%.2f", f)); format f = new
		 * format();
		 */
		/*
		 * float a = (float)1.123; 
		 * DecimalFormat decimal = new DecimalFormat("#.##"); 
		 * String result = decimal.format(""+a);
		 */
//		NumberFormat x = NumberFormat.getNumberInstance();
//		x.setMaximumFractionDigits(3);
//		String s = x.format(m);
//		System.out.println(s);
//		BigDecimal bd = new BigDecimal(m);//这是输出三个有效数字
//		bd = bd.round(new MathContext(3));
//		System.out.println(bd);
	}
}
