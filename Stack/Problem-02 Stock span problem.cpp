

//Solution:

vector <int> calculateSpan(int price[], int n)
    {
       vector<int>ans;
       
       stack<pair<int,int>>s;
       
       for(int i=0;i<n;i++)
       {    
           int day=1;
           while(!s.empty() and s.top().first<=price[i]){
               day+=s.top().second;
               s.pop();
           }
           s.push({price[i],day});
           ans.push_back(day);
           
       }
       
       return ans;
       
    }
