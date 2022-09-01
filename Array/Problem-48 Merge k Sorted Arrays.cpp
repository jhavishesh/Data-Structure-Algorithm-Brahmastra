// https://practice.geeksforgeeks.org/problems/merge-k-sorted-arrays/1


//Solution:

vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        vector<int>res;
        
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(int i=0;i<K;i++)
        {
            for(int j=0;j<K;j++)
            {
                pq.push(arr[i][j]);
            }
        }
        
        while(!pq.empty())
        {
            int x=pq.top();
            pq.pop();
            res.push_back(x);
            
        }
        return res;
    }
