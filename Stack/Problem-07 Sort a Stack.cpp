// https://practice.geeksforgeeks.org/problems/sort-a-stack/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article


//Solution:

// Step 1: Put all element in priority_queue and pop all element from the queue.

/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
    priority_queue<int>q;
    
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
        
    }
    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
}
