/* https://leetcode.com/problems/find-the-duplicate-number/ */


 int findDuplicate(vector<int>& nums) {
         
        int res=0;
        sort(nums.begin(),nums.end());
        
        for(int i=1;i<nums.size();i++)
        {
            
        
        
            if(nums[i]==nums[i-1])
                 res =nums[i];
        }
        
        
        return res;
    }
        
  /* https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1#  */

//Solution:

 vector<int> duplicates(int arr[], int n) {
        unordered_map <int,int>mp;
        
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;   //track the count of element
        }
        
        vector<int>res;
        for(auto it:mp)
        {
             if(it.second>1) 
                res.push_back(it.first);  // push element whose count>1 
            
        }
        if(res.size()==0)    // if all the elements are distinct then return -1
            res.push_back(-1);
        
        sort(res.begin(),res.end());   // sort the result as it demand of question
        return res;
        
        
    }

