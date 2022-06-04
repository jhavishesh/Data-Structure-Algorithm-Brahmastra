// https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1


//Solution:

 vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        
        vector<bool> vis(V,false); //for setting all the node aren't discovered
        
        vector<int>res;  //for storing the result
        
        queue<int>trav;//for traversing
        
        vis[0]=true; //set source node as visted
          
        trav.push(0); //push source node in queue
        
        while(!trav.empty()) 
        { 
            int u=trav.front();   //take front item of queue
            trav.pop();
            
            res.push_back(u);
            
            for(int v:adj[u])
            {
                if(vis[v]==false)   //check the friend node is already visited or not
                {
                    trav.push(v);
                    vis[v]=true;   //if not visited then enqueue the node and set as visited
                }
            }
        }
        
        return res;  //return the result
        
    }
