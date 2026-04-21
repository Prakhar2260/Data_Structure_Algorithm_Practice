

int countConsistentStrings(char * allowed, char ** words, int wordsSize)
{
     int freq[26]={0};
    
    for(int i=0;allowed[i]!='\0'; i++)
    {
        freq[allowed[i]-'a']=1;
    }
    
    int count=0;
    
    for(int i=0;i<wordsSize;i++)
    {
        int valid=1;
        
        for(int j=0; words[i][j]!='\0';j++)
        {
            if(freq[words[i][j]-'a']==0)
            {
                valid=0;
                break;
            }
        }
        
        if(valid) 
        count++;
    }
    
    return count;

}
