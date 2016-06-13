/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1012
 * by jtahstu on 2015/2/28 17:00
 */
package akoj;

import java.util.Scanner;

public class P1012 {
	
	public static void tt(char a)
	{
	    if(a=='1')System.out.print("0001");
	    else if(a=='2')System.out.print("0010");
	    else if(a=='3')System.out.print("0011");
	    else if(a=='4')System.out.print("0100");
	    else if(a=='5')System.out.print("0101");
	    else if(a=='6')System.out.print("0110");
	    else if(a=='7')System.out.print("0111");
	    else if(a=='8')System.out.print("1000");
	    else if(a=='9')System.out.print("1001");
	    else if(a=='A')System.out.print("1010");
	    else if(a=='B')System.out.print("1011");
	    else if(a=='C')System.out.print("1100");
	    else if(a=='D')System.out.print("1101");
	    else if(a=='E')System.out.print("1110");
	    else if(a=='F')System.out.print("1111");
	    else System.out.print("0000");
	}

	public static Scanner cin = new Scanner(System.in);
	
	public static void main(String[] args) {
		    String a=new String();
		    while(cin.hasNext()){
		    	a=cin.next();
		        for(int i=0; i<a.length(); i++){
		        	char c=a.charAt(i);
		            tt(c);}
		       System.out.println();
		    }

	}

}
