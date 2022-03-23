// https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1#

//Solution:

//Don't try to remove the duplicated elements. The thing that we need to do here is to place all the n distinct elements in first n places and return the size n.

int remove_duplicate(int a[],int n){
        int idx = 0;
        for(int i = 0; i < n; i++){
            if(a[idx] != a[i]){
                idx++;
                a[idx] = a[i];
            }
        }
        
        return idx + 1;
    }
