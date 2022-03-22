	//https://practice.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1
  
  string removeDuplicates(string str) {
	    
	    string res ; // For the storing the result
	    
	    int hash[123]={0};  //initilization of hash array which takes all a-z || A-Z ASCII values
	    
	    for(int i=0;i<str.length();i++)
	    {
	        if(hash[str[i]]==0)  // Not visited yet || First Time
	        {
	            hash[str[i]]=1;   // Marked Visited
	            res+=str[i];    //append to res
	        }
	    }
	
	return res;  // return the result
}
