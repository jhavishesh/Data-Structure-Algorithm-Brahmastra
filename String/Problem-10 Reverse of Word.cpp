/* https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1/#  */


//Solution:

string reverseWords(string S) 
    { 
        string result="";
        string temp="";
        
        for(int i=S.length()-1;i>=0;i--)
        {
            if(S[i]=='.'){
                temp=temp+S[i];
                result=result+temp;
                temp="";
            }
            else
                temp=S[i]+temp;
        }
        result=result+temp;
        
        return result;
