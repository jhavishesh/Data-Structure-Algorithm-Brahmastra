/*  https://practice.geeksforgeeks.org/problems/find-the-median0527/1#  */


//Solution: 

int find_median(vector<int> v)
		{
		    
		    sort(v.begin(),v.end());  //sort the array
		    
		   int n = v.size();
		   
		   if(n%2==0){   //checking size is even or odd
		       
		       return floor((v[n/2]+v[(n/2)-1])/2);  // finding the median
		   }
		   else
		        return v[n/2];  //returning the median if size is odd
		}
