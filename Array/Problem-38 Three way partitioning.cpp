/* https://practice.geeksforgeeks.org/problems/three-way-partitioning/1# */



//  Naive Solution:

void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
       sort(array.begin(),array.end());
        
    }


//Optimal Solution: O(N)  
//Apply the DNF Algorithm 


void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
        int low=0;
        int mid=0;
        int high=array.size()-1;
        
        while(mid<=high){
            
            if(array[mid]<a){
                
                swap(array[low],array[mid]);
                mid++;
                low++;
            }
            else if(array[mid]>b){
                swap(array[mid],array[high]);
                high--;
            }
            else
            mid++;
                
        }
    }



