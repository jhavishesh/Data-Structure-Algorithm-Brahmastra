/* https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1# */




//Naive Sol:  O(N^2)

int getPairsCount(int arr[], int n, int k) {
        // code here
        int ctr=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]+arr[j]==k)
                    ctr++;
            }
        }
        
        return ctr;
    }


//Optimal Sol:  O(N)

int getPairsCount(int arr[], int n, int k) {
        // code here
        
        unordered_map <int,int >m;
        
        int b;  // b= sum-a
        int res=0;  // storing the counting of pair sum
        for(int i=0;i<n;i++)
        {
            b=k-arr[i];  // finding the b
            
            if(m[b])  //checking b is present in map or not
            {
                res+=m[b];   // if present then add the count
            }
            m[arr[i]]++;   //otherwise increment the count of each element 
        }
        return res;   //return the sum of count
        
    }
