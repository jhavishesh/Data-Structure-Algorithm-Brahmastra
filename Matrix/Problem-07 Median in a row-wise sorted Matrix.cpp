/* https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1  */

//Naive Solution:

int median(vector<vector<int>> &matrix, int r, int c){
        
        vector <int>v;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                v.push_back(matrix[i][j]);
            }
        }
        sort(v.begin(),v.end());
        
        return v[v.size()/2];
    }

//Optimal Solution:

int median(vector<vector<int>> &matrix, int r, int c){
      long long int  l=1,h=1e18;
      while(l<=h)
      {
          long long int mid=l+(h-l)/2,t=0;
          
          for(int i=0;i<r;i++)
          {
              auto it=upper_bound(matrix[i].begin(),matrix[i].end(),mid);
              t=t+it-matrix[i].begin();
          }
          if(t<=(r*c)/2) l=mid+1;
          else h=mid-1;
      }
      return l;
   }
