 /* https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1# */




// Solution for cyclic rotation



void rotate(int arr[], int n)
{
    
   int first = arr[n-1];
    for(int i=n-1; i>=0; i--){
    arr[i]=arr[i-1];
    }
    arr[0]=first;
    
    
}
