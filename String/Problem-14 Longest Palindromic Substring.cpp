// https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string1956/1/#


//Solution:

string longestPalindrome(string S){
        
        int n= S.length();
        
        string temp,res;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                temp= S.substr(i,j-i+1);  //finding the substring 
                
                if( temp==string(temp.rbegin(),temp.rend()) &&  temp.size()>res.size() )  // checking  start and end char is same and also inbetween character are palindrome or not
                    
                    res=temp;
            }
        }
        
        return res; //return the result.
    }
