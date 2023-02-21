// https://practice.geeksforgeeks.org/problems/recursively-remove-all-adjacent-duplicates0744/1


string rremove(string s){
        
        string res="";
        
        int n=s.length();
        
        for(int i=0;i<n;i++)
        {
            if(s[i]==s[i+1] || s[i]==s[i-1])
                continue;
            
            
            else
                res.push_back(s[i]);
        }
        
        if(res.size()==n)
            return s;
        
        
        return rremove(res);
            
    }
