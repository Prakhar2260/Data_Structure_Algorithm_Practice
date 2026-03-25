int mySqrt(int x) 
{
  double low=0,high=x,mid=0;

  for(int i=0;i<100;i++)
   {
    mid=(low+high)/2;

    if(mid*mid>x)
     {
        high=mid;
     }

     else
        low=mid;
   }  

   return mid;
}
