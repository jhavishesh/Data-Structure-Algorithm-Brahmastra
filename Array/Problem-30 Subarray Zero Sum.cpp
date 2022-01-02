/*  https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1# */


//Naive Sol : O(n^2)

int subarraysum(int arr[],int n)
{   int sum;
  for(int i=0;i<n;i++)
  {     sum=0;
      
    for(int j=i;j<n;j++)
    {
        sum+=arr[j];  // making all the sub-array 
        
        if(sum==0)   //checing for the all the subarray
            cout<<"yes";
       
    }

  }
  
  return -1;  // else no subarray found

}

//Optimal Solution:

bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_map <int ,bool> m;    // map beacause it has O(1)
        
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i]; //prefix sum 
            
            if(sum==0 || m[sum]==true)    // checking sum value and also whether sum is present in map or not 
                return true;               // if yes then return true
            
            m[sum]=true;   //if sum is not in map then put it into map
            
        }
        return false;   // return no sub-array found
    }
