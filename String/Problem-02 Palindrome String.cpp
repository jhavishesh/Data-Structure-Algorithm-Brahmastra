/* https://practice.geeksforgeeks.org/problems/palindrome-string0817/1#  */

//Solution:

	
	int isPalindrome(string S)
	{
	    
	    int start(0),end(S.length()-1);
	    
	    while(start<end){
	        
	        if(S[start]!=S[end])
	            return 0;
	       
	        start++;
	        end--;
	    }
	    return 1;
	}
