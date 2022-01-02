
/* https://practice.geeksforgeeks.org/problems/common-elements1132/1# */


// Solution:

 vector <int> commonElements (int ar1[], int ar2[], int ar3[], int n1, int n2, int n3)
        {
            int i = 0, j = 0, k = 0; 
            vector<int> ans;
            int prev1, prev2, prev3;  //pointer for the all three array's elements
         
            prev1 = prev2 = prev3 = INT_MIN;
         
            while (i < n1 && j < n2 && k < n3) {   // traversing all 3 array 
               
                while (ar1[i] == prev1 && i < n1)    // if prev element is same then increment i.e 3 3 3 so like that 
                    i++;
         
                while (ar2[j] == prev2 && j < n2)     // same for array 2
                    j++;
         
                while (ar3[k] == prev3 && k < n3)   // same for array 3
                    k++;
         
                if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) {   // if the element is present in all three then push in ans vector
                    ans.push_back(ar1[i]);
                    prev1 = ar1[i];       // then increment the pointer for array 1
                    prev2 = ar2[j];        // then increment the pointer for array 2
                    prev3 = ar3[k];         // then increment the pointer for array 3
                    i++;
                    j++;
                    k++;
                }
         
                else if (ar1[i] < ar2[j]) {  // if array 1 element is smaller than 2 & 3 increment the counter i.e      2  3  4   7
                    prev1 = ar1[i];         //                                                                          4  5  6   9
                    i++;                   //                                                                           4  5  6   11
                }
         
                else if (ar2[j] < ar3[k]) {       // same for arr2 element
                    prev2 = ar2[j];
                    j++;
                }
          
                else {
                    prev3 = ar3[k];     // same for the arr3 element
                    k++;
                }
            }
            
            return ans;        // return the answer 
        }
