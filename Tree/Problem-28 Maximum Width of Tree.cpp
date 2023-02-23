int getMaxWidth(Node* root) {

        int ans(0);
        
        if(!root)
            return ans;
        
        queue<Node *>q;
        
        q.push(root);
        
        while(!q.empty()){
            
            int size=q.size();
            
            ans=max(ans,size);
            
            for(int i=0;i<size;i++)
            {
                
                Node *curr=q.front();
                
                q.pop();
                
                if(curr->left)
                    q.push(curr->left);
                
                
                if(curr->right)
                    q.push(curr->right);
                    
            }
        }
        return ans;
    }
