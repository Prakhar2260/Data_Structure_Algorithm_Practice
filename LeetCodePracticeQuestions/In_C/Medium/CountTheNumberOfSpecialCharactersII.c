int numberOfSpecialChars(char* word)
{
    int freq[200];
    int pos[200];

    for(int i=0;i<200;i++)
     {
      freq[i]=0;
      pos[i]=-1;
     }

     for(int i=0;word[i]!='\0';i++)
      {
        freq[word[i]]++;
        
        if(islower(word[i]))
         {
          pos[word[i]]=i;
         }

         else
         {
            if(pos[word[i]]==-1)
             {
                pos[word[i]]=i;
             }
         }  
      } 

      int count=0;

      for(int i=0;word[i]!='\0';i++)
      {
        char ch=word[i];

        if(islower(ch))
        {
            if(freq[ch-32]>0 && pos[ch]<pos[ch-32])
            {
              count++;
              freq[ch]=0;
              freq[ch-32]=0;
            }
        }
      }

      return count;
}
