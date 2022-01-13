/* https://practice.geeksforgeeks.org/problems/search-in-a-matrix17201720/1# */

//GeeksforGeeks Version Solution :

int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	   
      int i=0, //row intialization
      int j=M-1; //col intialization | we start traversing from the last column to first column
	    while(i<N && j>=0){    //Terminating case is row not exceed to N | column not decrease than 1row.
	        if(mat[i][j]==X)   //finding the element if found then return 1
	        return 1;
	        else if(X<mat[i][j])  //if key value is less than colmn value then we go to prev column 
	        j--;
	        else
	        i++;   //if key value is more than column value than we traverse to the row
	        
	    }
	    return 0; //if not found then we return the 0
	}

//LeetCode Version

/*  https://leetcode.com/problems/search-a-2d-matrix/  */


bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        
        if(!matrix.size()) return false;   //if the size is zero return false
        int n=matrix.size();      //initialize the row
        int m= matrix[0].size();  //initialize the colmn
        
        
  // all the matrix in sorted order from idx =0 to (n*m)-1
        int low=0;    
        int high= (n*m)-1;
        
  //Applying the Binary search
        while(low<=high){
            int mid= (low+(high-low)/2);  
            
            if(matrix[mid/m][mid%m]==target){
                return true;
            }
                
             if(matrix[mid/m][mid%m]<target){  // here we find the imaginary index through [mid/m][mid%m]
                 low=mid+1;                   //if the target value is greatar than img idx value than we shift to downward
             }
                
            else
                high=mid-1;  //else we move toward column
            
        }
        return false;  //ifnot found then return the false
        
    }
