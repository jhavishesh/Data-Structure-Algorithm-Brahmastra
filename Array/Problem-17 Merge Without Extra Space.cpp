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
