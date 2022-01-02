/*Sort one array according to another array
Input:
a[] = {3, 1, 2}
b[] = {'G', 'E', 'K'}
Output:
E K G
Explanation: Here 3 corresponds to G,
1 corresponds to 'E', 2 corresponds to 'K'
 
Example 2:
Input:
a[] = {4, 1, 3, 2}
b[] = {'A', 'X', 'B', 'Y'}
Output:
X Y B A
Explanation:
Your Task:
Your task is to complete the function sortArray() which takes two array as input and sorts the second array with respect to the first array. 
The function prints the second array space separated.    */



void sortArray(int a[], char b[], int n){
    
    // code here
    pair <int ,char >p1[n];
   
   for(int i=0;i<n;i++)
   {
       p1[i].first=a[i];
       p1[i].second=b[i];
   }
   
   sort(p1,p1+n);
   
   for(int i=0;i<n;i++)
   {
       cout<<p1[i].second<<" ";
   }    

}
