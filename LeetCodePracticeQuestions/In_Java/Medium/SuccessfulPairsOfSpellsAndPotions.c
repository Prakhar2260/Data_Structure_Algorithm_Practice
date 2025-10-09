class Solution {
    public int[] successfulPairs(int[] spells, int[] potions, long success) 
    {
      int lenofpairs=spells.length;
      int lenofspells=spells.length;
      int lenofpotions=potions.length;

      int []pairs=new int[lenofpairs];

      Arrays.sort(potions);

      for(int i=0;i<lenofspells;i++)
        {
          if((long)spells[i]*potions[lenofpotions-1]>=success)
           {  
            int firstindex=0;

           for(int j=0;j<lenofpotions;j++)
             {         
              long value=(long)spells[i]*potions[j];

              if(value>=success)
              {  
              firstindex=j;
              break;
              }   
             }
             pairs[i]=lenofpotions-firstindex;    
           }
           else
             pairs[i]=0;

        }

        return pairs;    
    } 
}
