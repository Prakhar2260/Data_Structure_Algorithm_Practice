bool checkAlmostEquivalent(char* word1, char* word2)
{
    int freq1[26];
    int freq2[26];

    for(int i=0;i<26;i++)
     {
       freq1[i]=0;
       freq2[i]=0;
     }

     for(int i=0;i<strlen(word1);i++)
       {
        freq1[word1[i]-'a']++;
       }

     for(int i=0;i<strlen(word2);i++)
       {
        freq2[word2[i]-'a']++;
       }  

      for(int i=0;i<26;i++)
        {
          if(abs(freq1[i]-freq2[i])<=3)
            {
                continue;
            }  

          else
            return false;
        } 

        return true;
    
}
