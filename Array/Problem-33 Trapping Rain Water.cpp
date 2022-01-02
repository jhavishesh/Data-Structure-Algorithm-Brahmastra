/* https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1#  */


//Solution: TC : O(N) | SC: O(N);

 long long trappingWater(int arr[], int n){
        // code here
        
        int l[n];
        int r[n];
        
        l[0]= arr[0];
        r[n-1]=arr[n-1];
        long long int sum =0;
        for(int i=1;i<n;i++){
            
            l[i]=max(l[i-1],arr[i]);
            
        }
        for(int i=n-2;i>=0;i--){
            
            r[i]=max(r[i+1],arr[i]);
            
        }
        
        for(int i=0;i<n;i++){
            
            sum+= min(l[i],r[i])-arr[i];
        }
        
        return sum;
        
    }
