/* https://practice.geeksforgeeks.org/problems/non-repeating-character-1587115620/1  */


//Solution:

    char nonrepeatingCharacter(string s)
    {
       int count[256]={0};
       
       
       for(int i=0;i<s.length();i++)
       {
          count[s[i]]++;
       }
       
       for(int i=0;i<s.length();i++)
       {
           if(count[s[i]]==1)
            return s[i];
       }
      
       return '$';
       
    }
