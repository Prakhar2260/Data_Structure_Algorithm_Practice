int binaryGap(int n) 
{
    int bin[32];

     for(int i=0;i<32;i++)
     bin[i]=0;

     int index=0;

     while(n>0)
     {
        int r=n%2;
        bin[index++]=r;
        n=n/2;
     } 

     int maxDist=0;

     for(int i=0;i<index;i++)
      {
        int dist=0;
        if(bin[i]==1)
         {
           for(int j=i+1;j<index;j++)
             {
                if(bin[j]==1)
                 {
                   dist=j-i;

                   if(maxDist<dist)
                    {
                      maxDist=dist;
                    }

                    break;
                 }
             }

         }


      }

      return maxDist;
    
}
