void dfs(int i ,int j,vector<vector<int>>& image,vector<vector<int>>& vis,int oldcolor,int newcolor,int row,int col)
    {
        if(i<0 || j<0 || i>=row || j>=col)
            return;
        
        if(vis[i][j] || image[i][j]!=oldcolor)
            return;
        
        vis[i][j]=1;
        image[i][j]=newcolor;
        
        dfs(i+1,j,image,vis,oldcolor,newcolor,row,col);
        dfs(i-1,j,image,vis,oldcolor,newcolor,row,col);
        dfs(i,j+1,image,vis,oldcolor,newcolor,row,col);
        dfs(i,j-1,image,vis,oldcolor,newcolor,row,col);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
    
    int row=image.size();
    int col=image[0].size();
    
    int oldcolor=image[sr][sc];
    
    vector<vector<int>>vis(row,vector<int>(col,0)); 
    
    dfs(sr,sc,image,vis,oldcolor,newcolor,row,col);
    
    
    return image;
    }
