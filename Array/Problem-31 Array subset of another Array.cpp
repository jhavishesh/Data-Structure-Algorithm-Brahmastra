/* https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1# */


//Solution :

string isSubset(int a1[], int a2[], int n, int m) {
    
     
    sort(a1,a1+n);
    for(int i=0;i<m;i++)
    {
        if(!binary_search(a1,a1+n,a2[i]))  // searching a2[elements] in a1[array] if not found then return No
            return "No";
    
    }
    
            return "Yes";    // if present then yes.
    
}
