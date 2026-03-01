int minPartitions(char* n)
{
    int maxDigit=0;

    for(int i=0;n[i]!='\0';i++)
    {
        int digit=n[i]-'0';
        if(digit>maxDigit)
            maxDigit=digit;

        if(maxDigit==9)   
            return 9;
    }

    return maxDigit;
    
}
