/* https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1   */


int getMinDiff(int arr[], int n, int k) {
        // code hee
        
        sort(arr,arr+n);
        
        int min_ = arr[0];
        int max_ = arr[n-1];
        int res = max_ - min_;
        
        for(int i=0;i<n;i++)
        {
            max_= max(arr[i-1]+k ,arr[n-1]-k);
            min_ = min(arr[i]-k,arr[0]+k);
            res = min(res, (max_-min_));
            
        }
        return res;
