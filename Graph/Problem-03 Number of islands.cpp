/* https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1


Approach:

Perform DFS for every non-visited node in all 8 directions and check for 1 if it is then increment the count otherwise skip it.  */

//Solution:

    void dfs(vector<vector<char>>&grid,int i,int j)
    {   
        int n=grid.size();
        int m=grid[0].size();
        
        
        if(i<0 || j<0||i>=n || j>=m)  // boundary condition
            return;
        
        if(grid[i][j]!='1')  //base condition
            return;
        
        grid[i][j]='2'; //this ensure that node grid's cell is already visited
        
        dfs(grid,i+1,j);  //Goes in all 8 direction for every non visited nodes
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
        dfs(grid,i+1,j+1);
        dfs(grid,i-1,j-1);
        dfs(grid,i+1,j-1);
        dfs(grid,i-1,j+1);
        
        
        
        
    }
    int numIslands(vector<vector<char>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        

        int ctr(0);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(grid,i,j);
                    ctr++;  //counting the number of islands
                }
                    
                    
            }
        }
        
        return ctr;
    }
