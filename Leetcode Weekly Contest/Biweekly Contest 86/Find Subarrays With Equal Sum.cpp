// https://leetcode.com/problems/find-subarrays-with-equal-sum/


//Solution:

bool findSubarrays(vector<int>& nums) {
        
        set<int>res; //It stores only distinct element
        
        for(int i=1;i<nums.size();i++)
        {
            res.insert(nums[i]+nums[i-1]); //store all consective element sum
            
        }
        
        if(res.size()==nums.size()-1) //if all sum is distinct then set size =nums.size()-1  then there is no subarray present.
                return false;
        
        return true;  //otherwise return true
  
    }
