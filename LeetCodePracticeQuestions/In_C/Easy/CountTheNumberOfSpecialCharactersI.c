int numberOfSpecialChars(char* word)
{
    int freq[200]={0};

    for(int i=0;word[i]!='\0';i++)
     {
        freq[word[i]]++;
     }

       int count=0;
      for(int i=0;word[i]!='\0';i++)
      {
        char ch=word[i];

            if(freq[ch]>=1 && freq[ch+32]>=1)
             {
                count++;
                freq[ch]=0;
                freq[ch+32]=0;
             }

             if(freq[ch]>=1 && freq[ch-32]>=1)
               {
                count++;
                freq[ch]=0;
                freq[ch-32]=0;
               } 
      }

      return count;
}
