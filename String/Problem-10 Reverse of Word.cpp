/* https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1/#  */


//Solution:

string reverseWords(string S) 
    { 
        for(int i=0,j=0;i<=S.size();i++){
            
            if(S[i]=='.' || i==S.size())
            {
                reverse(S.begin()+j,S.begin()+i);
                j=i+1;
            }
        }
        reverse(S.begin(),S.end());
        
        return S;
    } 
