/* https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1# */


//Naive Sol with extra space

void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    
	    vector <int > v;
	    
	    for(int i=0;i<n;i++)
	    {
	        v.push_back(arr1[i]);
	    }
	     for(int j=0;j<m;j++)
	    {
	        v.push_back(arr2[j]);
	    }
	    
	     sort(v.begin(), v.end());
	     int k=0;
         for(int i=0;i<n;i++){
            arr1[i]=v[k];
            k++;
            }
            for(int i=0;i<m;i++){
             arr2[i]=v[k];
                 k++;
                }
}

 void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            
            int i(n-1),j(0);
            
            while(i>=0 and j<m)
            {
                if(arr1[i]>arr2[j])
                    swap(arr1[i--],arr2[j++]);
                
                else
                    break;
                    
            }
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
        } 
