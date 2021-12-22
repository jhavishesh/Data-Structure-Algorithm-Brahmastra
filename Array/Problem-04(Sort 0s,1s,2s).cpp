
/* https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1 */



//Naive Approach:  Sort the Array using sort stl function.

void sort012(int a[], int n)
    {
        // coode here 
        sort(a,a+n);
        
    }
    


//Optimal Solution: Using DNF Algorithm:


 void sort012(int a[], int n)
    {
        // coode here
        
        int l=0;
        int m=0;
        int h=n-1;
        
        while(m<=h)
        {
            if(a[m]==0)
            {
                swap(a[l],a[m]);
                l++;
                m++;
            }
            else if(a[m]==1)
            {
                m++;
            }
            else
            {
                swap(a[h],a[m]);
                h--;
            }
        }
    }
