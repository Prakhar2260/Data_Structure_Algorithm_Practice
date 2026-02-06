# include <stdio.h>

int main()
{

    int N;
    scanf("%d",&N);

    char array[N][20];

    for(int i=0;i<N;i++)
     {
        scanf("%s\n",array[i]);
     }

     int n=0;

     for(int i=0;i<N;i++)
      {
        if(strcmp(array[i], "Tetrahedron") == 0)
         {
            n+=4;
         }

        else if(strcmp(array[i], "Cube") == 0)
         {
            n+=6;
         }

        else if(strcmp(array[i], "Octahedron") == 0)
         {
            n+=8;
         }

        else if(strcmp(array[i], "Dodecahedron") == 0)
         {
            n+=12;
         }
        else if(strcmp(array[i], "Icosahedron") == 0)
         {
            n+=20;
         }
      }

        printf("%d\n",n);

    return 0;
}
