//https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1#

//Solution:

int minJumps(int arr[], int n){
        
        int farthest(0),jump(0),reach(0);
        
        for(int i=0;i<n-1;i++)
        {
            farthest=max(farthest,arr[i]+i);  //for the farthest can be jumped 
            
            if(i==reach)  //if index ==reach then we need to jump from there
            {
                jump++;
                reach=farthest;
            }
            
        }
        
        if(reach<n-1)  //after traversing the array reach step is not satisfy the step
            return -1;
        
        
        return jump;  //return the required jumps
    }
