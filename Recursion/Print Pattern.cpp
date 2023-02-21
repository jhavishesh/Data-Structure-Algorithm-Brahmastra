// https://practice.geeksforgeeks.org/problems/print-pattern3549/1


 vector<int>res;
    
    void helper(int n){
    
        
        if(n<=0)
        {
            res.push_back(n);
            return;            
        }
        res.push_back(n);
        helper(n-5);
        res.push_back(n);
    }
    vector<int> pattern(int n){
        
       helper(n);
       
       return res;
    }
