/* https://leetcode.com/problems/next-permutation/ */



//Optimal Sol:


ector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> mergedinterval;  // for storing the result
        
        if(intervals.size()==0)  //check the size of interval if empty return empty mergedinterval
        {
            return mergedinterval;
        }
            
        
        sort(intervals.begin(),intervals.end());  // sort the intervals
        
        vector <int> tempinterval= intervals[0];    //storing the temp interval for comparison and for merging
        
        for(auto it: intervals){    // traversal
            
            if( it[0] <= tempinterval[1])  // comaprison of right element of interval to the right element of tempinterval
            {
                tempinterval[1] = max(it[1],tempinterval[1]); // if greatar than merge the smaller interval in larger interval
            }
            else
            {
                mergedinterval.push_back(tempinterval);    //if interval can't be merged then add it to the result's mergedinterval
                tempinterval=it;    // set back to iterator 
            }
            
            
                
        }
        
        mergedinterval.push_back(tempinterval);  // push intervals if any left out
        return mergedinterval;     //return the result.
        
        
    }
