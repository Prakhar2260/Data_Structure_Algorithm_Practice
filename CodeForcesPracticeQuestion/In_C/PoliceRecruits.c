# include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);

   int array[n];
   for(int i=0;i<n;i++) 
    {
         scanf("%d",&array[i]);
    }
    
    int crimeCount=0;
    int availableOfficer=0;

    for(int i=0;i<n;i++)
     {
        if(array[i]==-1 && availableOfficer<=0)
        {
            crimeCount++;
        }

        else if(array[i]==-1 && availableOfficer>=0)
        {
            availableOfficer--;
        }

        else if(array[i]>0)
        {
            availableOfficer=availableOfficer+array[i];
        }
     }

    printf("%d\n",crimeCount);
    return 0;
}
