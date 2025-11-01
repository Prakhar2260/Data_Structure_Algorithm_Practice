class Solution {
    public boolean scoreBalance(String s) 
    {
      int n=s.length();
    
      int totalscore=0;

      for(int i=0;i<n;i++)
        {
          totalscore=totalscore+(s.charAt(i) - 96);  
        } 

        int leftsum=0;

        for(int i=0;i<n-1;i++)
         {
          leftsum=leftsum+(s.charAt(i) - 96);

          int rightsum=totalscore-leftsum;

          if(rightsum==leftsum)
            return true;
         }

         return false;
        
    }
}
