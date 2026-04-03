bool canConstruct(char* ransomNote, char* magazine)
 {
    int freq1[26]={0};
    int freq2[26]={0};

    for(int i=0;ransomNote[i]!='\0';i++)
     {
        freq1[ransomNote[i]-'a']++;
     }

     for(int i=0;magazine[i]!='\0';i++)
     {
        freq2[magazine[i]-'a']++;
     }

     for(int i=0;i<26;i++)
      {
        if(freq1[i]>freq2[i])
          return false;
      }

      return true;

    
}
