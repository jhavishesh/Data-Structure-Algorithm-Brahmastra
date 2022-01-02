/* https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1#  */




// Solution  for Intersection of array



int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        
        set <int >s;
        
        for(int i=0;i<n;i++){
            s.insert(a[i]);
        }
        vector <int >v;
        
        for(int j=0;j<m;j++)
        {
            if(s.find(b[j])!=s.end())
            {
                v.push_back(b[j]);
                
                s.erase(b[j]);
            }
        }
        return v.size();
    }
};
