import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		
		Scanner sc=new Scanner(System.in);
		
		int T;
		T=sc.nextInt();
		
		while(T-->0)
		{
		  int A1,A2,A3,A4,A5,P;
		  A1=sc.nextInt();
		  A2=sc.nextInt();
		  A3=sc.nextInt();
		  A4=sc.nextInt();
		  A5=sc.nextInt();
		  P=sc.nextInt();
		  
		  int hours=(A1+A2+A3+A4+A5)*P;
		  
		  if(hours<=120)
		   {
		      System.out.println("No"); 
		   }
		   
		   else 
    	    {
    	         System.out.println("Yes");
    	    }
    	    
    	   
		}
		
	}
}
