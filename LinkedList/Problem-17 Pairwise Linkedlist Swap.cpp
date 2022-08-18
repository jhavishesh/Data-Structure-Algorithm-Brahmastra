//Solution:

LLNode* solve(LLNode* node) {
    
    if(!node || !node->next)
        return node;
    
    LLNode*curr=node;

    while(curr and curr->next)
    {
        int first=curr->val;
        int second=curr->next->val;
        curr->next->val=first;
        curr->val=second;
        curr=curr->next->next;
    }
    return node;
}
