/* https://leetcode.com/problems/next-permutation/  */



/* Sample :   1 3 5 4 2  -> 1 4 2 3 5 

Naive Solution

Use next_permutation() function  */



// Optimal Solution : 

void nextPermutation(vector<int>& nums) {
        
        int n = nums.size(); // for the size of nums
        int k,l;
        
        for(k=n-2;k>=0;k--) //traversing from the back till get the break point i.e 3
        {
            if(nums[k]<nums[k+1]) // finding the breakpoint
            {
                break;  // if founded stop it
            }
                
        }
        
        if(k<0)  // if breakpoint not present this happen when elements are in descending order i.e 7 6 5 4
        {
            reverse(nums.begin(),nums.end());  // simply reverse the array 4 5 6 7
        }
        else    //otherwise
            {
                for( l=n-1;l>k;l--)   // again traverse from the back and find just greatar element than breakpoint i.e  4
                {
                    if(nums[l]>nums[k])   //finding that element
                    {
                        break;   //found then stop
                    }
                        
                }
     
            
            
        
        swap(nums[k],nums[l]);   // swap with breakpoint value to value just greatar than breakpoint  3-> 4
        
            reverse(nums.begin()+k+1,nums.end()); // reverse from the right to left side    1 4 3 2 5
        }
    }
