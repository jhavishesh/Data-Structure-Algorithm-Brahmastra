/* https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1#  */


//Solution:


long long findMinDiff(vector<long long> a, long long n, long long m){
    
    long long mindiff =INT_MAX;
    
    sort(a.begin(),a.end());              //sort the array
    for(int i=0;i+m-1<n;i++){
        
        long long diff =a[i+m-1]-a[i];   //let say array is 1 2 3 5 7 and m=3 so first triplet max =3 and min = 1 so diff = 3-1 =2
                                          //diff is a[i+m-1]-a[i] = a[0+3-1]-a[0]= 3-1 =2 which is least min among all the triplet
        
        mindiff=min(mindiff,diff);         //finding the least minimum among all m pairs
    }
    return mindiff; // return the result
    }   
