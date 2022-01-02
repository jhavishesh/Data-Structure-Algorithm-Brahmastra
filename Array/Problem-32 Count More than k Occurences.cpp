/* https://practice.geeksforgeeks.org/problems/count-element-occurences/1#   */


//Solution:

int countOccurence(int arr[], int n, int k) {
        // Your code here
        
        unordered_map <int,int>m;
        
        int ctr=0;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
            if(m[arr[i]]==n/k+1)   //checking condition for the more than n/k + 1 
                ctr++;
        }
        return ctr;  
    }
