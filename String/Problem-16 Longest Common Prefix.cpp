//https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1/#

//Solution:

 string longestCommonPrefix (string arr[], int N)
    {   
       bool common = true;  //for the common prefix
       int j=0;  //for traversing first word
       string s; 
       while(common && j<arr[0].length())
       {
           for(int i=1;i<N;i++)
            {
                    if(arr[0][j] != arr[i][j]) //if prefix is not common set to false
                    common= false;
             }
             
           if(common) 
            s.push_back(arr[0][j]);  //if common then push first word till matching part
            j++;  
       }
       
       return s.length() ? s : "-1" ;  //return the s if it is not empty otherwise return -1
           
    }
