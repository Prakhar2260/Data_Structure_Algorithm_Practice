int largestAltitude(int* gain, int gainSize) 
{

    int max=0;
    int NewHeight=0;

    for(int i=0;i<gainSize;i++)
     {
        NewHeight=NewHeight+gain[i];

        if(max<NewHeight)
         {
            max=NewHeight;
         }
     }

     return max;
    
}
