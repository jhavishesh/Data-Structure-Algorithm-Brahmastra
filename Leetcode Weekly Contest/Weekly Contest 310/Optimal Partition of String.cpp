

//Solution:

int partitionString(string s) {
        
        int ans =1;  //partition 
        
        set<char>c;
        
        for(auto i:s)
        {
            if(c.find(i)!=c.end())  //find the char in set
            {
                ans++;   //if found seprate the character 
                c.clear(); //repeated is not allowed so clear the set
            }
            c.insert(i); //after clearing the dup char insert that in new set 
        }
        return ans;  //return the partition
    }
