/*  https://practice.geeksforgeeks.org/problems/find-second-largest-element2406/1#   */




//Solution:


 int print2largest(int arr[], int arr_size)
    {
    	/
    	    
    int first=0;
    int second=-1;
    
    for(int i=1;i<arr_size;i++)
    {
        if(arr[i]>arr[first])
        {
            second=first;
            first=i;
        }
        else if(arr[i]!=arr[first])
        {
            if(second==-1||arr[i]>arr[second])
            second=i;
        }
    }
    if(second==-1)
        return -1;
    else
    return arr[second];

    }
