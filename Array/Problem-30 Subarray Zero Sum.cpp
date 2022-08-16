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
        
        unordered_map<int,int>m;
        int sum(0),flag(0);
        
        
        /* Check 3 condition:
        1. Either element is 0 
        2. prefix sum is 0
        3. prefix sum is repeated i.e 4 and again 4 is came it means there is subarray =0 */
  
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            
            if(sum==0 || m[sum]==1 || arr[i]==0)
            {
                f=1;
                break;
            }
            else
                m[sum]=1;
        }
        if(f)
            return true;
        else
            return false;
       
    }
