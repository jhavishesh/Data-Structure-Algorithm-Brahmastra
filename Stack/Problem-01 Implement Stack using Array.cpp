// https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1#


//Solution:

void MyStack :: push(int x)
{
    arr[++top]=x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    if(top!=-1)      
    {
        int x=arr[top];
        top--;
        
        return x;
    }
    
    return -1;
}
