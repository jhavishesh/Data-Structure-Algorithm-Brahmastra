//https://practice.geeksforgeeks.org/problems/topological-sort/1


//Solution:

//Step 1: Using DFS and stack to store the ordering the node.

	void findtop(int source,vector<bool>&vis,stack<int>&st,vector<int>adj[])
	{
	    vis[source]=true;
	    
	    for(auto it:adj[source])
	    {
	        if(!vis[it])
	        {
	            findtop(it,vis,st,adj);
	        }
	    }
	    st.push(source);
	}
	vector<int> topoSort(int N, vector<int> adj[]) 
	{
	    stack<int>st;
	    vector<bool>vis(N,false);
	    
	    for(int i=0;i<N;i++)
	    {
	        if(vis[i]==false)
	        {
	            findtop(i,vis,st,adj);
	        }
	    }
	    vector<int>res;
	    
	    while(!st.empty())
	    {
	        res.push_back(st.top());
	        st.pop();
	    }
	    return res;
	}
