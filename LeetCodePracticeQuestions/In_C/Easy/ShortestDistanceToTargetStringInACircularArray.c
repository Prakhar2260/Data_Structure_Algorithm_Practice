
int closestTarget(char** words, int wordsSize, char* target, int startIndex) 
{
    int minDist=wordsSize;

    for(int i=0;i<wordsSize;i++)
      {
        if(strcmp(words[i],target)==0)
         {
            int diff=abs(i-startIndex);
            int dist=diff < (wordsSize-diff) ? diff : (wordsSize-diff);

            if(dist<minDist)
            {
                minDist=dist;
            }
         }
      }

       return (minDist==wordsSize) ?-1:minDist;
    
}
