/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1125
 * by jtahstu on 2015/2/1
 */
package akoj;

import java.util.Scanner;

public class P1125 {
	
	public static Scanner count = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		 String string = count.nextLine();
         for (int i = 0; i < string.length(); i++) {
             char c = string.charAt(i);
             if (Character.isLowerCase(c))
                 System.out.print(Character.toUpperCase(c));
             else
                 System.out.print(c);
         }
         System.out.println();

	}

}
/*
import java.util.Scanner;

public class Main{

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		while (N-- > 0){
			String str = sc.next();
			char ch[] = str.toCharArray();
			for (int i=0; i < ch.length; i++){
				if (ch[i] >= 'a' && ch[i] <= 'z'){
					ch[i] = (char) (ch[i] - 32);
				}else if (ch[i] >= 'A' && ch[i] <= 'Z'){
					ch[i] = (char) (ch[i] + 32);
				}
			}
			String s = String.valueOf(ch);
			System.out.println(s);
		}
	}

}
*/      