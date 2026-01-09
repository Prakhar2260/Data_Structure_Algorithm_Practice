class Solution 
{
    public String largestEven(String s) 
    {
      int Last2=-1;

      int len=s.length();
      int i=len-1;

      while(len>0)
       {
        if(s.charAt(i)=='2')
          {
            Last2=i;
            break;
          }

          len--;
          i--;
       } 

       if(Last2==-1)
        {
          return "";  
        }

       String str=s.substring(0,Last2+1);

       return str;
    }
}
