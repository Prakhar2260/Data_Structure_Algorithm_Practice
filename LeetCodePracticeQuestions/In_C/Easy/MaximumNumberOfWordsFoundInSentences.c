class Solution {
    public int mostWordsFound(String[] sentences)
    {
       int maxWords = 0;


       for(int i=0; i<sentences.length;i++)
         {
           String s=sentences[i];
           int words=0; 
           for(int j=0 ; j<s.length() ;j++)
             {
               if(s.charAt(j)==' ')
                 {
                   words++; 
                 }
             }

             if(maxWords<words)
              {
                maxWords=words;
              } 
         }

         return maxWords+1;
    }
}
