//https://practice.geeksforgeeks.org/problems/level-order-traversal/1/#

//Solution:
vector<int> levelOrder(Node* node)
    {
        vector<int>res;
      
      if(node==NULL)
        return res ;
        
    queue<Node*>q;
    q.push(node);
    
    while(!q.empty())
    {
        Node *curr=q.front();
        
        
        res.push_back(curr->data);
        q.pop();
        
        if(curr->left!=NULL)
            q.push(curr->left);
        
        if(curr->right!=NULL)
     
       q.push(curr->right);
    }
    
    return res;
    }
