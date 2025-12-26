int bestClosingTime(char* customers) 
{
    int len=strlen(customers);

    int TotalY=0;
    for(int i=0;i<len;i++)
     {
        if(customers[i]=='Y')
          TotalY++;
     }

    int hour=0;
    int minPenalty=TotalY;

    int rightY=TotalY,leftN=0;
    for(int i=0;i<len;i++)
     {
        
        if(customers[i]=='Y')
            rightY--;

        else
            leftN++;

        int currentPenalty=leftN+rightY;
        
         if(currentPenalty<minPenalty)
           {
            minPenalty=currentPenalty;
            hour=i+1;
           }

     }

     return hour;
    
}
