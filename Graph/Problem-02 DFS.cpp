// https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1#

//Solution:

 void dfs(int source,vector<int>&ans,vector<bool>&visited,vector<int>adj[])
    {
        ans.push_back(source);
        visited[source]=true;
        for(auto it:adj[source])
        {
            if(visited[it]==false)
            dfs(it,ans,visited,adj);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<bool>visited(V,false);
        vector<int >ans;
        dfs(0,ans,visited,adj);
        return ans;
    }

