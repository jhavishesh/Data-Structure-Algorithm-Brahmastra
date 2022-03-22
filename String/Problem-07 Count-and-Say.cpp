/* https://leetcode.com/problems/count-and-say/  */

//Solution:
 string countAndSay(int n) {
        if(n == 1) //base cases
          return "1";
        if(n == 2)
          return "11";
          
        string str = "11";
        
        for(int i = 3; i <= n; i++)
         {
             str += '$'; //for the end of string
             int len = str.length();
             
             int cnt = 1;  
             string tmp = ""; //for storing the individual string and its count
             
             for(int j = 1; j < len; j++)
              {
                  if(str[j] != str[j - 1])  //track of same element
                    {
                        tmp += cnt + '0';
                        tmp += str[j - 1];
                        cnt = 1; //set the counter 1 
                    }
                   else
                     cnt++; 
              }
            str = tmp;  
         }
         
        return str;  //return the finl result
    }
