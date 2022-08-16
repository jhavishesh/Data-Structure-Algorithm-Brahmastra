//https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/0


//Solution:

//Approach:

Algorithm rotate(arr, d, N):
    reverse(arr, 1, d) ;
    reverse(arr, d + 1, N);
    reverse(arr, 1, N);


    
    void reverse(int arr[],int start,int end)
    {
        while(start<end)
        {
            swap(arr[start++],arr[end--]);
        }
    }
    void rotateArr(int arr[], int d, int n){
        
        if(d==0)
            return;
        
        d=d%n;
        
        reverse(arr,0,d-1);;
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
    }
