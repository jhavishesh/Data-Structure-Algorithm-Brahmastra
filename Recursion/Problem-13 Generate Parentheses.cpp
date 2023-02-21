 void findall(string s,int open,int close,vector<string>&res,int n)
    {
        
        if(s.length()==2*n)
        {
            res.push_back(s);
            
            return;
        }
  
        
        if(open<n)
            findall(s+"(",open+1,close,res,n);
        
        if(close<open)
            findall(s+")",open,close+1,res,n);
    }
    vector<string> AllParenthesis(int n) 
    {
        vector<string>res;
        
        findall("(",1,0,res,n);
        
        
        return res;
    }
