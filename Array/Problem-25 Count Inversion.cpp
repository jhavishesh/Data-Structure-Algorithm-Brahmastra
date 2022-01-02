/*  https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1# */


//Naive Sol:

long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        int ctr=0;
        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                if(arr[i]>arr[j])
                    ctr++;
            }
            
        }
        return ctr;
    }

//Optimal Sol:

