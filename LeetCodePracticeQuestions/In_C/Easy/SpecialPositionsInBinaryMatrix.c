int numSpecial(int** mat, int matSize, int* matColSize)
{
    int count=0;
    int row=matSize;
    int col=matColSize[0];

    for(int i=0;i<row;i++)
      {
        for(int j=0;j<col;j++)
          {
            if(mat[i][j]==1)
              {
                int t=1;
                
                for(int m=0;m<col && t==1;m++)
                 {
                    if(m!=j && mat[i][m]==1)
                     {
                        t=0;
                        break;
                     }
                 }

                  for(int n=0; n<row && t==1; n++)
                 {
                    if(n!=i && mat[n][j]==1)
                     {
                        t=0;
                        break;
                     }
                 }
                  if(t)
                   count++; 
              }
          }
      }
    
    return count;
}
