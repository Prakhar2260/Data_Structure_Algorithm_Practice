class Solution 
{
    public String makeFancyString(String s) 
    {
        StringBuilder sb=new StringBuilder(s);

     for(int i=0;i<(sb.length()-2);i++)
       {
         char ch1,ch2,ch3;
         ch1=sb.charAt(i);
         ch2=sb.charAt(i+1);
         ch3=sb.charAt(i+2);

         if(ch1==ch2 && ch2==ch3)
           {
             sb.deleteCharAt(i);
             i--;
           }
       }

       return sb.toString();


    }
}
