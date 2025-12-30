# include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);

  int possible=0;

  while(n--)
  {
  
  int petya,vasya,tonya;

  scanf("%d %d %d",&petya,&vasya,&tonya);
  


    if (petya==1 && vasya==1 || petya==1 && tonya==1 || vasya==1 && tonya==1)
     {
      possible++;
     }
   

  }

   printf("%d", possible);

 
   return 0;

}
