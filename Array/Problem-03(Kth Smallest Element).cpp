


/* https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1  */



//Method 1:

//Using sort function solved in O(nlogn) Time.

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        
        
        int n=r+1;
        sort(arr,arr+n);
        
        return arr[k-1];
    }
};


//Method 2:

//Using Max Heap Concept solved in O(nlogk) Time

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        
        priority_queue <int > p;
        
        for(int i=0;i<=r;i++)
        {
            p.push(arr[i]);
            
            if(p.size()>k)
                p.pop();
        }
        return p.top();
    }
};
