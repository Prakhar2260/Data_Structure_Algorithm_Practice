char* mapWordWeights(char** words, int wordsSize, int* weights, int weightsSize) 
{
    char revalp[27]="zyxwvutsrqponmlkjihgfedcba";


    char *res=(char*)malloc(sizeof(char)*(wordsSize+1));
    int index=0;

    for(int i=0;i<wordsSize;i++)
     {
        char str[11];
        strcpy(str,words[i]);

        int len=strlen(str);

        int cost=0;
        for(int j=0;j<len;j++)
          {
            cost+=weights[str[j]-'a'];
          }

         res[index++]=revalp[cost%26];
     }
      res[index]='\0';
   
     return res;
    
}
