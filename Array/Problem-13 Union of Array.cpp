
/* https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1#  */



//Solution for Union of Array

 int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set <int >v;
        
        for(int i=0;i<n;i++)
            v.insert(a[i]);
    
         for(int i=0;i<m;i++)
            v.insert(b[i]);

     
     return v.size();
    }


