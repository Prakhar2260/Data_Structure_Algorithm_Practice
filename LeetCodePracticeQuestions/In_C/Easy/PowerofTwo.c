bool isPowerOfTwo(int n) 
{
     int num=n;
    if(num<=0) 
      return false;

   while(num>1)
   {
    if(num%2==0)
      {
       num=num/2;
      }

     else
       {
         return false;
       } 

   }

   
   return true;

}
