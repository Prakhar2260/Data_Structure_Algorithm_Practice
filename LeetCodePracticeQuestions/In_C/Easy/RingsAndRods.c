int countPoints(char* rings) 
{
    int array[3][10];
    int len=strlen(rings);

    for(int i=0;i<3;i++)
     {
        for(int j=0;j<10;j++)
          {
            array[i][j]=0;
          }
     }

     for(int i=0;i<len;i=i+2)
       {
        char ch=rings[i];
        int pos=rings[i+1]-'0';

        if(ch=='B')
        {
           array[0][pos]=1; 
        }

        if(ch=='G')
        {
           array[1][pos]=1; 
        }

        if(ch=='R')
        {
            array[2][pos]=1;
        }
       }

      int count=0;
      
       for(int j=0;j<10;j++)
     {
        if(array[0][j]==1 && array[1][j]==1 && array[2][j]==1)
          {
            count++;
          }
     }

     return count;
    
}
