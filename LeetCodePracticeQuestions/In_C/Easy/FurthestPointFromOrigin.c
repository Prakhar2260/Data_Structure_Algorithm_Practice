int furthestDistanceFromOrigin(char* moves)
{
    int L=0;
    int R=0;
    int dash=0;

    for(int i=0;moves[i]!='\0';i++)
     {
        if(moves[i]=='L')
         L++;

        else if(moves[i]=='R')
         R++;

         else
         dash++; 
     }

     if(R>L)
      {
        return R-L+dash;
      }

     if(L>R)
      {
         return L+dash - R;
      } 

      return dash;
}
