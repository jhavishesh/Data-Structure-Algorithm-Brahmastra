/* https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1 */

//Solution:

 bool ispar(string x)
    {   
        stack<char> s;
        for(int i=0;i<x.length();i++){
            
            if(x[i]=='{'||x[i]=='('|| x[i]=='[')
                s.push(x[i]);
            
            else if(!s.empty() && x[i]=='}' && s.top()=='{')
                s.pop();
            else if(!s.empty() && x[i]==')' && s.top()=='(')
                s.pop();
            else if(!s.empty() && x[i]==']' && s.top()=='[')
                s.pop();
            
            else
                s.push(x[i]);
        
    }
        if(s.empty())
            return true;
        else
            return false;
    }
