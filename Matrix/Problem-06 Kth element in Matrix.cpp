/* https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1 */

//Solution:

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  
  priority_queue <int> p;
  
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          p.push(mat[i][j]);
         
        
        if(p.size()>k)
            p.pop();
      }
  }

    
    return p.top();
}
