//https://leetcode.com/contest/weekly-contest-310/problems/most-frequent-even-element/


//Solution:

int mostFrequentEven(vector<int>& nums) {
        
        map<int,int>m;
        //Store element in asending order with their frquency
            
        for(auto i:nums)
        {
            if(i%2==0)
                m[i]++;
        }
        int res(-1),freq(INT_MIN);
        
        for(auto x:m)
        {
            if(x.second>freq)
            {
                res=x.first;
                freq=x.second;
            }
        }
        return res;
    }
