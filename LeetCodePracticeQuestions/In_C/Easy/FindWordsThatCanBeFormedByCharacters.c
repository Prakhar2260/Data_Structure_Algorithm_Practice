
int countCharacters(char** words, int wordsSize, char* chars) 
{
    int sum=0;
    int freq[26];

    for(int i=0;i<26;i++)
     {
        freq[i]=0;
     }

    for(int i=0;chars[i]!='\0';i++)
      {
        freq[chars[i]-'a']++;
      } 

    for(int i=0;i<wordsSize;i++)
      {
        int freq1[26]={0};
        char str[101];
        strcpy(str,words[i]);
        for(int k=0;str[k]!='\0';k++)
          {
            freq1[str[k]-'a']++;
          }

        int pos=1;

        for(int l=0;l<26;l++)
          {
            if(freq1[l]>freq[l])
              {
                pos=0;
                break;
              }
          }

           if (pos)
            {
            sum=sum+strlen(words[i]);
            }   
      }

      return sum;

    
}
