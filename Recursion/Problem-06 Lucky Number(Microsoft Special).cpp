/* https://practice.geeksforgeeks.org/problems/lucky-numbers2911/1/?track=P100-Recursion&batchId=197# */

//Solution:

 bool isLucky(int n) 
    {
        int ctr=2; //Initilization of counter to find lucky number
        while(n>=ctr)
        {
            if(n%ctr==0)  // removing element as per counter value
                return false;
            
            n-=n/ctr;  //finding the remaining elements after removal
            ctr++;     //increment the counter
        }
        return true;
    }
