/* https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1 */

long long maxSubarraySum(int arr[], int n){
        
        // Your code here
         int res= arr[0];
        int maxending = arr[0];
        
        for(int i=1;i<n;i++)
        {
            maxending = max(maxending + arr[i], arr[i]);
            res= max(res,maxending);
        }
        return res;
        
        
    }
