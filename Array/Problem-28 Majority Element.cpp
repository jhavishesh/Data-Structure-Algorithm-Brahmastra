/* https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1  */



// optimal Solution: 

 int majorityElement(int a[], int size)
    {
        
        int vote(0),maj(0);
        
        for(int i=0;i<size;i++)
        {
            if(vote==0)
            {
                maj=a[i];
                vote=1;
            }
            else if(maj==a[i])
                vote++;
            
            else
                vote--;
        }
        vote=0;
        
        for(int i=0;i<size;i++)
        {
            if(maj==a[i])
                vote++;
        }
        return vote>(size/2)?maj:-1;
        
    }

int majorityElement(int a[], int size)
    {
         unordered_map<int,int>mp;   //creating a unordered_map 
       for(int i=0;i<size;i++){
           mp[a[i]]++;                 //tracking count of each elements
       }
       for(auto it=mp.begin();it!=mp.end();it++){   //Traversing through map and first _> element and second_> frequencies
         
           if(it->second>size/2){ // checking the given condition
               return it->first;    //return the element whose satisfying the condition 
           }
       }
       return -1;    //if no element then return -1
