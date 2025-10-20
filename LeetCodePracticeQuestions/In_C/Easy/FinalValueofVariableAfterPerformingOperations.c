int finalValueAfterOperations(char** operations, int operationsSize) 
{
      int X=0;  

      int len=operationsSize;

      for(int i=0;i<len;i++)
      {
      if(strcmp(operations[i],"X++")==0 ||strcmp(operations[i],"++X")==0)
        X++;  

      if(strcmp(operations[i],"X--")==0 || strcmp(operations[i],"--X")==0)
        X--;    
    }
   
    return X; 
}
