/*
 * http://183.167.205.82:8081/JudgeOnline/submitpage?problem_id=1002
 * by jtahstu on 2015/2/25 1:00
 */
package akoj;

import java.util.Scanner;

public class P1002 {

	public static Scanner cin = new Scanner(System.in);
	
	public static void main(String[] args) {
		
		 String str=new String();
		    int count = 0;
		    while( cin.hasNext())
		    {
		    	str=cin.next();
		        int len = str.length();
		        int sum = 0, flag = 0;
		        for(int i = 0; i < len; i ++)
		        {
		        	char c = str.charAt(i);
		            if( c == '4')
		            {
		                flag = 1;
		                break;
		            }
		            if( c == '8' || c == '6')sum ++;
		        }
		        if( flag == 1)continue;
		        if( sum >= 5){
		            System.out.println(str);
		            count ++;
		        }
		    }
		    System.out.println(count);
		    
	}

}
