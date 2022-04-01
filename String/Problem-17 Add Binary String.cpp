// https://practice.geeksforgeeks.org/problems/add-binary-strings3805/1#


//Solution:

string addBinary(string A, string B)
	{
	    int i(A.length()-1),j(B.length()-1); // we crete i & j pointer for string a & b and we have to start adding from right to left 
	    string res;
	    int sum,carry(0);// we create a carry, as we have to consider it as well
	    
	    
  // iterate over the loop until the both condition become false
	    while(i>=0 || j>=0)
	    {
	        sum=carry;
	        
	       if(i>=0)sum+=A[i--]-'0';
	       if(j>=0)sum+=B[j--]-'0';
	    // Now, we subtract by '0' to convert the numbers from a char type into an int, so we can perform operations on the numbers
	       carry= sum>1?1:0;
	    // getting carry depend on the quotient we get by dividing sum / 2 that will be our carry. Carry could be either 1 or 0 
			// if sum is 0 res is 1 & then carry would be 0;
            // if sum is 1 res is 1 & carry would be 0
            // if sum is 2 res is 0 & carry would be 1
            // if sum is 3 res is 1 & carry would be 1
	       res+=to_string(sum%2);
	       
	    }
	    if(carry!=0)  //still any carry remaining add to the result part
	    {
	        res+=to_string(carry);
	    }
	       
	    int k(res.length()-1);
	    
	    while(res[k] != '1') //skippling the trail zeros of the result
	    { 
	        res.pop_back(); 
	        k--;
	       
	    }

	    reverse(res.begin(),res.end());  //gettinng the actual result addition
	    return res;
	
	}
