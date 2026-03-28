int digitSum(int x) 
{
    int sum=0;
    while (x>0)
     {
        sum+=x%10;
        x/=10;
     }

    return sum;
}

int countLargestGroup(int n) 
{
    int freq[50]={0};

    for (int i=1;i<=n;i++)
     {
        int s=digitSum(i);
        freq[s]++;
     }


    int maxSize=0;
    for (int i=0;i<50;i++)
     {
        if (freq[i]>maxSize)
         {
            maxSize=freq[i];
         }
    }

    
    int count=0;
    for (int i=0;i<50;i++)
     {
        if(freq[i]==maxSize)
         {
            count++;
         }
    }

    return count;
}
