int totalWaviness(int num1, int num2)
{
    int i=num1;

    int wave=0;
    while(i<=num2)
    {
        char str[7];
        
        sprintf(str,"%d",i);

        int digits=strlen(str);

        if(digits<3)
         {
            i++;
            continue;
         }

         for(int j=1;j<digits-1;j++)
            {
                if(str[j-1]<str[j] && str[j]>str[j+1])
                   wave++;

                if(str[j-1]>str[j] && str[j]<str[j+1])
                   wave++;
            }
         
          i++;
    }

    return wave;
    
}
