// https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1

//Solution:

int celebrity(vector<vector<int> >& arr, int n) 
    {
        int ans=-1;//Initial there is no celebrity
        int j=0;
        for(int i=0;i<n;i++)
        {
            for(j=0;j<arr[i].size();j++)
            {
                if(arr[i][j]==1) //if we get any celebrity we stop there
                {
                    break;
                }
            }
            if(j==arr[i].size() && ans == -1) // traverse in that row and check whether there is only 1 celebrity if yes then store in ans
             ans=i;
             else if(j==arr[i].size() && ans != -1)
             return -1;  //if celebrity also know someone then in that case that will not be celebrity
        }
        return ans;  //return the celebrity

    }
