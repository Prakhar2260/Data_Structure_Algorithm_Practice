int findClosest(int x, int y, int z) 
{
  int d1=z-x;
  int d2=z-y;

  if(d1<0)
    d1=d1*-1;

  if(d2<0)
    d2=d2*-1;

  if(d1<d2)
   return 1;

  else if(d1>d2)
   return 2;

  else
   return 0;         
    
}
