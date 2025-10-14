import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
      int T;
      Scanner sc=new Scanner(System.in);
      T=sc.nextInt();
      
      
      while(T-->0)
	  {
	   int N,K;
	   N=sc.nextInt();
	   K=sc.nextInt();
	   
	   int mostone=(N+1)/2;
	   int leastone=N/2;
	   
	   if(K<=mostone && K>=leastone)
	     {
	      System.out.println("YES");      
	     }
	     
	    else
	      System.out.println("NO");
	  }

	}
}
