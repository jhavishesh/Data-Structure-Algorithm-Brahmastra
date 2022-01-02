/* Leetcode : https://leetcode.com/problems/maximum-product-subarray/  */

/* GeeksforGeeks: https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1 */


//Leetcode Solution:

int maxProduct(vector<int>& nums) {
         
      int res=nums[0];  //storing 1st element
	    int ma = res;     //initilize with 1st element
	    int mi=res;       //initilize with 1st element
	
	    for(int i=1;i<nums.size();i++) //Traversing the array
	    {
	        if(nums[i]<0)           // if the element is negative 
	        {
	         swap(ma,mi);            // swapping of ma and mi
	        }
	    ma= max(nums[i],nums[i]*ma);   // same as we did in kadane algo but slight difference is here * multiply is used.
	    mi =min(nums[i],nums[i]*mi);
	    res= max(res,ma);
	    }
	    return res;  // returning the result.
        
    }


// GeeksforGeeks Solution 

	long long maxProduct(vector<int> arr, int n) {           
	    // code here
	    
	    
    int64_t mx = 1, mn = 1, ans = LLONG_MIN, t;    // using 64bit integer to avoid the integer overflow.
    for (int i = 0; i < n; i++) {
        t = mx;
        mx = max({(int64_t)arr[i], mn*arr[i], mx*arr[i]});
        mn = min({(int64_t)arr[i], mn*arr[i], t*arr[i]});
        ans = max(ans, mx);
    }
    return ans;
	}
