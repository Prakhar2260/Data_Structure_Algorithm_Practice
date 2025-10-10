import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

class Codechef
{
     
  static BigInteger factorial(int num)
  {
   BigInteger result=BigInteger.ONE;
  
  for(int i=2;i<=num;i++)
    result=result.multiply(BigInteger.valueOf(i));
  
  return result;
   }
   
  public static void main (String[] args) throws java.lang.Exception
	{
     
	int t;
	Scanner sc=new Scanner(System.in);
	t=sc.nextInt();
	
	while(t-->0)
	{
	  int n;
	  n=sc.nextInt();
	  
	  System.out.println(factorial(n));

	}
}
}
