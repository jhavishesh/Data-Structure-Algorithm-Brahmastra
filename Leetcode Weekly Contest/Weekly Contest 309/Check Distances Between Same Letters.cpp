
//https://leetcode.com/problems/check-distances-between-same-letters/

//Solution:

    bool checkDistances(string s, vector<int>& distance) {
        
        map<char,vector<int>>m;   // Store char occurance in vector map
        
        for(int i=0;i<s.length();i++)
        {
            m[s[i]].push_back(i);
        }
        
        for(auto x:m)
        {
            if(x.second[1]-x.second[0]-1 !=distance[x.first-'a'])   // compare their distance with distance vector element
                    return false;
        }
        return true;
    }



