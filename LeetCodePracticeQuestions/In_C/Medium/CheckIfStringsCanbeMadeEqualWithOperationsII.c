bool checkStrings(char* s1, char* s2) 
{
    int len=strlen(s1);

    int freqEvens1[26]={0};
    int freqOdds1[26]={0};
    
    int freqEvens2[26]={0};
    int freqOdds2[26]={0};

    for(int i=0;i<len;i++)
     {
        if(i%2==0)
         {
           freqEvens1[s1[i]-'a']++;
           freqEvens2[s2[i]-'a']++;
         }

         else
         {
           freqOdds1[s1[i]-'a']++;
           freqOdds2[s2[i]-'a']++;
         } 
     }

     for(int i=0;i<26;i++)
      {
        if(freqEvens1[i]!=freqEvens2[i])
          return false;
      }

      for(int i=0;i<26;i++)
      {
        if(freqOdds1[i]!=freqOdds2[i])
          return false;
      }

      return true;
    
   
}
