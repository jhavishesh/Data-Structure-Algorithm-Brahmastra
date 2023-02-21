vector<string> AllPossibleStrings(string s){
		    
		    vector<string>res;
		    
		    for(int num=1;num<(1<<s.length());num++)
		    {
		        
		        string sub="";
		        
		        for(int j=0;j<s.length();j++)
		        {
		                
		              if(num&(1<<j))
		                sub+=s[j];
		                
		        }
		        res.push_back(sub);
		    }
		    sort(res.begin(),res.end());
		    
		   
		   
		   return res;
		}
