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
	   
	   while(T>0)
	   {
	     int N,M;
	      N=sc.nextInt();
	      M=sc.nextInt();
	      
	      int []array=new int[N];
	      
	      for(int i=0;i<N;i++)
	       {
	         array[i]=sc.nextInt();    
	       }
	       
	       int states=0;
	       int sum=0;
	       
	       for(int i=0;i<N;i++)
	         {
	            sum=sum+array[i];
	            
	            if(sum>=M)
	              {
	                 states++;
	                 sum=0;
	              }
	         }
	       
	      System.out.println(states);
	      T--;
	     
	   }
	   
	}
}
