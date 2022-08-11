/* https://practice.geeksforgeeks.org/problems/rotate-by-90-degree0356/1/# */


//Solution:[AnticlockWise]

void rotate(vector<vector<int> >& matrix)
{   
    int N = matrix.size();  //size of a matrix
    for(int i=0;i<N;i++)
    {
        for(int j=i;j<N;j++)
        {
            swap(matrix[j][i],matrix[i][j]); //transpose of the matrix
            
        }
    }
  
  int start(0),end(N-1);
   
  while(start<end)
    {
        swap(matrix[start++],matrix[end--]);  //swappig the last row to first row until we do not reach to middle row.
        //start++;
        //end--;
    }
    
//Solution [Clockwise]
    
        void rotate(vector<vector<int>>& matrix) 
        {
        
        int n=matrix.size();

        
        
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                swap(matrix[j][i],matrix[i][j]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
}
