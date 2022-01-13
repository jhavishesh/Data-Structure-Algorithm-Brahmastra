/*  https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1#  */


//Naive sol

	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    
	    int maxi=0;  //for maximum count of 1
	    int row=-1;  //for final row
	   
	    for(int i=0;i<n;i++)  //traversing the matrix
	    {   
	        int ctr=0;
	        for(int j=0;j<m;j++){
	            
	            if(arr[i][j]==1) //checking element's value is 1 
	                ctr++;     //track of count
	        }
	        if(ctr>maxi){  //finding the max count
	          
	         maxi=ctr;  //updating the max count
	         row=i;     //updating max 1's row index
	        }
	        
	        
	        
	    }

    return row;  //return the result
       
	}


//Optimal sol :

/* Approach :
To solve in O(N + M) start from the top right corner of the matrix and keep 
Track of the index of the row which has maximum 1s. 
Go left if you encounter 1
Go down if you encounter 0
Stop when you reach the last row or first column. */

int rowWithMax1s(vector<vector<int> > mat, int n, int m) {
	    int i=0,j=m-1,ans=-1;
	    while(i<n and j>=0){
	        if(mat[i][j]==1){
			   ans=i;
	            j--;
	        }
	        if(mat[i][j]==0){
	        i++;
	        }
	   }
	    return ans;
	}
