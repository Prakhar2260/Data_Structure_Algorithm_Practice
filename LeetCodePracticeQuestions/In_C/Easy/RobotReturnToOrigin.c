bool judgeCircle(char* moves) 
{
    int up=0,down=0,left=0,right=0;

    for(int i=0;moves[i]!='\0';i++)
     {
        if(moves[i]=='U')
          up++;

        else if(moves[i]=='D')
          down++;

        else if(moves[i]=='L')
          left++;

         else
          right++;
     }

     if(up==down && left==right)
      return true;

      return false;
    
}
