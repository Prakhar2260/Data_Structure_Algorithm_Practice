/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** sortPeople(char** names, int namesSize, int* heights, int heightsSize, int* returnSize) 
{
      char **ptr = (char**)malloc(namesSize * sizeof(char*));

      for(int i=0;i<namesSize;i++)
       {
        ptr[i] = (char*) malloc(21*sizeof(char));
       }

       int In=0;


      int h=heightsSize;
      while(h>0)
    {
        int max=0;
        int index=0;
        for(int i=0;i<heightsSize;i++)
          {
            if(max<heights[i])
             {
                max=heights[i];
                index=i;
             }
          }

          heights[index]=-1;
          h--;

          strcpy(ptr[In++],names[index]);
    }


    *returnSize=namesSize;

    return ptr;
    
}
